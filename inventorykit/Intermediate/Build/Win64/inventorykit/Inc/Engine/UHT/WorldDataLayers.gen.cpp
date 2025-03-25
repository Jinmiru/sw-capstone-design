// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/WorldPartition/DataLayer/WorldDataLayers.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldDataLayers() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AInfo();
ENGINE_API UClass* Z_Construct_UClass_AWorldDataLayers();
ENGINE_API UClass* Z_Construct_UClass_AWorldDataLayers_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDataLayerInstance_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDataLayerInstanceProvider_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDEPRECATED_DataLayer_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UExternalDataLayerInstance_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDataLayerRuntimeState();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FActorPlacementDataLayers();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FActorPlacementDataLayers
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ActorPlacementDataLayers;
class UScriptStruct* FActorPlacementDataLayers::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ActorPlacementDataLayers.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ActorPlacementDataLayers.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FActorPlacementDataLayers, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ActorPlacementDataLayers"));
	}
	return Z_Registration_Info_UScriptStruct_ActorPlacementDataLayers.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FActorPlacementDataLayers>()
{
	return FActorPlacementDataLayers::StaticStruct();
}
struct Z_Construct_UScriptStruct_FActorPlacementDataLayers_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/WorldDataLayers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataLayerInstanceNames_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/WorldDataLayers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExternalDataLayerName_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/WorldDataLayers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentColorizedDataLayerInstanceName_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/WorldDataLayers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContextID_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/WorldDataLayers.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_DataLayerInstanceNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DataLayerInstanceNames;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ExternalDataLayerName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CurrentColorizedDataLayerInstanceName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ContextID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActorPlacementDataLayers>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FActorPlacementDataLayers_Statics::NewProp_DataLayerInstanceNames_Inner = { "DataLayerInstanceNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FActorPlacementDataLayers_Statics::NewProp_DataLayerInstanceNames = { "DataLayerInstanceNames", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActorPlacementDataLayers, DataLayerInstanceNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataLayerInstanceNames_MetaData), NewProp_DataLayerInstanceNames_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FActorPlacementDataLayers_Statics::NewProp_ExternalDataLayerName = { "ExternalDataLayerName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActorPlacementDataLayers, ExternalDataLayerName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExternalDataLayerName_MetaData), NewProp_ExternalDataLayerName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FActorPlacementDataLayers_Statics::NewProp_CurrentColorizedDataLayerInstanceName = { "CurrentColorizedDataLayerInstanceName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActorPlacementDataLayers, CurrentColorizedDataLayerInstanceName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentColorizedDataLayerInstanceName_MetaData), NewProp_CurrentColorizedDataLayerInstanceName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FActorPlacementDataLayers_Statics::NewProp_ContextID = { "ContextID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActorPlacementDataLayers, ContextID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContextID_MetaData), NewProp_ContextID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActorPlacementDataLayers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorPlacementDataLayers_Statics::NewProp_DataLayerInstanceNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorPlacementDataLayers_Statics::NewProp_DataLayerInstanceNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorPlacementDataLayers_Statics::NewProp_ExternalDataLayerName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorPlacementDataLayers_Statics::NewProp_CurrentColorizedDataLayerInstanceName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorPlacementDataLayers_Statics::NewProp_ContextID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorPlacementDataLayers_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActorPlacementDataLayers_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"ActorPlacementDataLayers",
	Z_Construct_UScriptStruct_FActorPlacementDataLayers_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorPlacementDataLayers_Statics::PropPointers),
	sizeof(FActorPlacementDataLayers),
	alignof(FActorPlacementDataLayers),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorPlacementDataLayers_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FActorPlacementDataLayers_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FActorPlacementDataLayers()
{
	if (!Z_Registration_Info_UScriptStruct_ActorPlacementDataLayers.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ActorPlacementDataLayers.InnerSingleton, Z_Construct_UScriptStruct_FActorPlacementDataLayers_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ActorPlacementDataLayers.InnerSingleton;
}
// End ScriptStruct FActorPlacementDataLayers

// Begin Class AWorldDataLayers Function OnDataLayerRuntimeStateChanged
struct WorldDataLayers_eventOnDataLayerRuntimeStateChanged_Parms
{
	const UDataLayerInstance* InDataLayer;
	EDataLayerRuntimeState InState;
};
static FName NAME_AWorldDataLayers_OnDataLayerRuntimeStateChanged = FName(TEXT("OnDataLayerRuntimeStateChanged"));
void AWorldDataLayers::OnDataLayerRuntimeStateChanged(const UDataLayerInstance* InDataLayer, EDataLayerRuntimeState InState)
{
	WorldDataLayers_eventOnDataLayerRuntimeStateChanged_Parms Parms;
	Parms.InDataLayer=InDataLayer;
	Parms.InState=InState;
	ProcessEvent(FindFunctionChecked(NAME_AWorldDataLayers_OnDataLayerRuntimeStateChanged),&Parms);
}
struct Z_Construct_UFunction_AWorldDataLayers_OnDataLayerRuntimeStateChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/WorldDataLayers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InDataLayer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InDataLayer;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWorldDataLayers_OnDataLayerRuntimeStateChanged_Statics::NewProp_InDataLayer = { "InDataLayer", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldDataLayers_eventOnDataLayerRuntimeStateChanged_Parms, InDataLayer), Z_Construct_UClass_UDataLayerInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InDataLayer_MetaData), NewProp_InDataLayer_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AWorldDataLayers_OnDataLayerRuntimeStateChanged_Statics::NewProp_InState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AWorldDataLayers_OnDataLayerRuntimeStateChanged_Statics::NewProp_InState = { "InState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldDataLayers_eventOnDataLayerRuntimeStateChanged_Parms, InState), Z_Construct_UEnum_Engine_EDataLayerRuntimeState, METADATA_PARAMS(0, nullptr) }; // 10031493
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWorldDataLayers_OnDataLayerRuntimeStateChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldDataLayers_OnDataLayerRuntimeStateChanged_Statics::NewProp_InDataLayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldDataLayers_OnDataLayerRuntimeStateChanged_Statics::NewProp_InState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldDataLayers_OnDataLayerRuntimeStateChanged_Statics::NewProp_InState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldDataLayers_OnDataLayerRuntimeStateChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWorldDataLayers_OnDataLayerRuntimeStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWorldDataLayers, nullptr, "OnDataLayerRuntimeStateChanged", nullptr, nullptr, Z_Construct_UFunction_AWorldDataLayers_OnDataLayerRuntimeStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldDataLayers_OnDataLayerRuntimeStateChanged_Statics::PropPointers), sizeof(WorldDataLayers_eventOnDataLayerRuntimeStateChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC2, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldDataLayers_OnDataLayerRuntimeStateChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWorldDataLayers_OnDataLayerRuntimeStateChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(WorldDataLayers_eventOnDataLayerRuntimeStateChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWorldDataLayers_OnDataLayerRuntimeStateChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWorldDataLayers_OnDataLayerRuntimeStateChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWorldDataLayers::execOnDataLayerRuntimeStateChanged)
{
	P_GET_OBJECT(UDataLayerInstance,Z_Param_InDataLayer);
	P_GET_ENUM(EDataLayerRuntimeState,Z_Param_InState);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnDataLayerRuntimeStateChanged_Implementation(Z_Param_InDataLayer,EDataLayerRuntimeState(Z_Param_InState));
	P_NATIVE_END;
}
// End Class AWorldDataLayers Function OnDataLayerRuntimeStateChanged

// Begin Class AWorldDataLayers Function OnRep_ActiveDataLayerNames
struct Z_Construct_UFunction_AWorldDataLayers_OnRep_ActiveDataLayerNames_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/WorldDataLayers.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWorldDataLayers_OnRep_ActiveDataLayerNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWorldDataLayers, nullptr, "OnRep_ActiveDataLayerNames", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldDataLayers_OnRep_ActiveDataLayerNames_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWorldDataLayers_OnRep_ActiveDataLayerNames_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AWorldDataLayers_OnRep_ActiveDataLayerNames()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWorldDataLayers_OnRep_ActiveDataLayerNames_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWorldDataLayers::execOnRep_ActiveDataLayerNames)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_ActiveDataLayerNames();
	P_NATIVE_END;
}
// End Class AWorldDataLayers Function OnRep_ActiveDataLayerNames

