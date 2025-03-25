// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/WorldPartition/DataLayer/DataLayerSubsystem.h"
#include "Runtime/Engine/Public/WorldPartition/DataLayer/ActorDataLayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataLayerSubsystem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UDataLayerAsset_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDataLayerInstance_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDataLayerLoadingPolicy_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDataLayerSubsystem();
ENGINE_API UClass* Z_Construct_UClass_UDataLayerSubsystem_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDataLayerRuntimeState();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDataLayerState();
ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnDataLayerRuntimeStateChanged__DelegateSignature();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FActorDataLayer();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Delegate FOnDataLayerRuntimeStateChanged
struct Z_Construct_UDelegateFunction_Engine_OnDataLayerRuntimeStateChanged__DelegateSignature_Statics
{
	struct _Script_Engine_eventOnDataLayerRuntimeStateChanged_Parms
	{
		const UDataLayerInstance* DataLayer;
		EDataLayerRuntimeState State;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayerSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataLayer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DataLayer;
	static const UECodeGen_Private::FBytePropertyParams NewProp_State_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_State;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Engine_OnDataLayerRuntimeStateChanged__DelegateSignature_Statics::NewProp_DataLayer = { "DataLayer", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Engine_eventOnDataLayerRuntimeStateChanged_Parms, DataLayer), Z_Construct_UClass_UDataLayerInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataLayer_MetaData), NewProp_DataLayer_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_Engine_OnDataLayerRuntimeStateChanged__DelegateSignature_Statics::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_Engine_OnDataLayerRuntimeStateChanged__DelegateSignature_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Engine_eventOnDataLayerRuntimeStateChanged_Parms, State), Z_Construct_UEnum_Engine_EDataLayerRuntimeState, METADATA_PARAMS(0, nullptr) }; // 10031493
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Engine_OnDataLayerRuntimeStateChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnDataLayerRuntimeStateChanged__DelegateSignature_Statics::NewProp_DataLayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnDataLayerRuntimeStateChanged__DelegateSignature_Statics::NewProp_State_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnDataLayerRuntimeStateChanged__DelegateSignature_Statics::NewProp_State,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnDataLayerRuntimeStateChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_OnDataLayerRuntimeStateChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "OnDataLayerRuntimeStateChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Engine_OnDataLayerRuntimeStateChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnDataLayerRuntimeStateChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Engine_OnDataLayerRuntimeStateChanged__DelegateSignature_Statics::_Script_Engine_eventOnDataLayerRuntimeStateChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnDataLayerRuntimeStateChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Engine_OnDataLayerRuntimeStateChanged__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_Engine_OnDataLayerRuntimeStateChanged__DelegateSignature_Statics::_Script_Engine_eventOnDataLayerRuntimeStateChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Engine_OnDataLayerRuntimeStateChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Engine_OnDataLayerRuntimeStateChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnDataLayerRuntimeStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnDataLayerRuntimeStateChanged, const UDataLayerInstance* DataLayer, EDataLayerRuntimeState State)
{
	struct _Script_Engine_eventOnDataLayerRuntimeStateChanged_Parms
	{
		const UDataLayerInstance* DataLayer;
		EDataLayerRuntimeState State;
	};
	_Script_Engine_eventOnDataLayerRuntimeStateChanged_Parms Parms;
	Parms.DataLayer=DataLayer;
	Parms.State=State;
	OnDataLayerRuntimeStateChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnDataLayerRuntimeStateChanged

// Begin Class UDataLayerSubsystem Function GetActiveDataLayerNames
struct Z_Construct_UFunction_UDataLayerSubsystem_GetActiveDataLayerNames_Statics
{
	struct DataLayerSubsystem_eventGetActiveDataLayerNames_Parms
	{
		TSet<FName> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DataLayers" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "GetActiveDataLayerNames will be removed." },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayerSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDataLayerSubsystem_GetActiveDataLayerNames_Statics::NewProp_ReturnValue_ElementProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UDataLayerSubsystem_GetActiveDataLayerNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataLayerSubsystem_eventGetActiveDataLayerNames_Parms, ReturnValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLayerSubsystem_GetActiveDataLayerNames_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerSubsystem_GetActiveDataLayerNames_Statics::NewProp_ReturnValue_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerSubsystem_GetActiveDataLayerNames_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerSubsystem_GetActiveDataLayerNames_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLayerSubsystem_GetActiveDataLayerNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataLayerSubsystem, nullptr, "GetActiveDataLayerNames", nullptr, nullptr, Z_Construct_UFunction_UDataLayerSubsystem_GetActiveDataLayerNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerSubsystem_GetActiveDataLayerNames_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDataLayerSubsystem_GetActiveDataLayerNames_Statics::DataLayerSubsystem_eventGetActiveDataLayerNames_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerSubsystem_GetActiveDataLayerNames_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDataLayerSubsystem_GetActiveDataLayerNames_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDataLayerSubsystem_GetActiveDataLayerNames_Statics::DataLayerSubsystem_eventGetActiveDataLayerNames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDataLayerSubsystem_GetActiveDataLayerNames()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLayerSubsystem_GetActiveDataLayerNames_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDataLayerSubsystem::execGetActiveDataLayerNames)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TSet<FName>*)Z_Param__Result=P_THIS->GetActiveDataLayerNames();
	P_NATIVE_END;
}
// End Class UDataLayerSubsystem Function GetActiveDataLayerNames

// Begin Class UDataLayerSubsystem Function GetDataLayer
struct Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayer_Statics
{
	struct DataLayerSubsystem_eventGetDataLayer_Parms
	{
		FActorDataLayer InDataLayer;
		UDataLayerInstance* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DataLayers" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "DataLayerSubsystem is deprecated, use GetDataLayerInstanceFromAsset in DataLayerManager" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayerSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InDataLayer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InDataLayer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayer_Statics::NewProp_InDataLayer = { "InDataLayer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataLayerSubsystem_eventGetDataLayer_Parms, InDataLayer), Z_Construct_UScriptStruct_FActorDataLayer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InDataLayer_MetaData), NewProp_InDataLayer_MetaData) }; // 1894108120
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataLayerSubsystem_eventGetDataLayer_Parms, ReturnValue), Z_Construct_UClass_UDataLayerInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayer_Statics::NewProp_InDataLayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataLayerSubsystem, nullptr, "GetDataLayer", nullptr, nullptr, Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayer_Statics::DataLayerSubsystem_eventGetDataLayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayer_Statics::DataLayerSubsystem_eventGetDataLayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDataLayerSubsystem::execGetDataLayer)
{
	P_GET_STRUCT_REF(FActorDataLayer,Z_Param_Out_InDataLayer);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UDataLayerInstance**)Z_Param__Result=P_THIS->GetDataLayer(Z_Param_Out_InDataLayer);
	P_NATIVE_END;
}
// End Class UDataLayerSubsystem Function GetDataLayer

