// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/WorldPartition/DataLayer/DataLayerManager.h"
#include "Runtime/Engine/Public/WorldPartition/WorldPartition.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataLayerManager() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDataLayerAsset_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDataLayerInstance_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDataLayerInstanceWithAsset_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDataLayerLoadingPolicy_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDataLayerManager();
ENGINE_API UClass* Z_Construct_UClass_UDataLayerManager_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDataLayerRuntimeState();
ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnDataLayerInstanceRuntimeStateChanged__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Delegate FOnDataLayerInstanceRuntimeStateChanged
struct Z_Construct_UDelegateFunction_Engine_OnDataLayerInstanceRuntimeStateChanged__DelegateSignature_Statics
{
	struct _Script_Engine_eventOnDataLayerInstanceRuntimeStateChanged_Parms
	{
		const UDataLayerInstance* DataLayer;
		EDataLayerRuntimeState State;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayerManager.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Engine_OnDataLayerInstanceRuntimeStateChanged__DelegateSignature_Statics::NewProp_DataLayer = { "DataLayer", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Engine_eventOnDataLayerInstanceRuntimeStateChanged_Parms, DataLayer), Z_Construct_UClass_UDataLayerInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataLayer_MetaData), NewProp_DataLayer_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_Engine_OnDataLayerInstanceRuntimeStateChanged__DelegateSignature_Statics::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_Engine_OnDataLayerInstanceRuntimeStateChanged__DelegateSignature_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Engine_eventOnDataLayerInstanceRuntimeStateChanged_Parms, State), Z_Construct_UEnum_Engine_EDataLayerRuntimeState, METADATA_PARAMS(0, nullptr) }; // 10031493
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Engine_OnDataLayerInstanceRuntimeStateChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnDataLayerInstanceRuntimeStateChanged__DelegateSignature_Statics::NewProp_DataLayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnDataLayerInstanceRuntimeStateChanged__DelegateSignature_Statics::NewProp_State_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnDataLayerInstanceRuntimeStateChanged__DelegateSignature_Statics::NewProp_State,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnDataLayerInstanceRuntimeStateChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_OnDataLayerInstanceRuntimeStateChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "OnDataLayerInstanceRuntimeStateChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Engine_OnDataLayerInstanceRuntimeStateChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnDataLayerInstanceRuntimeStateChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Engine_OnDataLayerInstanceRuntimeStateChanged__DelegateSignature_Statics::_Script_Engine_eventOnDataLayerInstanceRuntimeStateChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnDataLayerInstanceRuntimeStateChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Engine_OnDataLayerInstanceRuntimeStateChanged__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_Engine_OnDataLayerInstanceRuntimeStateChanged__DelegateSignature_Statics::_Script_Engine_eventOnDataLayerInstanceRuntimeStateChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Engine_OnDataLayerInstanceRuntimeStateChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Engine_OnDataLayerInstanceRuntimeStateChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnDataLayerInstanceRuntimeStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnDataLayerInstanceRuntimeStateChanged, const UDataLayerInstance* DataLayer, EDataLayerRuntimeState State)
{
	struct _Script_Engine_eventOnDataLayerInstanceRuntimeStateChanged_Parms
	{
		const UDataLayerInstance* DataLayer;
		EDataLayerRuntimeState State;
	};
	_Script_Engine_eventOnDataLayerInstanceRuntimeStateChanged_Parms Parms;
	Parms.DataLayer=DataLayer;
	Parms.State=State;
	OnDataLayerInstanceRuntimeStateChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnDataLayerInstanceRuntimeStateChanged

// Begin Class UDataLayerManager Function GetDataLayerInstanceEffectiveRuntimeState
struct Z_Construct_UFunction_UDataLayerManager_GetDataLayerInstanceEffectiveRuntimeState_Statics
{
	struct DataLayerManager_eventGetDataLayerInstanceEffectiveRuntimeState_Parms
	{
		const UDataLayerInstance* InDataLayerInstance;
		EDataLayerRuntimeState ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DataLayers" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayerManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InDataLayerInstance_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InDataLayerInstance;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataLayerManager_GetDataLayerInstanceEffectiveRuntimeState_Statics::NewProp_InDataLayerInstance = { "InDataLayerInstance", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataLayerManager_eventGetDataLayerInstanceEffectiveRuntimeState_Parms, InDataLayerInstance), Z_Construct_UClass_UDataLayerInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InDataLayerInstance_MetaData), NewProp_InDataLayerInstance_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDataLayerManager_GetDataLayerInstanceEffectiveRuntimeState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDataLayerManager_GetDataLayerInstanceEffectiveRuntimeState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataLayerManager_eventGetDataLayerInstanceEffectiveRuntimeState_Parms, ReturnValue), Z_Construct_UEnum_Engine_EDataLayerRuntimeState, METADATA_PARAMS(0, nullptr) }; // 10031493
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLayerManager_GetDataLayerInstanceEffectiveRuntimeState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerManager_GetDataLayerInstanceEffectiveRuntimeState_Statics::NewProp_InDataLayerInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerManager_GetDataLayerInstanceEffectiveRuntimeState_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerManager_GetDataLayerInstanceEffectiveRuntimeState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerManager_GetDataLayerInstanceEffectiveRuntimeState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLayerManager_GetDataLayerInstanceEffectiveRuntimeState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataLayerManager, nullptr, "GetDataLayerInstanceEffectiveRuntimeState", nullptr, nullptr, Z_Construct_UFunction_UDataLayerManager_GetDataLayerInstanceEffectiveRuntimeState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerManager_GetDataLayerInstanceEffectiveRuntimeState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDataLayerManager_GetDataLayerInstanceEffectiveRuntimeState_Statics::DataLayerManager_eventGetDataLayerInstanceEffectiveRuntimeState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerManager_GetDataLayerInstanceEffectiveRuntimeState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDataLayerManager_GetDataLayerInstanceEffectiveRuntimeState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDataLayerManager_GetDataLayerInstanceEffectiveRuntimeState_Statics::DataLayerManager_eventGetDataLayerInstanceEffectiveRuntimeState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDataLayerManager_GetDataLayerInstanceEffectiveRuntimeState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLayerManager_GetDataLayerInstanceEffectiveRuntimeState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDataLayerManager::execGetDataLayerInstanceEffectiveRuntimeState)
{
	P_GET_OBJECT(UDataLayerInstance,Z_Param_InDataLayerInstance);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EDataLayerRuntimeState*)Z_Param__Result=P_THIS->GetDataLayerInstanceEffectiveRuntimeState(Z_Param_InDataLayerInstance);
	P_NATIVE_END;
}
// End Class UDataLayerManager Function GetDataLayerInstanceEffectiveRuntimeState

// Begin Class UDataLayerManager Function GetDataLayerInstanceFromAsset
struct Z_Construct_UFunction_UDataLayerManager_GetDataLayerInstanceFromAsset_Statics
{
	struct DataLayerManager_eventGetDataLayerInstanceFromAsset_Parms
	{
		const UDataLayerAsset* InDataLayerAsset;
		const UDataLayerInstance* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DataLayers" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayerManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InDataLayerAsset_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InDataLayerAsset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataLayerManager_GetDataLayerInstanceFromAsset_Statics::NewProp_InDataLayerAsset = { "InDataLayerAsset", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataLayerManager_eventGetDataLayerInstanceFromAsset_Parms, InDataLayerAsset), Z_Construct_UClass_UDataLayerAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InDataLayerAsset_MetaData), NewProp_InDataLayerAsset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataLayerManager_GetDataLayerInstanceFromAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataLayerManager_eventGetDataLayerInstanceFromAsset_Parms, ReturnValue), Z_Construct_UClass_UDataLayerInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLayerManager_GetDataLayerInstanceFromAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerManager_GetDataLayerInstanceFromAsset_Statics::NewProp_InDataLayerAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerManager_GetDataLayerInstanceFromAsset_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerManager_GetDataLayerInstanceFromAsset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLayerManager_GetDataLayerInstanceFromAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataLayerManager, nullptr, "GetDataLayerInstanceFromAsset", nullptr, nullptr, Z_Construct_UFunction_UDataLayerManager_GetDataLayerInstanceFromAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerManager_GetDataLayerInstanceFromAsset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDataLayerManager_GetDataLayerInstanceFromAsset_Statics::DataLayerManager_eventGetDataLayerInstanceFromAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerManager_GetDataLayerInstanceFromAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDataLayerManager_GetDataLayerInstanceFromAsset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDataLayerManager_GetDataLayerInstanceFromAsset_Statics::DataLayerManager_eventGetDataLayerInstanceFromAsset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDataLayerManager_GetDataLayerInstanceFromAsset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLayerManager_GetDataLayerInstanceFromAsset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDataLayerManager::execGetDataLayerInstanceFromAsset)
{
	P_GET_OBJECT(UDataLayerAsset,Z_Param_InDataLayerAsset);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(const UDataLayerInstance**)Z_Param__Result=P_THIS->GetDataLayerInstanceFromAsset(Z_Param_InDataLayerAsset);
	P_NATIVE_END;
}
// End Class UDataLayerManager Function GetDataLayerInstanceFromAsset

// Begin Class UDataLayerManager Function GetDataLayerInstanceFromName
struct Z_Construct_UFunction_UDataLayerManager_GetDataLayerInstanceFromName_Statics
{
	struct DataLayerManager_eventGetDataLayerInstanceFromName_Parms
	{
		FName InDataLayerInstanceName;
		const UDataLayerInstance* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DataLayers" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayerManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InDataLayerInstanceName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InDataLayerInstanceName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDataLayerManager_GetDataLayerInstanceFromName_Statics::NewProp_InDataLayerInstanceName = { "InDataLayerInstanceName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataLayerManager_eventGetDataLayerInstanceFromName_Parms, InDataLayerInstanceName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InDataLayerInstanceName_MetaData), NewProp_InDataLayerInstanceName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataLayerManager_GetDataLayerInstanceFromName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataLayerManager_eventGetDataLayerInstanceFromName_Parms, ReturnValue), Z_Construct_UClass_UDataLayerInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLayerManager_GetDataLayerInstanceFromName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerManager_GetDataLayerInstanceFromName_Statics::NewProp_InDataLayerInstanceName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerManager_GetDataLayerInstanceFromName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerManager_GetDataLayerInstanceFromName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLayerManager_GetDataLayerInstanceFromName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataLayerManager, nullptr, "GetDataLayerInstanceFromName", nullptr, nullptr, Z_Construct_UFunction_UDataLayerManager_GetDataLayerInstanceFromName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerManager_GetDataLayerInstanceFromName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDataLayerManager_GetDataLayerInstanceFromName_Statics::DataLayerManager_eventGetDataLayerInstanceFromName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerManager_GetDataLayerInstanceFromName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDataLayerManager_GetDataLayerInstanceFromName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDataLayerManager_GetDataLayerInstanceFromName_Statics::DataLayerManager_eventGetDataLayerInstanceFromName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDataLayerManager_GetDataLayerInstanceFromName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLayerManager_GetDataLayerInstanceFromName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDataLayerManager::execGetDataLayerInstanceFromName)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InDataLayerInstanceName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(const UDataLayerInstance**)Z_Param__Result=P_THIS->GetDataLayerInstanceFromName(Z_Param_Out_InDataLayerInstanceName);
	P_NATIVE_END;
}
// End Class UDataLayerManager Function GetDataLayerInstanceFromName

// Begin Class UDataLayerManager Function GetDataLayerInstanceRuntimeState
struct Z_Construct_UFunction_UDataLayerManager_GetDataLayerInstanceRuntimeState_Statics
{
	struct DataLayerManager_eventGetDataLayerInstanceRuntimeState_Parms
	{
		const UDataLayerInstance* InDataLayerInstance;
		EDataLayerRuntimeState ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DataLayers" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayerManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InDataLayerInstance_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InDataLayerInstance;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataLayerManager_GetDataLayerInstanceRuntimeState_Statics::NewProp_InDataLayerInstance = { "InDataLayerInstance", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataLayerManager_eventGetDataLayerInstanceRuntimeState_Parms, InDataLayerInstance), Z_Construct_UClass_UDataLayerInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InDataLayerInstance_MetaData), NewProp_InDataLayerInstance_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDataLayerManager_GetDataLayerInstanceRuntimeState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDataLayerManager_GetDataLayerInstanceRuntimeState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataLayerManager_eventGetDataLayerInstanceRuntimeState_Parms, ReturnValue), Z_Construct_UEnum_Engine_EDataLayerRuntimeState, METADATA_PARAMS(0, nullptr) }; // 10031493
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLayerManager_GetDataLayerInstanceRuntimeState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerManager_GetDataLayerInstanceRuntimeState_Statics::NewProp_InDataLayerInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerManager_GetDataLayerInstanceRuntimeState_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerManager_GetDataLayerInstanceRuntimeState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerManager_GetDataLayerInstanceRuntimeState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLayerManager_GetDataLayerInstanceRuntimeState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataLayerManager, nullptr, "GetDataLayerInstanceRuntimeState", nullptr, nullptr, Z_Construct_UFunction_UDataLayerManager_GetDataLayerInstanceRuntimeState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerManager_GetDataLayerInstanceRuntimeState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDataLayerManager_GetDataLayerInstanceRuntimeState_Statics::DataLayerManager_eventGetDataLayerInstanceRuntimeState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerManager_GetDataLayerInstanceRuntimeState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDataLayerManager_GetDataLayerInstanceRuntimeState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDataLayerManager_GetDataLayerInstanceRuntimeState_Statics::DataLayerManager_eventGetDataLayerInstanceRuntimeState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDataLayerManager_GetDataLayerInstanceRuntimeState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLayerManager_GetDataLayerInstanceRuntimeState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDataLayerManager::execGetDataLayerInstanceRuntimeState)
{
	P_GET_OBJECT(UDataLayerInstance,Z_Param_InDataLayerInstance);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EDataLayerRuntimeState*)Z_Param__Result=P_THIS->GetDataLayerInstanceRuntimeState(Z_Param_InDataLayerInstance);
	P_NATIVE_END;
}
// End Class UDataLayerManager Function GetDataLayerInstanceRuntimeState

// Begin Class UDataLayerManager Function GetDataLayerInstances
struct Z_Construct_UFunction_UDataLayerManager_GetDataLayerInstances_Statics
{
	struct DataLayerManager_eventGetDataLayerInstances_Parms
	{
		TArray<UDataLayerInstance*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DataLayers" },
		{ "Comment", "//~ Begin Blueprint interface\n" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayerManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataLayerManager_GetDataLayerInstances_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UDataLayerInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDataLayerManager_GetDataLayerInstances_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataLayerManager_eventGetDataLayerInstances_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLayerManager_GetDataLayerInstances_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerManager_GetDataLayerInstances_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerManager_GetDataLayerInstances_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerManager_GetDataLayerInstances_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLayerManager_GetDataLayerInstances_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataLayerManager, nullptr, "GetDataLayerInstances", nullptr, nullptr, Z_Construct_UFunction_UDataLayerManager_GetDataLayerInstances_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerManager_GetDataLayerInstances_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDataLayerManager_GetDataLayerInstances_Statics::DataLayerManager_eventGetDataLayerInstances_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerManager_GetDataLayerInstances_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDataLayerManager_GetDataLayerInstances_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDataLayerManager_GetDataLayerInstances_Statics::DataLayerManager_eventGetDataLayerInstances_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDataLayerManager_GetDataLayerInstances()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLayerManager_GetDataLayerInstances_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDataLayerManager::execGetDataLayerInstances)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UDataLayerInstance*>*)Z_Param__Result=P_THIS->GetDataLayerInstances();
	P_NATIVE_END;
}
// End Class UDataLayerManager Function GetDataLayerInstances

// Begin Class UDataLayerManager Function SetDataLayerInstanceRuntimeState
struct Z_Construct_UFunction_UDataLayerManager_SetDataLayerInstanceRuntimeState_Statics
{
	struct DataLayerManager_eventSetDataLayerInstanceRuntimeState_Parms
	{
		const UDataLayerInstance* InDataLayerInstance;
		EDataLayerRuntimeState InState;
		bool bInIsRecursive;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DataLayers" },
		{ "CPP_Default_bInIsRecursive", "false" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayerManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InDataLayerInstance_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InDataLayerInstance;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InState;
	static void NewProp_bInIsRecursive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInIsRecursive;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataLayerManager_SetDataLayerInstanceRuntimeState_Statics::NewProp_InDataLayerInstance = { "InDataLayerInstance", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataLayerManager_eventSetDataLayerInstanceRuntimeState_Parms, InDataLayerInstance), Z_Construct_UClass_UDataLayerInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InDataLayerInstance_MetaData), NewProp_InDataLayerInstance_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDataLayerManager_SetDataLayerInstanceRuntimeState_Statics::NewProp_InState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDataLayerManager_SetDataLayerInstanceRuntimeState_Statics::NewProp_InState = { "InState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataLayerManager_eventSetDataLayerInstanceRuntimeState_Parms, InState), Z_Construct_UEnum_Engine_EDataLayerRuntimeState, METADATA_PARAMS(0, nullptr) }; // 10031493
void Z_Construct_UFunction_UDataLayerManager_SetDataLayerInstanceRuntimeState_Statics::NewProp_bInIsRecursive_SetBit(void* Obj)
{
	((DataLayerManager_eventSetDataLayerInstanceRuntimeState_Parms*)Obj)->bInIsRecursive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDataLayerManager_SetDataLayerInstanceRuntimeState_Statics::NewProp_bInIsRecursive = { "bInIsRecursive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DataLayerManager_eventSetDataLayerInstanceRuntimeState_Parms), &Z_Construct_UFunction_UDataLayerManager_SetDataLayerInstanceRuntimeState_Statics::NewProp_bInIsRecursive_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UDataLayerManager_SetDataLayerInstanceRuntimeState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DataLayerManager_eventSetDataLayerInstanceRuntimeState_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDataLayerManager_SetDataLayerInstanceRuntimeState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DataLayerManager_eventSetDataLayerInstanceRuntimeState_Parms), &Z_Construct_UFunction_UDataLayerManager_SetDataLayerInstanceRuntimeState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLayerManager_SetDataLayerInstanceRuntimeState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerManager_SetDataLayerInstanceRuntimeState_Statics::NewProp_InDataLayerInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerManager_SetDataLayerInstanceRuntimeState_Statics::NewProp_InState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerManager_SetDataLayerInstanceRuntimeState_Statics::NewProp_InState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerManager_SetDataLayerInstanceRuntimeState_Statics::NewProp_bInIsRecursive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerManager_SetDataLayerInstanceRuntimeState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerManager_SetDataLayerInstanceRuntimeState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLayerManager_SetDataLayerInstanceRuntimeState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataLayerManager, nullptr, "SetDataLayerInstanceRuntimeState", nullptr, nullptr, Z_Construct_UFunction_UDataLayerManager_SetDataLayerInstanceRuntimeState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerManager_SetDataLayerInstanceRuntimeState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDataLayerManager_SetDataLayerInstanceRuntimeState_Statics::DataLayerManager_eventSetDataLayerInstanceRuntimeState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerManager_SetDataLayerInstanceRuntimeState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDataLayerManager_SetDataLayerInstanceRuntimeState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDataLayerManager_SetDataLayerInstanceRuntimeState_Statics::DataLayerManager_eventSetDataLayerInstanceRuntimeState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDataLayerManager_SetDataLayerInstanceRuntimeState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLayerManager_SetDataLayerInstanceRuntimeState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDataLayerManager::execSetDataLayerInstanceRuntimeState)
{
	P_GET_OBJECT(UDataLayerInstance,Z_Param_InDataLayerInstance);
	P_GET_ENUM(EDataLayerRuntimeState,Z_Param_InState);
	P_GET_UBOOL(Z_Param_bInIsRecursive);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetDataLayerInstanceRuntimeState(Z_Param_InDataLayerInstance,EDataLayerRuntimeState(Z_Param_InState),Z_Param_bInIsRecursive);
	P_NATIVE_END;
}
// End Class UDataLayerManager Function SetDataLayerInstanceRuntimeState

// Begin Class UDataLayerManager Function SetDataLayerRuntimeState
struct Z_Construct_UFunction_UDataLayerManager_SetDataLayerRuntimeState_Statics
{
	struct DataLayerManager_eventSetDataLayerRuntimeState_Parms
	{
		const UDataLayerAsset* InDataLayerAsset;
		EDataLayerRuntimeState InState;
		bool bInIsRecursive;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DataLayers" },
		{ "CPP_Default_bInIsRecursive", "false" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayerManager.h" },
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
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataLayerManager_SetDataLayerRuntimeState_Statics::NewProp_InDataLayerAsset = { "InDataLayerAsset", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataLayerManager_eventSetDataLayerRuntimeState_Parms, InDataLayerAsset), Z_Construct_UClass_UDataLayerAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InDataLayerAsset_MetaData), NewProp_InDataLayerAsset_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDataLayerManager_SetDataLayerRuntimeState_Statics::NewProp_InState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDataLayerManager_SetDataLayerRuntimeState_Statics::NewProp_InState = { "InState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataLayerManager_eventSetDataLayerRuntimeState_Parms, InState), Z_Construct_UEnum_Engine_EDataLayerRuntimeState, METADATA_PARAMS(0, nullptr) }; // 10031493
void Z_Construct_UFunction_UDataLayerManager_SetDataLayerRuntimeState_Statics::NewProp_bInIsRecursive_SetBit(void* Obj)
{
	((DataLayerManager_eventSetDataLayerRuntimeState_Parms*)Obj)->bInIsRecursive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDataLayerManager_SetDataLayerRuntimeState_Statics::NewProp_bInIsRecursive = { "bInIsRecursive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DataLayerManager_eventSetDataLayerRuntimeState_Parms), &Z_Construct_UFunction_UDataLayerManager_SetDataLayerRuntimeState_Statics::NewProp_bInIsRecursive_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UDataLayerManager_SetDataLayerRuntimeState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DataLayerManager_eventSetDataLayerRuntimeState_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDataLayerManager_SetDataLayerRuntimeState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DataLayerManager_eventSetDataLayerRuntimeState_Parms), &Z_Construct_UFunction_UDataLayerManager_SetDataLayerRuntimeState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLayerManager_SetDataLayerRuntimeState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerManager_SetDataLayerRuntimeState_Statics::NewProp_InDataLayerAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerManager_SetDataLayerRuntimeState_Statics::NewProp_InState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerManager_SetDataLayerRuntimeState_Statics::NewProp_InState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerManager_SetDataLayerRuntimeState_Statics::NewProp_bInIsRecursive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerManager_SetDataLayerRuntimeState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerManager_SetDataLayerRuntimeState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLayerManager_SetDataLayerRuntimeState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataLayerManager, nullptr, "SetDataLayerRuntimeState", nullptr, nullptr, Z_Construct_UFunction_UDataLayerManager_SetDataLayerRuntimeState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerManager_SetDataLayerRuntimeState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDataLayerManager_SetDataLayerRuntimeState_Statics::DataLayerManager_eventSetDataLayerRuntimeState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerManager_SetDataLayerRuntimeState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDataLayerManager_SetDataLayerRuntimeState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDataLayerManager_SetDataLayerRuntimeState_Statics::DataLayerManager_eventSetDataLayerRuntimeState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDataLayerManager_SetDataLayerRuntimeState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLayerManager_SetDataLayerRuntimeState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDataLayerManager::execSetDataLayerRuntimeState)
{
	P_GET_OBJECT(UDataLayerAsset,Z_Param_InDataLayerAsset);
	P_GET_ENUM(EDataLayerRuntimeState,Z_Param_InState);
	P_GET_UBOOL(Z_Param_bInIsRecursive);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetDataLayerRuntimeState(Z_Param_InDataLayerAsset,EDataLayerRuntimeState(Z_Param_InState),Z_Param_bInIsRecursive);
	P_NATIVE_END;
}
// End Class UDataLayerManager Function SetDataLayerRuntimeState

// Begin Class UDataLayerManager
void UDataLayerManager::StaticRegisterNativesUDataLayerManager()
{
	UClass* Class = UDataLayerManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetDataLayerInstanceEffectiveRuntimeState", &UDataLayerManager::execGetDataLayerInstanceEffectiveRuntimeState },
		{ "GetDataLayerInstanceFromAsset", &UDataLayerManager::execGetDataLayerInstanceFromAsset },
		{ "GetDataLayerInstanceFromName", &UDataLayerManager::execGetDataLayerInstanceFromName },
		{ "GetDataLayerInstanceRuntimeState", &UDataLayerManager::execGetDataLayerInstanceRuntimeState },
		{ "GetDataLayerInstances", &UDataLayerManager::execGetDataLayerInstances },
		{ "SetDataLayerInstanceRuntimeState", &UDataLayerManager::execSetDataLayerInstanceRuntimeState },
		{ "SetDataLayerRuntimeState", &UDataLayerManager::execSetDataLayerRuntimeState },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataLayerManager);
UClass* Z_Construct_UClass_UDataLayerManager_NoRegister()
{
	return UDataLayerManager::StaticClass();
}
struct Z_Construct_UClass_UDataLayerManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "WorldPartition/DataLayer/DataLayerManager.h" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayerManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDataLayerInstanceRuntimeStateChanged_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayerManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReferencedObjects_MetaData[] = {
		{ "Comment", "/** Referenced objects (used by verse) */" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayerManager.h" },
		{ "ToolTip", "Referenced objects (used by verse)" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataLayerLoadingPolicyClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayerManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataLayerInstanceWithAssetClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayerManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataLayerLoadingPolicy_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayerManager.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDataLayerInstanceRuntimeStateChanged;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReferencedObjects_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_ReferencedObjects;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_DataLayerLoadingPolicyClass;
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_DataLayerInstanceWithAssetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DataLayerLoadingPolicy;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDataLayerManager_GetDataLayerInstanceEffectiveRuntimeState, "GetDataLayerInstanceEffectiveRuntimeState" }, // 1075959708
		{ &Z_Construct_UFunction_UDataLayerManager_GetDataLayerInstanceFromAsset, "GetDataLayerInstanceFromAsset" }, // 24956838
		{ &Z_Construct_UFunction_UDataLayerManager_GetDataLayerInstanceFromName, "GetDataLayerInstanceFromName" }, // 3305662992
		{ &Z_Construct_UFunction_UDataLayerManager_GetDataLayerInstanceRuntimeState, "GetDataLayerInstanceRuntimeState" }, // 3576852498
		{ &Z_Construct_UFunction_UDataLayerManager_GetDataLayerInstances, "GetDataLayerInstances" }, // 2923813583
		{ &Z_Construct_UFunction_UDataLayerManager_SetDataLayerInstanceRuntimeState, "SetDataLayerInstanceRuntimeState" }, // 2057244376
		{ &Z_Construct_UFunction_UDataLayerManager_SetDataLayerRuntimeState, "SetDataLayerRuntimeState" }, // 1809160315
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataLayerManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDataLayerManager_Statics::NewProp_OnDataLayerInstanceRuntimeStateChanged = { "OnDataLayerInstanceRuntimeStateChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDataLayerManager, OnDataLayerInstanceRuntimeStateChanged), Z_Construct_UDelegateFunction_Engine_OnDataLayerInstanceRuntimeStateChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDataLayerInstanceRuntimeStateChanged_MetaData), NewProp_OnDataLayerInstanceRuntimeStateChanged_MetaData) }; // 2252594189
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDataLayerManager_Statics::NewProp_ReferencedObjects_ElementProp = { "ReferencedObjects", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UDataLayerManager_Statics::NewProp_ReferencedObjects = { "ReferencedObjects", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDataLayerManager, ReferencedObjects), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReferencedObjects_MetaData), NewProp_ReferencedObjects_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UDataLayerManager_Statics::NewProp_DataLayerLoadingPolicyClass = { "DataLayerLoadingPolicyClass", nullptr, (EPropertyFlags)0x0044000800004000, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDataLayerManager, DataLayerLoadingPolicyClass), Z_Construct_UClass_UDataLayerLoadingPolicy_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataLayerLoadingPolicyClass_MetaData), NewProp_DataLayerLoadingPolicyClass_MetaData) };
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UDataLayerManager_Statics::NewProp_DataLayerInstanceWithAssetClass = { "DataLayerInstanceWithAssetClass", nullptr, (EPropertyFlags)0x0044000800004000, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDataLayerManager, DataLayerInstanceWithAssetClass), Z_Construct_UClass_UDataLayerInstanceWithAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataLayerInstanceWithAssetClass_MetaData), NewProp_DataLayerInstanceWithAssetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDataLayerManager_Statics::NewProp_DataLayerLoadingPolicy = { "DataLayerLoadingPolicy", nullptr, (EPropertyFlags)0x0144000800002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDataLayerManager, DataLayerLoadingPolicy), Z_Construct_UClass_UDataLayerLoadingPolicy_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataLayerLoadingPolicy_MetaData), NewProp_DataLayerLoadingPolicy_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDataLayerManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataLayerManager_Statics::NewProp_OnDataLayerInstanceRuntimeStateChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataLayerManager_Statics::NewProp_ReferencedObjects_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataLayerManager_Statics::NewProp_ReferencedObjects,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataLayerManager_Statics::NewProp_DataLayerLoadingPolicyClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataLayerManager_Statics::NewProp_DataLayerInstanceWithAssetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataLayerManager_Statics::NewProp_DataLayerLoadingPolicy,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDataLayerManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDataLayerManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDataLayerManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataLayerManager_Statics::ClassParams = {
	&UDataLayerManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UDataLayerManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UDataLayerManager_Statics::PropPointers),
	0,
	0x008800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDataLayerManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UDataLayerManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDataLayerManager()
{
	if (!Z_Registration_Info_UClass_UDataLayerManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataLayerManager.OuterSingleton, Z_Construct_UClass_UDataLayerManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDataLayerManager.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UDataLayerManager>()
{
	return UDataLayerManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDataLayerManager);
UDataLayerManager::~UDataLayerManager() {}
// End Class UDataLayerManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDataLayerManager, UDataLayerManager::StaticClass, TEXT("UDataLayerManager"), &Z_Registration_Info_UClass_UDataLayerManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataLayerManager), 3655450499U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerManager_h_3797547488(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