// Begin Class AWorldDataLayers Function OnRep_EffectiveActiveDataLayerNames
struct Z_Construct_UFunction_AWorldDataLayers_OnRep_EffectiveActiveDataLayerNames_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/WorldDataLayers.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWorldDataLayers_OnRep_EffectiveActiveDataLayerNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWorldDataLayers, nullptr, "OnRep_EffectiveActiveDataLayerNames", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldDataLayers_OnRep_EffectiveActiveDataLayerNames_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWorldDataLayers_OnRep_EffectiveActiveDataLayerNames_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AWorldDataLayers_OnRep_EffectiveActiveDataLayerNames()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWorldDataLayers_OnRep_EffectiveActiveDataLayerNames_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWorldDataLayers::execOnRep_EffectiveActiveDataLayerNames)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_EffectiveActiveDataLayerNames();
	P_NATIVE_END;
}
// End Class AWorldDataLayers Function OnRep_EffectiveActiveDataLayerNames

// Begin Class AWorldDataLayers Function OnRep_EffectiveLoadedDataLayerNames
struct Z_Construct_UFunction_AWorldDataLayers_OnRep_EffectiveLoadedDataLayerNames_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/WorldDataLayers.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWorldDataLayers_OnRep_EffectiveLoadedDataLayerNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWorldDataLayers, nullptr, "OnRep_EffectiveLoadedDataLayerNames", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldDataLayers_OnRep_EffectiveLoadedDataLayerNames_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWorldDataLayers_OnRep_EffectiveLoadedDataLayerNames_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AWorldDataLayers_OnRep_EffectiveLoadedDataLayerNames()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWorldDataLayers_OnRep_EffectiveLoadedDataLayerNames_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWorldDataLayers::execOnRep_EffectiveLoadedDataLayerNames)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_EffectiveLoadedDataLayerNames();
	P_NATIVE_END;
}
// End Class AWorldDataLayers Function OnRep_EffectiveLoadedDataLayerNames