// Begin Class UDataLayerSubsystem Function GetDataLayerEffectiveRuntimeState
struct Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerEffectiveRuntimeState_Statics
{
	struct DataLayerSubsystem_eventGetDataLayerEffectiveRuntimeState_Parms
	{
		FActorDataLayer InDataLayer;
		EDataLayerRuntimeState ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DataLayers" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "DataLayerSubsystem is deprecated, use GetDataLayerInstanceEffectiveRuntimeState in DataLayerManager" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayerSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InDataLayer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InDataLayer;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerEffectiveRuntimeState_Statics::NewProp_InDataLayer = { "InDataLayer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataLayerSubsystem_eventGetDataLayerEffectiveRuntimeState_Parms, InDataLayer), Z_Construct_UScriptStruct_FActorDataLayer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InDataLayer_MetaData), NewProp_InDataLayer_MetaData) }; // 1894108120
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerEffectiveRuntimeState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerEffectiveRuntimeState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataLayerSubsystem_eventGetDataLayerEffectiveRuntimeState_Parms, ReturnValue), Z_Construct_UEnum_Engine_EDataLayerRuntimeState, METADATA_PARAMS(0, nullptr) }; // 10031493
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerEffectiveRuntimeState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerEffectiveRuntimeState_Statics::NewProp_InDataLayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerEffectiveRuntimeState_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerEffectiveRuntimeState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerEffectiveRuntimeState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerEffectiveRuntimeState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataLayerSubsystem, nullptr, "GetDataLayerEffectiveRuntimeState", nullptr, nullptr, Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerEffectiveRuntimeState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerEffectiveRuntimeState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerEffectiveRuntimeState_Statics::DataLayerSubsystem_eventGetDataLayerEffectiveRuntimeState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerEffectiveRuntimeState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerEffectiveRuntimeState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerEffectiveRuntimeState_Statics::DataLayerSubsystem_eventGetDataLayerEffectiveRuntimeState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerEffectiveRuntimeState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerEffectiveRuntimeState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDataLayerSubsystem::execGetDataLayerEffectiveRuntimeState)
{
	P_GET_STRUCT_REF(FActorDataLayer,Z_Param_Out_InDataLayer);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EDataLayerRuntimeState*)Z_Param__Result=P_THIS->GetDataLayerEffectiveRuntimeState(Z_Param_Out_InDataLayer);
	P_NATIVE_END;
}
// End Class UDataLayerSubsystem Function GetDataLayerEffectiveRuntimeState

// Begin Class UDataLayerSubsystem Function GetDataLayerEffectiveRuntimeStateByLabel
struct Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerEffectiveRuntimeStateByLabel_Statics
{
	struct DataLayerSubsystem_eventGetDataLayerEffectiveRuntimeStateByLabel_Parms
	{
		FName InDataLayerLabel;
		EDataLayerRuntimeState ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DataLayers" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "DataLayerSubsystem is deprecated, use GetDataLayerInstanceEffectiveRuntimeState in DataLayerManager" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayerSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InDataLayerLabel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InDataLayerLabel;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerEffectiveRuntimeStateByLabel_Statics::NewProp_InDataLayerLabel = { "InDataLayerLabel", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataLayerSubsystem_eventGetDataLayerEffectiveRuntimeStateByLabel_Parms, InDataLayerLabel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InDataLayerLabel_MetaData), NewProp_InDataLayerLabel_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerEffectiveRuntimeStateByLabel_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerEffectiveRuntimeStateByLabel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataLayerSubsystem_eventGetDataLayerEffectiveRuntimeStateByLabel_Parms, ReturnValue), Z_Construct_UEnum_Engine_EDataLayerRuntimeState, METADATA_PARAMS(0, nullptr) }; // 10031493
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerEffectiveRuntimeStateByLabel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerEffectiveRuntimeStateByLabel_Statics::NewProp_InDataLayerLabel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerEffectiveRuntimeStateByLabel_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerEffectiveRuntimeStateByLabel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerEffectiveRuntimeStateByLabel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerEffectiveRuntimeStateByLabel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataLayerSubsystem, nullptr, "GetDataLayerEffectiveRuntimeStateByLabel", nullptr, nullptr, Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerEffectiveRuntimeStateByLabel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerEffectiveRuntimeStateByLabel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerEffectiveRuntimeStateByLabel_Statics::DataLayerSubsystem_eventGetDataLayerEffectiveRuntimeStateByLabel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerEffectiveRuntimeStateByLabel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerEffectiveRuntimeStateByLabel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerEffectiveRuntimeStateByLabel_Statics::DataLayerSubsystem_eventGetDataLayerEffectiveRuntimeStateByLabel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerEffectiveRuntimeStateByLabel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerEffectiveRuntimeStateByLabel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDataLayerSubsystem::execGetDataLayerEffectiveRuntimeStateByLabel)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InDataLayerLabel);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EDataLayerRuntimeState*)Z_Param__Result=P_THIS->GetDataLayerEffectiveRuntimeStateByLabel(Z_Param_Out_InDataLayerLabel);
	P_NATIVE_END;
}
// End Class UDataLayerSubsystem Function GetDataLayerEffectiveRuntimeStateByLabel

// Begin Class UDataLayerSubsystem Function GetDataLayerFromLabel
struct Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerFromLabel_Statics
{
	struct DataLayerSubsystem_eventGetDataLayerFromLabel_Parms
	{
		FName InDataLayerLabel;
		UDataLayerInstance* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DataLayers" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "DataLayerSubsystem is deprecated, use GetDataLayerInstanceFromAsset in DataLayerManager" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayerSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InDataLayerLabel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerFromLabel_Statics::NewProp_InDataLayerLabel = { "InDataLayerLabel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataLayerSubsystem_eventGetDataLayerFromLabel_Parms, InDataLayerLabel), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerFromLabel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataLayerSubsystem_eventGetDataLayerFromLabel_Parms, ReturnValue), Z_Construct_UClass_UDataLayerInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerFromLabel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerFromLabel_Statics::NewProp_InDataLayerLabel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerFromLabel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerFromLabel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerFromLabel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataLayerSubsystem, nullptr, "GetDataLayerFromLabel", nullptr, nullptr, Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerFromLabel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerFromLabel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerFromLabel_Statics::DataLayerSubsystem_eventGetDataLayerFromLabel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerFromLabel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerFromLabel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerFromLabel_Statics::DataLayerSubsystem_eventGetDataLayerFromLabel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerFromLabel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerFromLabel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDataLayerSubsystem::execGetDataLayerFromLabel)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_InDataLayerLabel);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UDataLayerInstance**)Z_Param__Result=P_THIS->GetDataLayerFromLabel(Z_Param_InDataLayerLabel);
	P_NATIVE_END;
}
// End Class UDataLayerSubsystem Function GetDataLayerFromLabel