// Begin Class AWorldDataLayers Function OnRep_LoadedDataLayerNames
struct Z_Construct_UFunction_AWorldDataLayers_OnRep_LoadedDataLayerNames_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/WorldDataLayers.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWorldDataLayers_OnRep_LoadedDataLayerNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWorldDataLayers, nullptr, "OnRep_LoadedDataLayerNames", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldDataLayers_OnRep_LoadedDataLayerNames_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWorldDataLayers_OnRep_LoadedDataLayerNames_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AWorldDataLayers_OnRep_LoadedDataLayerNames()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWorldDataLayers_OnRep_LoadedDataLayerNames_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWorldDataLayers::execOnRep_LoadedDataLayerNames)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_LoadedDataLayerNames();
	P_NATIVE_END;
}
// End Class AWorldDataLayers Function OnRep_LoadedDataLayerNames

// Begin Class AWorldDataLayers
void AWorldDataLayers::StaticRegisterNativesAWorldDataLayers()
{
	UClass* Class = AWorldDataLayers::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnDataLayerRuntimeStateChanged", &AWorldDataLayers::execOnDataLayerRuntimeStateChanged },
		{ "OnRep_ActiveDataLayerNames", &AWorldDataLayers::execOnRep_ActiveDataLayerNames },
		{ "OnRep_EffectiveActiveDataLayerNames", &AWorldDataLayers::execOnRep_EffectiveActiveDataLayerNames },
		{ "OnRep_EffectiveLoadedDataLayerNames", &AWorldDataLayers::execOnRep_EffectiveLoadedDataLayerNames },
		{ "OnRep_LoadedDataLayerNames", &AWorldDataLayers::execOnRep_LoadedDataLayerNames },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWorldDataLayers);
UClass* Z_Construct_UClass_AWorldDataLayers_NoRegister()
{
	return AWorldDataLayers::StaticClass();
}
struct Z_Construct_UClass_AWorldDataLayers_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Actor containing data layers instances within a world.\n */" },
		{ "HideCategories", "Actor HLOD Cooking Transform Advanced Display Events Object Physics Attachment Info Input Blueprint Layers Tags Replication Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "WorldPartition/DataLayer/WorldDataLayers.h" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/WorldDataLayers.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "Actor containing data layers instances within a world." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseExternalPackageDataLayerInstances_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/WorldDataLayers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowRuntimeDataLayerEditing_MetaData[] = {
		{ "Comment", "// True when Runtime Data Layer editing is allowed.\n" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/WorldDataLayers.h" },
		{ "ToolTip", "True when Runtime Data Layer editing is allowed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentDataLayers_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/WorldDataLayers.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootExternalDataLayerInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/WorldDataLayers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataLayerInstances_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/WorldDataLayers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExternalPackageDataLayerInstances_MetaData[] = {
		{ "Comment", "/** Data layer instances stored in their external package (only used when UseExternalPackageDataLayerInstances is True) */" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/WorldDataLayers.h" },
		{ "ToolTip", "Data layer instances stored in their external package (only used when UseExternalPackageDataLayerInstances is True)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoadedExternalPackageDataLayerInstances_MetaData[] = {
		{ "Comment", "/** Temporary array containing data layer instances manually loaded from their external packages */" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/WorldDataLayers.h" },
		{ "ToolTip", "Temporary array containing data layer instances manually loaded from their external packages" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransientDataLayerInstances_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/WorldDataLayers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeprecatedDataLayerNameToDataLayerInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/WorldDataLayers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldDataLayers_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Convert Data layers to DataLayerInstances and DataLayerAssets using DataLayerToAsset CommandLet and use DataLayerInstances instead." },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/WorldDataLayers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RepActiveDataLayerNames_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/WorldDataLayers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RepLoadedDataLayerNames_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/WorldDataLayers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RepEffectiveActiveDataLayerNames_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/WorldDataLayers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RepEffectiveLoadedDataLayerNames_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/WorldDataLayers.h" },
	};
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static void NewProp_bUseExternalPackageDataLayerInstances_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseExternalPackageDataLayerInstances;
	static void NewProp_bAllowRuntimeDataLayerEditing_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowRuntimeDataLayerEditing;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentDataLayers;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RootExternalDataLayerInstance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DataLayerInstances_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_DataLayerInstances;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ExternalPackageDataLayerInstances_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_ExternalPackageDataLayerInstances;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LoadedExternalPackageDataLayerInstances_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LoadedExternalPackageDataLayerInstances;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TransientDataLayerInstances_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TransientDataLayerInstances;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_DeprecatedDataLayerNameToDataLayerInstance_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DeprecatedDataLayerNameToDataLayerInstance_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_DeprecatedDataLayerNameToDataLayerInstance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldDataLayers_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_WorldDataLayers;
	static const UECodeGen_Private::FNamePropertyParams NewProp_RepActiveDataLayerNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RepActiveDataLayerNames;
	static const UECodeGen_Private::FNamePropertyParams NewProp_RepLoadedDataLayerNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RepLoadedDataLayerNames;
	static const UECodeGen_Private::FNamePropertyParams NewProp_RepEffectiveActiveDataLayerNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RepEffectiveActiveDataLayerNames;
	static const UECodeGen_Private::FNamePropertyParams NewProp_RepEffectiveLoadedDataLayerNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RepEffectiveLoadedDataLayerNames;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AWorldDataLayers_OnDataLayerRuntimeStateChanged, "OnDataLayerRuntimeStateChanged" }, // 551987015
		{ &Z_Construct_UFunction_AWorldDataLayers_OnRep_ActiveDataLayerNames, "OnRep_ActiveDataLayerNames" }, // 960500080
		{ &Z_Construct_UFunction_AWorldDataLayers_OnRep_EffectiveActiveDataLayerNames, "OnRep_EffectiveActiveDataLayerNames" }, // 1554739423
		{ &Z_Construct_UFunction_AWorldDataLayers_OnRep_EffectiveLoadedDataLayerNames, "OnRep_EffectiveLoadedDataLayerNames" }, // 2844846916
		{ &Z_Construct_UFunction_AWorldDataLayers_OnRep_LoadedDataLayerNames, "OnRep_LoadedDataLayerNames" }, // 2927027422
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWorldDataLayers>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
void Z_Construct_UClass_AWorldDataLayers_Statics::NewProp_bUseExternalPackageDataLayerInstances_SetBit(void* Obj)
{
	((AWorldDataLayers*)Obj)->bUseExternalPackageDataLayerInstances = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWorldDataLayers_Statics::NewProp_bUseExternalPackageDataLayerInstances = { "bUseExternalPackageDataLayerInstances", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AWorldDataLayers), &Z_Construct_UClass_AWorldDataLayers_Statics::NewProp_bUseExternalPackageDataLayerInstances_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseExternalPackageDataLayerInstances_MetaData), NewProp_bUseExternalPackageDataLayerInstances_MetaData) };
void Z_Construct_UClass_AWorldDataLayers_Statics::NewProp_bAllowRuntimeDataLayerEditing_SetBit(void* Obj)
{
	((AWorldDataLayers*)Obj)->bAllowRuntimeDataLayerEditing = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWorldDataLayers_Statics::NewProp_bAllowRuntimeDataLayerEditing = { "bAllowRuntimeDataLayerEditing", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AWorldDataLayers), &Z_Construct_UClass_AWorldDataLayers_Statics::NewProp_bAllowRuntimeDataLayerEditing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowRuntimeDataLayerEditing_MetaData), NewProp_bAllowRuntimeDataLayerEditing_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWorldDataLayers_Statics::NewProp_CurrentDataLayers = { "CurrentDataLayers", nullptr, (EPropertyFlags)0x0040000800002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWorldDataLayers, CurrentDataLayers), Z_Construct_UScriptStruct_FActorPlacementDataLayers, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentDataLayers_MetaData), NewProp_CurrentDataLayers_MetaData) }; // 3393113887
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWorldDataLayers_Statics::NewProp_RootExternalDataLayerInstance = { "RootExternalDataLayerInstance", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWorldDataLayers, RootExternalDataLayerInstance), Z_Construct_UClass_UExternalDataLayerInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootExternalDataLayerInstance_MetaData), NewProp_RootExternalDataLayerInstance_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWorldDataLayers_Statics::NewProp_DataLayerInstances_ElementProp = { "DataLayerInstances", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UDataLayerInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_AWorldDataLayers_Statics::NewProp_DataLayerInstances = { "DataLayerInstances", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWorldDataLayers, DataLayerInstances), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataLayerInstances_MetaData), NewProp_DataLayerInstances_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWorldDataLayers_Statics::NewProp_ExternalPackageDataLayerInstances_ElementProp = { "ExternalPackageDataLayerInstances", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UDataLayerInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_AWorldDataLayers_Statics::NewProp_ExternalPackageDataLayerInstances = { "ExternalPackageDataLayerInstances", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWorldDataLayers, ExternalPackageDataLayerInstances), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExternalPackageDataLayerInstances_MetaData), NewProp_ExternalPackageDataLayerInstances_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWorldDataLayers_Statics::NewProp_LoadedExternalPackageDataLayerInstances_Inner = { "LoadedExternalPackageDataLayerInstances", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UDataLayerInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AWorldDataLayers_Statics::NewProp_LoadedExternalPackageDataLayerInstances = { "LoadedExternalPackageDataLayerInstances", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWorldDataLayers, LoadedExternalPackageDataLayerInstances), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoadedExternalPackageDataLayerInstances_MetaData), NewProp_LoadedExternalPackageDataLayerInstances_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWorldDataLayers_Statics::NewProp_TransientDataLayerInstances_Inner = { "TransientDataLayerInstances", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UDataLayerInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AWorldDataLayers_Statics::NewProp_TransientDataLayerInstances = { "TransientDataLayerInstances", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWorldDataLayers, TransientDataLayerInstances), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransientDataLayerInstances_MetaData), NewProp_TransientDataLayerInstances_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_AWorldDataLayers_Statics::NewProp_DeprecatedDataLayerNameToDataLayerInstance_ValueProp = { "DeprecatedDataLayerNameToDataLayerInstance", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UDataLayerInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AWorldDataLayers_Statics::NewProp_DeprecatedDataLayerNameToDataLayerInstance_Key_KeyProp = { "DeprecatedDataLayerNameToDataLayerInstance_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AWorldDataLayers_Statics::NewProp_DeprecatedDataLayerNameToDataLayerInstance = { "DeprecatedDataLayerNameToDataLayerInstance", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWorldDataLayers, DeprecatedDataLayerNameToDataLayerInstance), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeprecatedDataLayerNameToDataLayerInstance_MetaData), NewProp_DeprecatedDataLayerNameToDataLayerInstance_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWorldDataLayers_Statics::NewProp_WorldDataLayers_ElementProp = { "WorldDataLayers", nullptr, (EPropertyFlags)0x0104000020000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UDEPRECATED_DataLayer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_AWorldDataLayers_Statics::NewProp_WorldDataLayers = { "WorldDataLayers", nullptr, (EPropertyFlags)0x0144000020000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWorldDataLayers, WorldDataLayers_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldDataLayers_MetaData), NewProp_WorldDataLayers_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AWorldDataLayers_Statics::NewProp_RepActiveDataLayerNames_Inner = { "RepActiveDataLayerNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AWorldDataLayers_Statics::NewProp_RepActiveDataLayerNames = { "RepActiveDataLayerNames", "OnRep_ActiveDataLayerNames", (EPropertyFlags)0x0040000100002020, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWorldDataLayers, RepActiveDataLayerNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RepActiveDataLayerNames_MetaData), NewProp_RepActiveDataLayerNames_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AWorldDataLayers_Statics::NewProp_RepLoadedDataLayerNames_Inner = { "RepLoadedDataLayerNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AWorldDataLayers_Statics::NewProp_RepLoadedDataLayerNames = { "RepLoadedDataLayerNames", "OnRep_LoadedDataLayerNames", (EPropertyFlags)0x0040000100002020, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWorldDataLayers, RepLoadedDataLayerNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RepLoadedDataLayerNames_MetaData), NewProp_RepLoadedDataLayerNames_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AWorldDataLayers_Statics::NewProp_RepEffectiveActiveDataLayerNames_Inner = { "RepEffectiveActiveDataLayerNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AWorldDataLayers_Statics::NewProp_RepEffectiveActiveDataLayerNames = { "RepEffectiveActiveDataLayerNames", "OnRep_EffectiveActiveDataLayerNames", (EPropertyFlags)0x0040000100002020, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWorldDataLayers, RepEffectiveActiveDataLayerNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RepEffectiveActiveDataLayerNames_MetaData), NewProp_RepEffectiveActiveDataLayerNames_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AWorldDataLayers_Statics::NewProp_RepEffectiveLoadedDataLayerNames_Inner = { "RepEffectiveLoadedDataLayerNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AWorldDataLayers_Statics::NewProp_RepEffectiveLoadedDataLayerNames = { "RepEffectiveLoadedDataLayerNames", "OnRep_EffectiveLoadedDataLayerNames", (EPropertyFlags)0x0040000100002020, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWorldDataLayers, RepEffectiveLoadedDataLayerNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RepEffectiveLoadedDataLayerNames_MetaData), NewProp_RepEffectiveLoadedDataLayerNames_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWorldDataLayers_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldDataLayers_Statics::NewProp_bUseExternalPackageDataLayerInstances,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldDataLayers_Statics::NewProp_bAllowRuntimeDataLayerEditing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldDataLayers_Statics::NewProp_CurrentDataLayers,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldDataLayers_Statics::NewProp_RootExternalDataLayerInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldDataLayers_Statics::NewProp_DataLayerInstances_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldDataLayers_Statics::NewProp_DataLayerInstances,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldDataLayers_Statics::NewProp_ExternalPackageDataLayerInstances_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldDataLayers_Statics::NewProp_ExternalPackageDataLayerInstances,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldDataLayers_Statics::NewProp_LoadedExternalPackageDataLayerInstances_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldDataLayers_Statics::NewProp_LoadedExternalPackageDataLayerInstances,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldDataLayers_Statics::NewProp_TransientDataLayerInstances_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldDataLayers_Statics::NewProp_TransientDataLayerInstances,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldDataLayers_Statics::NewProp_DeprecatedDataLayerNameToDataLayerInstance_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldDataLayers_Statics::NewProp_DeprecatedDataLayerNameToDataLayerInstance_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldDataLayers_Statics::NewProp_DeprecatedDataLayerNameToDataLayerInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldDataLayers_Statics::NewProp_WorldDataLayers_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldDataLayers_Statics::NewProp_WorldDataLayers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldDataLayers_Statics::NewProp_RepActiveDataLayerNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldDataLayers_Statics::NewProp_RepActiveDataLayerNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldDataLayers_Statics::NewProp_RepLoadedDataLayerNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldDataLayers_Statics::NewProp_RepLoadedDataLayerNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldDataLayers_Statics::NewProp_RepEffectiveActiveDataLayerNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldDataLayers_Statics::NewProp_RepEffectiveActiveDataLayerNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldDataLayers_Statics::NewProp_RepEffectiveLoadedDataLayerNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldDataLayers_Statics::NewProp_RepEffectiveLoadedDataLayerNames,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWorldDataLayers_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AWorldDataLayers_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AInfo,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWorldDataLayers_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AWorldDataLayers_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UDataLayerInstanceProvider_NoRegister, (int32)VTABLE_OFFSET(AWorldDataLayers, IDataLayerInstanceProvider), false },  // 2577983382
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWorldDataLayers_Statics::ClassParams = {
	&AWorldDataLayers::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AWorldDataLayers_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AWorldDataLayers_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x008802A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWorldDataLayers_Statics::Class_MetaDataParams), Z_Construct_UClass_AWorldDataLayers_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AWorldDataLayers()
{
	if (!Z_Registration_Info_UClass_AWorldDataLayers.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWorldDataLayers.OuterSingleton, Z_Construct_UClass_AWorldDataLayers_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWorldDataLayers.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<AWorldDataLayers>()
{
	return AWorldDataLayers::StaticClass();
}
void AWorldDataLayers::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_RepActiveDataLayerNames(TEXT("RepActiveDataLayerNames"));
	static const FName Name_RepLoadedDataLayerNames(TEXT("RepLoadedDataLayerNames"));
	static const FName Name_RepEffectiveActiveDataLayerNames(TEXT("RepEffectiveActiveDataLayerNames"));
	static const FName Name_RepEffectiveLoadedDataLayerNames(TEXT("RepEffectiveLoadedDataLayerNames"));
	const bool bIsValid = true
		&& Name_RepActiveDataLayerNames == ClassReps[(int32)ENetFields_Private::RepActiveDataLayerNames].Property->GetFName()
		&& Name_RepLoadedDataLayerNames == ClassReps[(int32)ENetFields_Private::RepLoadedDataLayerNames].Property->GetFName()
		&& Name_RepEffectiveActiveDataLayerNames == ClassReps[(int32)ENetFields_Private::RepEffectiveActiveDataLayerNames].Property->GetFName()
		&& Name_RepEffectiveLoadedDataLayerNames == ClassReps[(int32)ENetFields_Private::RepEffectiveLoadedDataLayerNames].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AWorldDataLayers"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWorldDataLayers);
AWorldDataLayers::~AWorldDataLayers() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(AWorldDataLayers)
// End Class AWorldDataLayers

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_WorldDataLayers_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FActorPlacementDataLayers::StaticStruct, Z_Construct_UScriptStruct_FActorPlacementDataLayers_Statics::NewStructOps, TEXT("ActorPlacementDataLayers"), &Z_Registration_Info_UScriptStruct_ActorPlacementDataLayers, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FActorPlacementDataLayers), 3393113887U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWorldDataLayers, AWorldDataLayers::StaticClass, TEXT("AWorldDataLayers"), &Z_Registration_Info_UClass_AWorldDataLayers, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWorldDataLayers), 2374689847U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_WorldDataLayers_h_3729110692(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_WorldDataLayers_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_WorldDataLayers_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_WorldDataLayers_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_WorldDataLayers_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