// Begin Class UDataLayerSubsystem Function GetDataLayerFromName
struct Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerFromName_Statics
{
	struct DataLayerSubsystem_eventGetDataLayerFromName_Parms
	{
		FName InDataLayerName;
		UDataLayerInstance* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DataLayers" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "DataLayerSubsystem is deprecated, use GetDataLayerInstanceFromAsset in DataLayerManager" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayerSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InDataLayerName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerFromName_Statics::NewProp_InDataLayerName = { "InDataLayerName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataLayerSubsystem_eventGetDataLayerFromName_Parms, InDataLayerName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerFromName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataLayerSubsystem_eventGetDataLayerFromName_Parms, ReturnValue), Z_Construct_UClass_UDataLayerInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerFromName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerFromName_Statics::NewProp_InDataLayerName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerFromName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerFromName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerFromName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataLayerSubsystem, nullptr, "GetDataLayerFromName", nullptr, nullptr, Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerFromName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerFromName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerFromName_Statics::DataLayerSubsystem_eventGetDataLayerFromName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerFromName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerFromName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerFromName_Statics::DataLayerSubsystem_eventGetDataLayerFromName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerFromName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerFromName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDataLayerSubsystem::execGetDataLayerFromName)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_InDataLayerName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UDataLayerInstance**)Z_Param__Result=P_THIS->GetDataLayerFromName(Z_Param_InDataLayerName);
	P_NATIVE_END;
}
// End Class UDataLayerSubsystem Function GetDataLayerFromName

// Begin Class UDataLayerSubsystem Function GetDataLayerInstanceEffectiveRuntimeState
struct Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerInstanceEffectiveRuntimeState_Statics
{
	struct DataLayerSubsystem_eventGetDataLayerInstanceEffectiveRuntimeState_Parms
	{
		const UDataLayerAsset* InDataLayerAsset;
		EDataLayerRuntimeState ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DataLayers" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "DataLayerSubsystem is deprecated, use the equivalent function in DataLayerManager" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayerSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InDataLayerAsset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InDataLayerAsset;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerInstanceEffectiveRuntimeState_Statics::NewProp_InDataLayerAsset = { "InDataLayerAsset", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataLayerSubsystem_eventGetDataLayerInstanceEffectiveRuntimeState_Parms, InDataLayerAsset), Z_Construct_UClass_UDataLayerAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InDataLayerAsset_MetaData), NewProp_InDataLayerAsset_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerInstanceEffectiveRuntimeState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerInstanceEffectiveRuntimeState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataLayerSubsystem_eventGetDataLayerInstanceEffectiveRuntimeState_Parms, ReturnValue), Z_Construct_UEnum_Engine_EDataLayerRuntimeState, METADATA_PARAMS(0, nullptr) }; // 10031493
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerInstanceEffectiveRuntimeState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerInstanceEffectiveRuntimeState_Statics::NewProp_InDataLayerAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerInstanceEffectiveRuntimeState_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerInstanceEffectiveRuntimeState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerInstanceEffectiveRuntimeState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerInstanceEffectiveRuntimeState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataLayerSubsystem, nullptr, "GetDataLayerInstanceEffectiveRuntimeState", nullptr, nullptr, Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerInstanceEffectiveRuntimeState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerInstanceEffectiveRuntimeState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerInstanceEffectiveRuntimeState_Statics::DataLayerSubsystem_eventGetDataLayerInstanceEffectiveRuntimeState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerInstanceEffectiveRuntimeState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerInstanceEffectiveRuntimeState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerInstanceEffectiveRuntimeState_Statics::DataLayerSubsystem_eventGetDataLayerInstanceEffectiveRuntimeState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerInstanceEffectiveRuntimeState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerInstanceEffectiveRuntimeState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDataLayerSubsystem::execGetDataLayerInstanceEffectiveRuntimeState)
{
	P_GET_OBJECT(UDataLayerAsset,Z_Param_InDataLayerAsset);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EDataLayerRuntimeState*)Z_Param__Result=P_THIS->GetDataLayerInstanceEffectiveRuntimeState(Z_Param_InDataLayerAsset);
	P_NATIVE_END;
}
// End Class UDataLayerSubsystem Function GetDataLayerInstanceEffectiveRuntimeState

// Begin Class UDataLayerSubsystem Function GetDataLayerInstanceFromAsset
struct Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerInstanceFromAsset_Statics
{
	struct DataLayerSubsystem_eventGetDataLayerInstanceFromAsset_Parms
	{
		const UDataLayerAsset* InDataLayerAsset;
		UDataLayerInstance* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DataLayers" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "DataLayerSubsystem is deprecated, use the equivalent function in DataLayerManager" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayerSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InDataLayerAsset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InDataLayerAsset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerInstanceFromAsset_Statics::NewProp_InDataLayerAsset = { "InDataLayerAsset", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataLayerSubsystem_eventGetDataLayerInstanceFromAsset_Parms, InDataLayerAsset), Z_Construct_UClass_UDataLayerAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InDataLayerAsset_MetaData), NewProp_InDataLayerAsset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerInstanceFromAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataLayerSubsystem_eventGetDataLayerInstanceFromAsset_Parms, ReturnValue), Z_Construct_UClass_UDataLayerInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerInstanceFromAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerInstanceFromAsset_Statics::NewProp_InDataLayerAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerInstanceFromAsset_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerInstanceFromAsset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerInstanceFromAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataLayerSubsystem, nullptr, "GetDataLayerInstanceFromAsset", nullptr, nullptr, Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerInstanceFromAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerInstanceFromAsset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerInstanceFromAsset_Statics::DataLayerSubsystem_eventGetDataLayerInstanceFromAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerInstanceFromAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerInstanceFromAsset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerInstanceFromAsset_Statics::DataLayerSubsystem_eventGetDataLayerInstanceFromAsset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerInstanceFromAsset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerInstanceFromAsset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDataLayerSubsystem::execGetDataLayerInstanceFromAsset)
{
	P_GET_OBJECT(UDataLayerAsset,Z_Param_InDataLayerAsset);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UDataLayerInstance**)Z_Param__Result=P_THIS->GetDataLayerInstanceFromAsset(Z_Param_InDataLayerAsset);
	P_NATIVE_END;
}
// End Class UDataLayerSubsystem Function GetDataLayerInstanceFromAsset

// Begin Class UDataLayerSubsystem Function GetDataLayerInstanceRuntimeState
struct Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerInstanceRuntimeState_Statics
{
	struct DataLayerSubsystem_eventGetDataLayerInstanceRuntimeState_Parms
	{
		const UDataLayerAsset* InDataLayerAsset;
		EDataLayerRuntimeState ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DataLayers" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "DataLayerSubsystem is deprecated, use the equivalent function in DataLayerManager" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayerSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InDataLayerAsset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InDataLayerAsset;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerInstanceRuntimeState_Statics::NewProp_InDataLayerAsset = { "InDataLayerAsset", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataLayerSubsystem_eventGetDataLayerInstanceRuntimeState_Parms, InDataLayerAsset), Z_Construct_UClass_UDataLayerAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InDataLayerAsset_MetaData), NewProp_InDataLayerAsset_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerInstanceRuntimeState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerInstanceRuntimeState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataLayerSubsystem_eventGetDataLayerInstanceRuntimeState_Parms, ReturnValue), Z_Construct_UEnum_Engine_EDataLayerRuntimeState, METADATA_PARAMS(0, nullptr) }; // 10031493
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerInstanceRuntimeState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerInstanceRuntimeState_Statics::NewProp_InDataLayerAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerInstanceRuntimeState_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerInstanceRuntimeState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerInstanceRuntimeState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerInstanceRuntimeState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataLayerSubsystem, nullptr, "GetDataLayerInstanceRuntimeState", nullptr, nullptr, Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerInstanceRuntimeState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerInstanceRuntimeState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerInstanceRuntimeState_Statics::DataLayerSubsystem_eventGetDataLayerInstanceRuntimeState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerInstanceRuntimeState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerInstanceRuntimeState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerInstanceRuntimeState_Statics::DataLayerSubsystem_eventGetDataLayerInstanceRuntimeState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerInstanceRuntimeState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerInstanceRuntimeState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDataLayerSubsystem::execGetDataLayerInstanceRuntimeState)
{
	P_GET_OBJECT(UDataLayerAsset,Z_Param_InDataLayerAsset);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EDataLayerRuntimeState*)Z_Param__Result=P_THIS->GetDataLayerInstanceRuntimeState(Z_Param_InDataLayerAsset);
	P_NATIVE_END;
}
// End Class UDataLayerSubsystem Function GetDataLayerInstanceRuntimeState

// Begin Class UDataLayerSubsystem Function GetDataLayerRuntimeState
struct Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerRuntimeState_Statics
{
	struct DataLayerSubsystem_eventGetDataLayerRuntimeState_Parms
	{
		FActorDataLayer InDataLayer;
		EDataLayerRuntimeState ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DataLayers" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "DataLayerSubsystem is deprecated, use GetDataLayerInstanceRuntimeState in DataLayerManager" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayerSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InDataLayer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InDataLayer;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerRuntimeState_Statics::NewProp_InDataLayer = { "InDataLayer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataLayerSubsystem_eventGetDataLayerRuntimeState_Parms, InDataLayer), Z_Construct_UScriptStruct_FActorDataLayer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InDataLayer_MetaData), NewProp_InDataLayer_MetaData) }; // 1894108120
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerRuntimeState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerRuntimeState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataLayerSubsystem_eventGetDataLayerRuntimeState_Parms, ReturnValue), Z_Construct_UEnum_Engine_EDataLayerRuntimeState, METADATA_PARAMS(0, nullptr) }; // 10031493
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerRuntimeState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerRuntimeState_Statics::NewProp_InDataLayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerRuntimeState_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerRuntimeState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerRuntimeState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerRuntimeState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataLayerSubsystem, nullptr, "GetDataLayerRuntimeState", nullptr, nullptr, Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerRuntimeState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerRuntimeState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerRuntimeState_Statics::DataLayerSubsystem_eventGetDataLayerRuntimeState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerRuntimeState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerRuntimeState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerRuntimeState_Statics::DataLayerSubsystem_eventGetDataLayerRuntimeState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerRuntimeState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerRuntimeState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDataLayerSubsystem::execGetDataLayerRuntimeState)
{
	P_GET_STRUCT_REF(FActorDataLayer,Z_Param_Out_InDataLayer);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EDataLayerRuntimeState*)Z_Param__Result=P_THIS->GetDataLayerRuntimeState(Z_Param_Out_InDataLayer);
	P_NATIVE_END;
}
// End Class UDataLayerSubsystem Function GetDataLayerRuntimeState

// Begin Class UDataLayerSubsystem Function GetDataLayerRuntimeStateByLabel
struct Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerRuntimeStateByLabel_Statics
{
	struct DataLayerSubsystem_eventGetDataLayerRuntimeStateByLabel_Parms
	{
		FName InDataLayerLabel;
		EDataLayerRuntimeState ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DataLayers" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "DataLayerSubsystem is deprecated, use GetDataLayerInstanceRuntimeState in DataLayerManager" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayerSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InDataLayerLabel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InDataLayerLabel;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerRuntimeStateByLabel_Statics::NewProp_InDataLayerLabel = { "InDataLayerLabel", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataLayerSubsystem_eventGetDataLayerRuntimeStateByLabel_Parms, InDataLayerLabel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InDataLayerLabel_MetaData), NewProp_InDataLayerLabel_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerRuntimeStateByLabel_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerRuntimeStateByLabel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataLayerSubsystem_eventGetDataLayerRuntimeStateByLabel_Parms, ReturnValue), Z_Construct_UEnum_Engine_EDataLayerRuntimeState, METADATA_PARAMS(0, nullptr) }; // 10031493
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerRuntimeStateByLabel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerRuntimeStateByLabel_Statics::NewProp_InDataLayerLabel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerRuntimeStateByLabel_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerRuntimeStateByLabel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerRuntimeStateByLabel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerRuntimeStateByLabel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataLayerSubsystem, nullptr, "GetDataLayerRuntimeStateByLabel", nullptr, nullptr, Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerRuntimeStateByLabel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerRuntimeStateByLabel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerRuntimeStateByLabel_Statics::DataLayerSubsystem_eventGetDataLayerRuntimeStateByLabel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerRuntimeStateByLabel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerRuntimeStateByLabel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerRuntimeStateByLabel_Statics::DataLayerSubsystem_eventGetDataLayerRuntimeStateByLabel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerRuntimeStateByLabel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerRuntimeStateByLabel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDataLayerSubsystem::execGetDataLayerRuntimeStateByLabel)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InDataLayerLabel);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EDataLayerRuntimeState*)Z_Param__Result=P_THIS->GetDataLayerRuntimeStateByLabel(Z_Param_Out_InDataLayerLabel);
	P_NATIVE_END;
}
// End Class UDataLayerSubsystem Function GetDataLayerRuntimeStateByLabel

// Begin Class UDataLayerSubsystem Function GetDataLayerState
struct Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerState_Statics
{
	struct DataLayerSubsystem_eventGetDataLayerState_Parms
	{
		FActorDataLayer InDataLayer;
		EDataLayerState ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DataLayers" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "DataLayerSubsystem is deprecated, use the equivalent function in DataLayerManager" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayerSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InDataLayer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InDataLayer;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerState_Statics::NewProp_InDataLayer = { "InDataLayer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataLayerSubsystem_eventGetDataLayerState_Parms, InDataLayer), Z_Construct_UScriptStruct_FActorDataLayer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InDataLayer_MetaData), NewProp_InDataLayer_MetaData) }; // 1894108120
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataLayerSubsystem_eventGetDataLayerState_Parms, ReturnValue), Z_Construct_UEnum_Engine_EDataLayerState, METADATA_PARAMS(0, nullptr) }; // 593141122
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerState_Statics::NewProp_InDataLayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerState_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataLayerSubsystem, nullptr, "GetDataLayerState", nullptr, nullptr, Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerState_Statics::DataLayerSubsystem_eventGetDataLayerState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerState_Statics::DataLayerSubsystem_eventGetDataLayerState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDataLayerSubsystem::execGetDataLayerState)
{
	P_GET_STRUCT_REF(FActorDataLayer,Z_Param_Out_InDataLayer);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EDataLayerState*)Z_Param__Result=P_THIS->GetDataLayerState(Z_Param_Out_InDataLayer);
	P_NATIVE_END;
}
// End Class UDataLayerSubsystem Function GetDataLayerState

// Begin Class UDataLayerSubsystem Function GetDataLayerStateByLabel
struct Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerStateByLabel_Statics
{
	struct DataLayerSubsystem_eventGetDataLayerStateByLabel_Parms
	{
		FName InDataLayerLabel;
		EDataLayerState ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DataLayers" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "DataLayerSubsystem is deprecated, use the equivalent function in DataLayerManager" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayerSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InDataLayerLabel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InDataLayerLabel;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerStateByLabel_Statics::NewProp_InDataLayerLabel = { "InDataLayerLabel", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataLayerSubsystem_eventGetDataLayerStateByLabel_Parms, InDataLayerLabel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InDataLayerLabel_MetaData), NewProp_InDataLayerLabel_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerStateByLabel_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerStateByLabel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataLayerSubsystem_eventGetDataLayerStateByLabel_Parms, ReturnValue), Z_Construct_UEnum_Engine_EDataLayerState, METADATA_PARAMS(0, nullptr) }; // 593141122
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerStateByLabel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerStateByLabel_Statics::NewProp_InDataLayerLabel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerStateByLabel_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerStateByLabel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerStateByLabel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerStateByLabel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataLayerSubsystem, nullptr, "GetDataLayerStateByLabel", nullptr, nullptr, Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerStateByLabel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerStateByLabel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerStateByLabel_Statics::DataLayerSubsystem_eventGetDataLayerStateByLabel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerStateByLabel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerStateByLabel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerStateByLabel_Statics::DataLayerSubsystem_eventGetDataLayerStateByLabel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerStateByLabel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerStateByLabel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDataLayerSubsystem::execGetDataLayerStateByLabel)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InDataLayerLabel);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EDataLayerState*)Z_Param__Result=P_THIS->GetDataLayerStateByLabel(Z_Param_Out_InDataLayerLabel);
	P_NATIVE_END;
}
// End Class UDataLayerSubsystem Function GetDataLayerStateByLabel

// Begin Class UDataLayerSubsystem Function GetLoadedDataLayerNames
struct Z_Construct_UFunction_UDataLayerSubsystem_GetLoadedDataLayerNames_Statics
{
	struct DataLayerSubsystem_eventGetLoadedDataLayerNames_Parms
	{
		TSet<FName> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DataLayers" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "GetLoadedDataLayerNames will be removed." },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayerSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDataLayerSubsystem_GetLoadedDataLayerNames_Statics::NewProp_ReturnValue_ElementProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UDataLayerSubsystem_GetLoadedDataLayerNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataLayerSubsystem_eventGetLoadedDataLayerNames_Parms, ReturnValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLayerSubsystem_GetLoadedDataLayerNames_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerSubsystem_GetLoadedDataLayerNames_Statics::NewProp_ReturnValue_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerSubsystem_GetLoadedDataLayerNames_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerSubsystem_GetLoadedDataLayerNames_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLayerSubsystem_GetLoadedDataLayerNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataLayerSubsystem, nullptr, "GetLoadedDataLayerNames", nullptr, nullptr, Z_Construct_UFunction_UDataLayerSubsystem_GetLoadedDataLayerNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerSubsystem_GetLoadedDataLayerNames_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDataLayerSubsystem_GetLoadedDataLayerNames_Statics::DataLayerSubsystem_eventGetLoadedDataLayerNames_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerSubsystem_GetLoadedDataLayerNames_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDataLayerSubsystem_GetLoadedDataLayerNames_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDataLayerSubsystem_GetLoadedDataLayerNames_Statics::DataLayerSubsystem_eventGetLoadedDataLayerNames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDataLayerSubsystem_GetLoadedDataLayerNames()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLayerSubsystem_GetLoadedDataLayerNames_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDataLayerSubsystem::execGetLoadedDataLayerNames)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TSet<FName>*)Z_Param__Result=P_THIS->GetLoadedDataLayerNames();
	P_NATIVE_END;
}
// End Class UDataLayerSubsystem Function GetLoadedDataLayerNames

// Begin Class UDataLayerSubsystem Function SetDataLayerInstanceRuntimeState
struct Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerInstanceRuntimeState_Statics
{
	struct DataLayerSubsystem_eventSetDataLayerInstanceRuntimeState_Parms
	{
		const UDataLayerAsset* InDataLayerAsset;
		EDataLayerRuntimeState InState;
		bool bInIsRecursive;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DataLayers" },
		{ "CPP_Default_bInIsRecursive", "false" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "DataLayerSubsystem is deprecated, use the equivalent function in DataLayerManager" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayerSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InDataLayerAsset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InDataLayerAsset;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InState;
	static void NewProp_bInIsRecursive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInIsRecursive;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerInstanceRuntimeState_Statics::NewProp_InDataLayerAsset = { "InDataLayerAsset", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataLayerSubsystem_eventSetDataLayerInstanceRuntimeState_Parms, InDataLayerAsset), Z_Construct_UClass_UDataLayerAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InDataLayerAsset_MetaData), NewProp_InDataLayerAsset_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerInstanceRuntimeState_Statics::NewProp_InState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerInstanceRuntimeState_Statics::NewProp_InState = { "InState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataLayerSubsystem_eventSetDataLayerInstanceRuntimeState_Parms, InState), Z_Construct_UEnum_Engine_EDataLayerRuntimeState, METADATA_PARAMS(0, nullptr) }; // 10031493
void Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerInstanceRuntimeState_Statics::NewProp_bInIsRecursive_SetBit(void* Obj)
{
	((DataLayerSubsystem_eventSetDataLayerInstanceRuntimeState_Parms*)Obj)->bInIsRecursive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerInstanceRuntimeState_Statics::NewProp_bInIsRecursive = { "bInIsRecursive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DataLayerSubsystem_eventSetDataLayerInstanceRuntimeState_Parms), &Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerInstanceRuntimeState_Statics::NewProp_bInIsRecursive_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerInstanceRuntimeState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerInstanceRuntimeState_Statics::NewProp_InDataLayerAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerInstanceRuntimeState_Statics::NewProp_InState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerInstanceRuntimeState_Statics::NewProp_InState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerInstanceRuntimeState_Statics::NewProp_bInIsRecursive,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerInstanceRuntimeState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerInstanceRuntimeState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataLayerSubsystem, nullptr, "SetDataLayerInstanceRuntimeState", nullptr, nullptr, Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerInstanceRuntimeState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerInstanceRuntimeState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerInstanceRuntimeState_Statics::DataLayerSubsystem_eventSetDataLayerInstanceRuntimeState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020407, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerInstanceRuntimeState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerInstanceRuntimeState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerInstanceRuntimeState_Statics::DataLayerSubsystem_eventSetDataLayerInstanceRuntimeState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerInstanceRuntimeState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerInstanceRuntimeState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDataLayerSubsystem::execSetDataLayerInstanceRuntimeState)
{
	P_GET_OBJECT(UDataLayerAsset,Z_Param_InDataLayerAsset);
	P_GET_ENUM(EDataLayerRuntimeState,Z_Param_InState);
	P_GET_UBOOL(Z_Param_bInIsRecursive);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDataLayerInstanceRuntimeState(Z_Param_InDataLayerAsset,EDataLayerRuntimeState(Z_Param_InState),Z_Param_bInIsRecursive);
	P_NATIVE_END;
}
// End Class UDataLayerSubsystem Function SetDataLayerInstanceRuntimeState

// Begin Class UDataLayerSubsystem Function SetDataLayerRuntimeState
struct Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerRuntimeState_Statics
{
	struct DataLayerSubsystem_eventSetDataLayerRuntimeState_Parms
	{
		FActorDataLayer InDataLayer;
		EDataLayerRuntimeState InState;
		bool bInIsRecursive;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DataLayers" },
		{ "CPP_Default_bInIsRecursive", "false" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayerSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InDataLayer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InDataLayer;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InState;
	static void NewProp_bInIsRecursive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInIsRecursive;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerRuntimeState_Statics::NewProp_InDataLayer = { "InDataLayer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataLayerSubsystem_eventSetDataLayerRuntimeState_Parms, InDataLayer), Z_Construct_UScriptStruct_FActorDataLayer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InDataLayer_MetaData), NewProp_InDataLayer_MetaData) }; // 1894108120
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerRuntimeState_Statics::NewProp_InState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerRuntimeState_Statics::NewProp_InState = { "InState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataLayerSubsystem_eventSetDataLayerRuntimeState_Parms, InState), Z_Construct_UEnum_Engine_EDataLayerRuntimeState, METADATA_PARAMS(0, nullptr) }; // 10031493
void Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerRuntimeState_Statics::NewProp_bInIsRecursive_SetBit(void* Obj)
{
	((DataLayerSubsystem_eventSetDataLayerRuntimeState_Parms*)Obj)->bInIsRecursive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerRuntimeState_Statics::NewProp_bInIsRecursive = { "bInIsRecursive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DataLayerSubsystem_eventSetDataLayerRuntimeState_Parms), &Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerRuntimeState_Statics::NewProp_bInIsRecursive_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerRuntimeState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerRuntimeState_Statics::NewProp_InDataLayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerRuntimeState_Statics::NewProp_InState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerRuntimeState_Statics::NewProp_InState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerRuntimeState_Statics::NewProp_bInIsRecursive,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerRuntimeState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerRuntimeState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataLayerSubsystem, nullptr, "SetDataLayerRuntimeState", nullptr, nullptr, Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerRuntimeState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerRuntimeState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerRuntimeState_Statics::DataLayerSubsystem_eventSetDataLayerRuntimeState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420407, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerRuntimeState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerRuntimeState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerRuntimeState_Statics::DataLayerSubsystem_eventSetDataLayerRuntimeState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerRuntimeState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerRuntimeState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDataLayerSubsystem::execSetDataLayerRuntimeState)
{
	P_GET_STRUCT_REF(FActorDataLayer,Z_Param_Out_InDataLayer);
	P_GET_ENUM(EDataLayerRuntimeState,Z_Param_InState);
	P_GET_UBOOL(Z_Param_bInIsRecursive);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDataLayerRuntimeState(Z_Param_Out_InDataLayer,EDataLayerRuntimeState(Z_Param_InState),Z_Param_bInIsRecursive);
	P_NATIVE_END;
}
// End Class UDataLayerSubsystem Function SetDataLayerRuntimeState

// Begin Class UDataLayerSubsystem Function SetDataLayerRuntimeStateByLabel
struct Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerRuntimeStateByLabel_Statics
{
	struct DataLayerSubsystem_eventSetDataLayerRuntimeStateByLabel_Parms
	{
		FName InDataLayerLabel;
		EDataLayerRuntimeState InState;
		bool bInIsRecursive;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DataLayers" },
		{ "CPP_Default_bInIsRecursive", "false" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayerSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InDataLayerLabel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InDataLayerLabel;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InState;
	static void NewProp_bInIsRecursive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInIsRecursive;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerRuntimeStateByLabel_Statics::NewProp_InDataLayerLabel = { "InDataLayerLabel", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataLayerSubsystem_eventSetDataLayerRuntimeStateByLabel_Parms, InDataLayerLabel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InDataLayerLabel_MetaData), NewProp_InDataLayerLabel_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerRuntimeStateByLabel_Statics::NewProp_InState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerRuntimeStateByLabel_Statics::NewProp_InState = { "InState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataLayerSubsystem_eventSetDataLayerRuntimeStateByLabel_Parms, InState), Z_Construct_UEnum_Engine_EDataLayerRuntimeState, METADATA_PARAMS(0, nullptr) }; // 10031493
void Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerRuntimeStateByLabel_Statics::NewProp_bInIsRecursive_SetBit(void* Obj)
{
	((DataLayerSubsystem_eventSetDataLayerRuntimeStateByLabel_Parms*)Obj)->bInIsRecursive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerRuntimeStateByLabel_Statics::NewProp_bInIsRecursive = { "bInIsRecursive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DataLayerSubsystem_eventSetDataLayerRuntimeStateByLabel_Parms), &Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerRuntimeStateByLabel_Statics::NewProp_bInIsRecursive_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerRuntimeStateByLabel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerRuntimeStateByLabel_Statics::NewProp_InDataLayerLabel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerRuntimeStateByLabel_Statics::NewProp_InState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerRuntimeStateByLabel_Statics::NewProp_InState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerRuntimeStateByLabel_Statics::NewProp_bInIsRecursive,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerRuntimeStateByLabel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerRuntimeStateByLabel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataLayerSubsystem, nullptr, "SetDataLayerRuntimeStateByLabel", nullptr, nullptr, Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerRuntimeStateByLabel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerRuntimeStateByLabel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerRuntimeStateByLabel_Statics::DataLayerSubsystem_eventSetDataLayerRuntimeStateByLabel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420407, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerRuntimeStateByLabel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerRuntimeStateByLabel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerRuntimeStateByLabel_Statics::DataLayerSubsystem_eventSetDataLayerRuntimeStateByLabel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerRuntimeStateByLabel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerRuntimeStateByLabel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDataLayerSubsystem::execSetDataLayerRuntimeStateByLabel)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InDataLayerLabel);
	P_GET_ENUM(EDataLayerRuntimeState,Z_Param_InState);
	P_GET_UBOOL(Z_Param_bInIsRecursive);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDataLayerRuntimeStateByLabel(Z_Param_Out_InDataLayerLabel,EDataLayerRuntimeState(Z_Param_InState),Z_Param_bInIsRecursive);
	P_NATIVE_END;
}
// End Class UDataLayerSubsystem Function SetDataLayerRuntimeStateByLabel

// Begin Class UDataLayerSubsystem Function SetDataLayerState
struct Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerState_Statics
{
	struct DataLayerSubsystem_eventSetDataLayerState_Parms
	{
		FActorDataLayer InDataLayer;
		EDataLayerState InState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DataLayers" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "DataLayerSubsystem is deprecated, use the equivalent function in DataLayerManager" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayerSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InDataLayer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InDataLayer;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerState_Statics::NewProp_InDataLayer = { "InDataLayer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataLayerSubsystem_eventSetDataLayerState_Parms, InDataLayer), Z_Construct_UScriptStruct_FActorDataLayer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InDataLayer_MetaData), NewProp_InDataLayer_MetaData) }; // 1894108120
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerState_Statics::NewProp_InState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerState_Statics::NewProp_InState = { "InState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataLayerSubsystem_eventSetDataLayerState_Parms, InState), Z_Construct_UEnum_Engine_EDataLayerState, METADATA_PARAMS(0, nullptr) }; // 593141122
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerState_Statics::NewProp_InDataLayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerState_Statics::NewProp_InState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerState_Statics::NewProp_InState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataLayerSubsystem, nullptr, "SetDataLayerState", nullptr, nullptr, Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerState_Statics::DataLayerSubsystem_eventSetDataLayerState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerState_Statics::DataLayerSubsystem_eventSetDataLayerState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDataLayerSubsystem::execSetDataLayerState)
{
	P_GET_STRUCT_REF(FActorDataLayer,Z_Param_Out_InDataLayer);
	P_GET_ENUM(EDataLayerState,Z_Param_InState);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDataLayerState(Z_Param_Out_InDataLayer,EDataLayerState(Z_Param_InState));
	P_NATIVE_END;
}
// End Class UDataLayerSubsystem Function SetDataLayerState

// Begin Class UDataLayerSubsystem Function SetDataLayerStateByLabel
struct Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerStateByLabel_Statics
{
	struct DataLayerSubsystem_eventSetDataLayerStateByLabel_Parms
	{
		FName InDataLayerLabel;
		EDataLayerState InState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DataLayers" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "DataLayerSubsystem is deprecated, use the equivalent function in DataLayerManager" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayerSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InDataLayerLabel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InDataLayerLabel;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerStateByLabel_Statics::NewProp_InDataLayerLabel = { "InDataLayerLabel", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataLayerSubsystem_eventSetDataLayerStateByLabel_Parms, InDataLayerLabel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InDataLayerLabel_MetaData), NewProp_InDataLayerLabel_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerStateByLabel_Statics::NewProp_InState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerStateByLabel_Statics::NewProp_InState = { "InState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataLayerSubsystem_eventSetDataLayerStateByLabel_Parms, InState), Z_Construct_UEnum_Engine_EDataLayerState, METADATA_PARAMS(0, nullptr) }; // 593141122
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerStateByLabel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerStateByLabel_Statics::NewProp_InDataLayerLabel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerStateByLabel_Statics::NewProp_InState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerStateByLabel_Statics::NewProp_InState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerStateByLabel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerStateByLabel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataLayerSubsystem, nullptr, "SetDataLayerStateByLabel", nullptr, nullptr, Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerStateByLabel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerStateByLabel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerStateByLabel_Statics::DataLayerSubsystem_eventSetDataLayerStateByLabel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerStateByLabel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerStateByLabel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerStateByLabel_Statics::DataLayerSubsystem_eventSetDataLayerStateByLabel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerStateByLabel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerStateByLabel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDataLayerSubsystem::execSetDataLayerStateByLabel)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InDataLayerLabel);
	P_GET_ENUM(EDataLayerState,Z_Param_InState);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDataLayerStateByLabel(Z_Param_Out_InDataLayerLabel,EDataLayerState(Z_Param_InState));
	P_NATIVE_END;
}
// End Class UDataLayerSubsystem Function SetDataLayerStateByLabel

// Begin Class UDataLayerSubsystem
void UDataLayerSubsystem::StaticRegisterNativesUDataLayerSubsystem()
{
	UClass* Class = UDataLayerSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetActiveDataLayerNames", &UDataLayerSubsystem::execGetActiveDataLayerNames },
		{ "GetDataLayer", &UDataLayerSubsystem::execGetDataLayer },
		{ "GetDataLayerEffectiveRuntimeState", &UDataLayerSubsystem::execGetDataLayerEffectiveRuntimeState },
		{ "GetDataLayerEffectiveRuntimeStateByLabel", &UDataLayerSubsystem::execGetDataLayerEffectiveRuntimeStateByLabel },
		{ "GetDataLayerFromLabel", &UDataLayerSubsystem::execGetDataLayerFromLabel },
		{ "GetDataLayerFromName", &UDataLayerSubsystem::execGetDataLayerFromName },
		{ "GetDataLayerInstanceEffectiveRuntimeState", &UDataLayerSubsystem::execGetDataLayerInstanceEffectiveRuntimeState },
		{ "GetDataLayerInstanceFromAsset", &UDataLayerSubsystem::execGetDataLayerInstanceFromAsset },
		{ "GetDataLayerInstanceRuntimeState", &UDataLayerSubsystem::execGetDataLayerInstanceRuntimeState },
		{ "GetDataLayerRuntimeState", &UDataLayerSubsystem::execGetDataLayerRuntimeState },
		{ "GetDataLayerRuntimeStateByLabel", &UDataLayerSubsystem::execGetDataLayerRuntimeStateByLabel },
		{ "GetDataLayerState", &UDataLayerSubsystem::execGetDataLayerState },
		{ "GetDataLayerStateByLabel", &UDataLayerSubsystem::execGetDataLayerStateByLabel },
		{ "GetLoadedDataLayerNames", &UDataLayerSubsystem::execGetLoadedDataLayerNames },
		{ "SetDataLayerInstanceRuntimeState", &UDataLayerSubsystem::execSetDataLayerInstanceRuntimeState },
		{ "SetDataLayerRuntimeState", &UDataLayerSubsystem::execSetDataLayerRuntimeState },
		{ "SetDataLayerRuntimeStateByLabel", &UDataLayerSubsystem::execSetDataLayerRuntimeStateByLabel },
		{ "SetDataLayerState", &UDataLayerSubsystem::execSetDataLayerState },
		{ "SetDataLayerStateByLabel", &UDataLayerSubsystem::execSetDataLayerStateByLabel },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataLayerSubsystem);
UClass* Z_Construct_UClass_UDataLayerSubsystem_NoRegister()
{
	return UDataLayerSubsystem::StaticClass();
}
struct Z_Construct_UClass_UDataLayerSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** This class is deprecated, it has been replaced by DataLayerManager. */" },
		{ "IncludePath", "WorldPartition/DataLayer/DataLayerSubsystem.h" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayerSubsystem.h" },
		{ "ToolTip", "This class is deprecated, it has been replaced by DataLayerManager." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDataLayerRuntimeStateChanged_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayerSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataLayerLoadingPolicyClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayerSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDataLayerRuntimeStateChanged;
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_DataLayerLoadingPolicyClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDataLayerSubsystem_GetActiveDataLayerNames, "GetActiveDataLayerNames" }, // 161375211
		{ &Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayer, "GetDataLayer" }, // 1918558708
		{ &Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerEffectiveRuntimeState, "GetDataLayerEffectiveRuntimeState" }, // 2476081355
		{ &Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerEffectiveRuntimeStateByLabel, "GetDataLayerEffectiveRuntimeStateByLabel" }, // 1481204796
		{ &Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerFromLabel, "GetDataLayerFromLabel" }, // 313129939
		{ &Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerFromName, "GetDataLayerFromName" }, // 2347511357
		{ &Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerInstanceEffectiveRuntimeState, "GetDataLayerInstanceEffectiveRuntimeState" }, // 1011191257
		{ &Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerInstanceFromAsset, "GetDataLayerInstanceFromAsset" }, // 4007127804
		{ &Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerInstanceRuntimeState, "GetDataLayerInstanceRuntimeState" }, // 62244380
		{ &Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerRuntimeState, "GetDataLayerRuntimeState" }, // 1241977548
		{ &Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerRuntimeStateByLabel, "GetDataLayerRuntimeStateByLabel" }, // 2301651814
		{ &Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerState, "GetDataLayerState" }, // 3323838501
		{ &Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerStateByLabel, "GetDataLayerStateByLabel" }, // 2219830515
		{ &Z_Construct_UFunction_UDataLayerSubsystem_GetLoadedDataLayerNames, "GetLoadedDataLayerNames" }, // 4198017778
		{ &Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerInstanceRuntimeState, "SetDataLayerInstanceRuntimeState" }, // 2015448966
		{ &Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerRuntimeState, "SetDataLayerRuntimeState" }, // 1320919524
		{ &Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerRuntimeStateByLabel, "SetDataLayerRuntimeStateByLabel" }, // 2592980693
		{ &Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerState, "SetDataLayerState" }, // 2628363662
		{ &Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerStateByLabel, "SetDataLayerStateByLabel" }, // 1479851091
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataLayerSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDataLayerSubsystem_Statics::NewProp_OnDataLayerRuntimeStateChanged = { "OnDataLayerRuntimeStateChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDataLayerSubsystem, OnDataLayerRuntimeStateChanged), Z_Construct_UDelegateFunction_Engine_OnDataLayerRuntimeStateChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDataLayerRuntimeStateChanged_MetaData), NewProp_OnDataLayerRuntimeStateChanged_MetaData) }; // 3857072243
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UDataLayerSubsystem_Statics::NewProp_DataLayerLoadingPolicyClass = { "DataLayerLoadingPolicyClass", nullptr, (EPropertyFlags)0x0044000000004000, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDataLayerSubsystem, DataLayerLoadingPolicyClass), Z_Construct_UClass_UDataLayerLoadingPolicy_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataLayerLoadingPolicyClass_MetaData), NewProp_DataLayerLoadingPolicyClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDataLayerSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataLayerSubsystem_Statics::NewProp_OnDataLayerRuntimeStateChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataLayerSubsystem_Statics::NewProp_DataLayerLoadingPolicyClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDataLayerSubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDataLayerSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDataLayerSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataLayerSubsystem_Statics::ClassParams = {
	&UDataLayerSubsystem::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UDataLayerSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UDataLayerSubsystem_Statics::PropPointers),
	0,
	0x008800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDataLayerSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UDataLayerSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDataLayerSubsystem()
{
	if (!Z_Registration_Info_UClass_UDataLayerSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataLayerSubsystem.OuterSingleton, Z_Construct_UClass_UDataLayerSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDataLayerSubsystem.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UDataLayerSubsystem>()
{
	return UDataLayerSubsystem::StaticClass();
}
UDataLayerSubsystem::UDataLayerSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDataLayerSubsystem);
UDataLayerSubsystem::~UDataLayerSubsystem() {}
// End Class UDataLayerSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDataLayerSubsystem, UDataLayerSubsystem::StaticClass, TEXT("UDataLayerSubsystem"), &Z_Registration_Info_UClass_UDataLayerSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataLayerSubsystem), 1319103727U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerSubsystem_h_553285096(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
