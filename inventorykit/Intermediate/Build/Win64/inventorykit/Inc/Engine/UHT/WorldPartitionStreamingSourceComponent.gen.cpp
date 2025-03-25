// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Components/WorldPartitionStreamingSourceComponent.h"
#include "Runtime/Engine/Public/WorldPartition/WorldPartitionStreamingSource.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldPartitionStreamingSourceComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UHLODLayer_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionStreamingSourceComponent();
ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionStreamingSourceComponent_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EStreamingSourcePriority();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EStreamingSourceTargetBehavior();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EStreamingSourceTargetState();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FStreamingSourceShape();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UWorldPartitionStreamingSourceComponent Function DisableStreamingSource
struct Z_Construct_UFunction_UWorldPartitionStreamingSourceComponent_DisableStreamingSource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Streaming" },
		{ "Comment", "/** Disable the component */" },
		{ "ModuleRelativePath", "Classes/Components/WorldPartitionStreamingSourceComponent.h" },
		{ "ToolTip", "Disable the component" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWorldPartitionStreamingSourceComponent_DisableStreamingSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWorldPartitionStreamingSourceComponent, nullptr, "DisableStreamingSource", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldPartitionStreamingSourceComponent_DisableStreamingSource_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWorldPartitionStreamingSourceComponent_DisableStreamingSource_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UWorldPartitionStreamingSourceComponent_DisableStreamingSource()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWorldPartitionStreamingSourceComponent_DisableStreamingSource_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWorldPartitionStreamingSourceComponent::execDisableStreamingSource)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DisableStreamingSource();
	P_NATIVE_END;
}
// End Class UWorldPartitionStreamingSourceComponent Function DisableStreamingSource

// Begin Class UWorldPartitionStreamingSourceComponent Function EnableStreamingSource
struct Z_Construct_UFunction_UWorldPartitionStreamingSourceComponent_EnableStreamingSource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Streaming" },
		{ "Comment", "/** Enable the component */" },
		{ "ModuleRelativePath", "Classes/Components/WorldPartitionStreamingSourceComponent.h" },
		{ "ToolTip", "Enable the component" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWorldPartitionStreamingSourceComponent_EnableStreamingSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWorldPartitionStreamingSourceComponent, nullptr, "EnableStreamingSource", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldPartitionStreamingSourceComponent_EnableStreamingSource_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWorldPartitionStreamingSourceComponent_EnableStreamingSource_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UWorldPartitionStreamingSourceComponent_EnableStreamingSource()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWorldPartitionStreamingSourceComponent_EnableStreamingSource_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWorldPartitionStreamingSourceComponent::execEnableStreamingSource)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EnableStreamingSource();
	P_NATIVE_END;
}
// End Class UWorldPartitionStreamingSourceComponent Function EnableStreamingSource

// Begin Class UWorldPartitionStreamingSourceComponent Function IsStreamingCompleted
struct Z_Construct_UFunction_UWorldPartitionStreamingSourceComponent_IsStreamingCompleted_Statics
{
	struct WorldPartitionStreamingSourceComponent_eventIsStreamingCompleted_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Streaming" },
		{ "Comment", "/** Returns true if streaming is completed for this streaming source component. */" },
		{ "ModuleRelativePath", "Classes/Components/WorldPartitionStreamingSourceComponent.h" },
		{ "ToolTip", "Returns true if streaming is completed for this streaming source component." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UWorldPartitionStreamingSourceComponent_IsStreamingCompleted_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((WorldPartitionStreamingSourceComponent_eventIsStreamingCompleted_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWorldPartitionStreamingSourceComponent_IsStreamingCompleted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WorldPartitionStreamingSourceComponent_eventIsStreamingCompleted_Parms), &Z_Construct_UFunction_UWorldPartitionStreamingSourceComponent_IsStreamingCompleted_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWorldPartitionStreamingSourceComponent_IsStreamingCompleted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldPartitionStreamingSourceComponent_IsStreamingCompleted_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldPartitionStreamingSourceComponent_IsStreamingCompleted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWorldPartitionStreamingSourceComponent_IsStreamingCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWorldPartitionStreamingSourceComponent, nullptr, "IsStreamingCompleted", nullptr, nullptr, Z_Construct_UFunction_UWorldPartitionStreamingSourceComponent_IsStreamingCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldPartitionStreamingSourceComponent_IsStreamingCompleted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWorldPartitionStreamingSourceComponent_IsStreamingCompleted_Statics::WorldPartitionStreamingSourceComponent_eventIsStreamingCompleted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldPartitionStreamingSourceComponent_IsStreamingCompleted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWorldPartitionStreamingSourceComponent_IsStreamingCompleted_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWorldPartitionStreamingSourceComponent_IsStreamingCompleted_Statics::WorldPartitionStreamingSourceComponent_eventIsStreamingCompleted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWorldPartitionStreamingSourceComponent_IsStreamingCompleted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWorldPartitionStreamingSourceComponent_IsStreamingCompleted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWorldPartitionStreamingSourceComponent::execIsStreamingCompleted)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsStreamingCompleted();
	P_NATIVE_END;
}
// End Class UWorldPartitionStreamingSourceComponent Function IsStreamingCompleted

// Begin Class UWorldPartitionStreamingSourceComponent Function IsStreamingSourceEnabled
struct Z_Construct_UFunction_UWorldPartitionStreamingSourceComponent_IsStreamingSourceEnabled_Statics
{
	struct WorldPartitionStreamingSourceComponent_eventIsStreamingSourceEnabled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Streaming" },
		{ "Comment", "/** Returns true if the component is active. */" },
		{ "ModuleRelativePath", "Classes/Components/WorldPartitionStreamingSourceComponent.h" },
		{ "ToolTip", "Returns true if the component is active." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UWorldPartitionStreamingSourceComponent_IsStreamingSourceEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((WorldPartitionStreamingSourceComponent_eventIsStreamingSourceEnabled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWorldPartitionStreamingSourceComponent_IsStreamingSourceEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WorldPartitionStreamingSourceComponent_eventIsStreamingSourceEnabled_Parms), &Z_Construct_UFunction_UWorldPartitionStreamingSourceComponent_IsStreamingSourceEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWorldPartitionStreamingSourceComponent_IsStreamingSourceEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldPartitionStreamingSourceComponent_IsStreamingSourceEnabled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldPartitionStreamingSourceComponent_IsStreamingSourceEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWorldPartitionStreamingSourceComponent_IsStreamingSourceEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWorldPartitionStreamingSourceComponent, nullptr, "IsStreamingSourceEnabled", nullptr, nullptr, Z_Construct_UFunction_UWorldPartitionStreamingSourceComponent_IsStreamingSourceEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldPartitionStreamingSourceComponent_IsStreamingSourceEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWorldPartitionStreamingSourceComponent_IsStreamingSourceEnabled_Statics::WorldPartitionStreamingSourceComponent_eventIsStreamingSourceEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldPartitionStreamingSourceComponent_IsStreamingSourceEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWorldPartitionStreamingSourceComponent_IsStreamingSourceEnabled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWorldPartitionStreamingSourceComponent_IsStreamingSourceEnabled_Statics::WorldPartitionStreamingSourceComponent_eventIsStreamingSourceEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWorldPartitionStreamingSourceComponent_IsStreamingSourceEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWorldPartitionStreamingSourceComponent_IsStreamingSourceEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWorldPartitionStreamingSourceComponent::execIsStreamingSourceEnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsStreamingSourceEnabled();
	P_NATIVE_END;
}
// End Class UWorldPartitionStreamingSourceComponent Function IsStreamingSourceEnabled

// Begin Class UWorldPartitionStreamingSourceComponent
void UWorldPartitionStreamingSourceComponent::StaticRegisterNativesUWorldPartitionStreamingSourceComponent()
{
	UClass* Class = UWorldPartitionStreamingSourceComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DisableStreamingSource", &UWorldPartitionStreamingSourceComponent::execDisableStreamingSource },
		{ "EnableStreamingSource", &UWorldPartitionStreamingSourceComponent::execEnableStreamingSource },
		{ "IsStreamingCompleted", &UWorldPartitionStreamingSourceComponent::execIsStreamingCompleted },
		{ "IsStreamingSourceEnabled", &UWorldPartitionStreamingSourceComponent::execIsStreamingSourceEnabled },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWorldPartitionStreamingSourceComponent);
UClass* Z_Construct_UClass_UWorldPartitionStreamingSourceComponent_NoRegister()
{
	return UWorldPartitionStreamingSourceComponent::StaticClass();
}
struct Z_Construct_UClass_UWorldPartitionStreamingSourceComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "HideCategories", "Tags Sockets ComponentTick ComponentReplication Activation Cooking Events AssetUserData Collision Navigation" },
		{ "IncludePath", "Components/WorldPartitionStreamingSourceComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/WorldPartitionStreamingSourceComponent.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultVisualizerLoadingRange_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/** Value used by debug visualizer when grid loading range is chosen. */" },
		{ "ModuleRelativePath", "Classes/Components/WorldPartitionStreamingSourceComponent.h" },
		{ "ToolTip", "Value used by debug visualizer when grid loading range is chosen." },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetBehavior_MetaData[] = {
		{ "Category", "Streaming" },
		{ "Comment", "/** When TargetGrids or TargetHLODLayers are specified, this indicates the behavior. */" },
		{ "ModuleRelativePath", "Classes/Components/WorldPartitionStreamingSourceComponent.h" },
		{ "ToolTip", "When TargetGrids or TargetHLODLayers are specified, this indicates the behavior." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetGrids_MetaData[] = {
		{ "Category", "Streaming" },
		{ "Comment", "/** Optional target grids affected by streaming source. */" },
		{ "ModuleRelativePath", "Classes/Components/WorldPartitionStreamingSourceComponent.h" },
		{ "ToolTip", "Optional target grids affected by streaming source." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetGrid_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Use TargetGrids instead." },
		{ "ModuleRelativePath", "Classes/Components/WorldPartitionStreamingSourceComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugColor_MetaData[] = {
		{ "Category", "Streaming" },
		{ "Comment", "/** Color used for debugging. */" },
		{ "ModuleRelativePath", "Classes/Components/WorldPartitionStreamingSourceComponent.h" },
		{ "ToolTip", "Color used for debugging." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetHLODLayers_MetaData[] = {
		{ "Comment", "/** Optional target HLODLayers affected by the streaming source. */" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Use TargetGrids instead." },
		{ "ModuleRelativePath", "Classes/Components/WorldPartitionStreamingSourceComponent.h" },
		{ "ToolTip", "Optional target HLODLayers affected by the streaming source." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetHLODLayer_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Use TargetHLODLayers instead." },
		{ "ModuleRelativePath", "Classes/Components/WorldPartitionStreamingSourceComponent.h" },
		{ "NativeConstTemplateArg", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Shapes_MetaData[] = {
		{ "Category", "Streaming" },
		{ "Comment", "/** Optional aggregated shape list used to build a custom shape for the streaming source. When empty, fallbacks sphere shape with a radius equal to grid's loading range. */" },
		{ "ModuleRelativePath", "Classes/Components/WorldPartitionStreamingSourceComponent.h" },
		{ "ToolTip", "Optional aggregated shape list used to build a custom shape for the streaming source. When empty, fallbacks sphere shape with a radius equal to grid's loading range." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[] = {
		{ "Category", "Streaming" },
		{ "ModuleRelativePath", "Classes/Components/WorldPartitionStreamingSourceComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStreamingSourceEnabled_MetaData[] = {
		{ "Category", "Streaming" },
		{ "Comment", "/** Whether this component is enabled or not */" },
		{ "ModuleRelativePath", "Classes/Components/WorldPartitionStreamingSourceComponent.h" },
		{ "ToolTip", "Whether this component is enabled or not" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetState_MetaData[] = {
		{ "Category", "Streaming" },
		{ "ModuleRelativePath", "Classes/Components/WorldPartitionStreamingSourceComponent.h" },
	};
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultVisualizerLoadingRange;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_TargetBehavior_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TargetBehavior;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TargetGrids_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TargetGrids;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TargetGrid;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DebugColor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetHLODLayers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TargetHLODLayers;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetHLODLayer;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Shapes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Shapes;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Priority_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Priority;
	static void NewProp_bStreamingSourceEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStreamingSourceEnabled;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TargetState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TargetState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWorldPartitionStreamingSourceComponent_DisableStreamingSource, "DisableStreamingSource" }, // 1310934330
		{ &Z_Construct_UFunction_UWorldPartitionStreamingSourceComponent_EnableStreamingSource, "EnableStreamingSource" }, // 2097801873
		{ &Z_Construct_UFunction_UWorldPartitionStreamingSourceComponent_IsStreamingCompleted, "IsStreamingCompleted" }, // 172843646
		{ &Z_Construct_UFunction_UWorldPartitionStreamingSourceComponent_IsStreamingSourceEnabled, "IsStreamingSourceEnabled" }, // 764613656
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWorldPartitionStreamingSourceComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWorldPartitionStreamingSourceComponent_Statics::NewProp_DefaultVisualizerLoadingRange = { "DefaultVisualizerLoadingRange", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldPartitionStreamingSourceComponent, DefaultVisualizerLoadingRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultVisualizerLoadingRange_MetaData), NewProp_DefaultVisualizerLoadingRange_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWorldPartitionStreamingSourceComponent_Statics::NewProp_TargetBehavior_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UWorldPartitionStreamingSourceComponent_Statics::NewProp_TargetBehavior = { "TargetBehavior", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldPartitionStreamingSourceComponent, TargetBehavior), Z_Construct_UEnum_Engine_EStreamingSourceTargetBehavior, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetBehavior_MetaData), NewProp_TargetBehavior_MetaData) }; // 3925404505
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UWorldPartitionStreamingSourceComponent_Statics::NewProp_TargetGrids_Inner = { "TargetGrids", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWorldPartitionStreamingSourceComponent_Statics::NewProp_TargetGrids = { "TargetGrids", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldPartitionStreamingSourceComponent, TargetGrids), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetGrids_MetaData), NewProp_TargetGrids_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UWorldPartitionStreamingSourceComponent_Statics::NewProp_TargetGrid = { "TargetGrid", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldPartitionStreamingSourceComponent, TargetGrid_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetGrid_MetaData), NewProp_TargetGrid_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWorldPartitionStreamingSourceComponent_Statics::NewProp_DebugColor = { "DebugColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldPartitionStreamingSourceComponent, DebugColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugColor_MetaData), NewProp_DebugColor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWorldPartitionStreamingSourceComponent_Statics::NewProp_TargetHLODLayers_Inner = { "TargetHLODLayers", nullptr, (EPropertyFlags)0x0104000020000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UHLODLayer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWorldPartitionStreamingSourceComponent_Statics::NewProp_TargetHLODLayers = { "TargetHLODLayers", nullptr, (EPropertyFlags)0x0114000020000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldPartitionStreamingSourceComponent, TargetHLODLayers_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetHLODLayers_MetaData), NewProp_TargetHLODLayers_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWorldPartitionStreamingSourceComponent_Statics::NewProp_TargetHLODLayer = { "TargetHLODLayer", nullptr, (EPropertyFlags)0x0114000020000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldPartitionStreamingSourceComponent, TargetHLODLayer_DEPRECATED), Z_Construct_UClass_UHLODLayer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetHLODLayer_MetaData), NewProp_TargetHLODLayer_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWorldPartitionStreamingSourceComponent_Statics::NewProp_Shapes_Inner = { "Shapes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FStreamingSourceShape, METADATA_PARAMS(0, nullptr) }; // 2223099804
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWorldPartitionStreamingSourceComponent_Statics::NewProp_Shapes = { "Shapes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldPartitionStreamingSourceComponent, Shapes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Shapes_MetaData), NewProp_Shapes_MetaData) }; // 2223099804
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWorldPartitionStreamingSourceComponent_Statics::NewProp_Priority_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UWorldPartitionStreamingSourceComponent_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldPartitionStreamingSourceComponent, Priority), Z_Construct_UEnum_Engine_EStreamingSourcePriority, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Priority_MetaData), NewProp_Priority_MetaData) }; // 3463526699
void Z_Construct_UClass_UWorldPartitionStreamingSourceComponent_Statics::NewProp_bStreamingSourceEnabled_SetBit(void* Obj)
{
	((UWorldPartitionStreamingSourceComponent*)Obj)->bStreamingSourceEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWorldPartitionStreamingSourceComponent_Statics::NewProp_bStreamingSourceEnabled = { "bStreamingSourceEnabled", nullptr, (EPropertyFlags)0x0040000200000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UWorldPartitionStreamingSourceComponent), &Z_Construct_UClass_UWorldPartitionStreamingSourceComponent_Statics::NewProp_bStreamingSourceEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStreamingSourceEnabled_MetaData), NewProp_bStreamingSourceEnabled_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWorldPartitionStreamingSourceComponent_Statics::NewProp_TargetState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UWorldPartitionStreamingSourceComponent_Statics::NewProp_TargetState = { "TargetState", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldPartitionStreamingSourceComponent, TargetState), Z_Construct_UEnum_Engine_EStreamingSourceTargetState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetState_MetaData), NewProp_TargetState_MetaData) }; // 2820626581
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWorldPartitionStreamingSourceComponent_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionStreamingSourceComponent_Statics::NewProp_DefaultVisualizerLoadingRange,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionStreamingSourceComponent_Statics::NewProp_TargetBehavior_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionStreamingSourceComponent_Statics::NewProp_TargetBehavior,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionStreamingSourceComponent_Statics::NewProp_TargetGrids_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionStreamingSourceComponent_Statics::NewProp_TargetGrids,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionStreamingSourceComponent_Statics::NewProp_TargetGrid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionStreamingSourceComponent_Statics::NewProp_DebugColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionStreamingSourceComponent_Statics::NewProp_TargetHLODLayers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionStreamingSourceComponent_Statics::NewProp_TargetHLODLayers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionStreamingSourceComponent_Statics::NewProp_TargetHLODLayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionStreamingSourceComponent_Statics::NewProp_Shapes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionStreamingSourceComponent_Statics::NewProp_Shapes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionStreamingSourceComponent_Statics::NewProp_Priority_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionStreamingSourceComponent_Statics::NewProp_Priority,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionStreamingSourceComponent_Statics::NewProp_bStreamingSourceEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionStreamingSourceComponent_Statics::NewProp_TargetState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionStreamingSourceComponent_Statics::NewProp_TargetState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionStreamingSourceComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWorldPartitionStreamingSourceComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionStreamingSourceComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWorldPartitionStreamingSourceComponent_Statics::ClassParams = {
	&UWorldPartitionStreamingSourceComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UWorldPartitionStreamingSourceComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionStreamingSourceComponent_Statics::PropPointers),
	0,
	0x00A800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionStreamingSourceComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UWorldPartitionStreamingSourceComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWorldPartitionStreamingSourceComponent()
{
	if (!Z_Registration_Info_UClass_UWorldPartitionStreamingSourceComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWorldPartitionStreamingSourceComponent.OuterSingleton, Z_Construct_UClass_UWorldPartitionStreamingSourceComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWorldPartitionStreamingSourceComponent.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UWorldPartitionStreamingSourceComponent>()
{
	return UWorldPartitionStreamingSourceComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWorldPartitionStreamingSourceComponent);
UWorldPartitionStreamingSourceComponent::~UWorldPartitionStreamingSourceComponent() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UWorldPartitionStreamingSourceComponent)
// End Class UWorldPartitionStreamingSourceComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_WorldPartitionStreamingSourceComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWorldPartitionStreamingSourceComponent, UWorldPartitionStreamingSourceComponent::StaticClass, TEXT("UWorldPartitionStreamingSourceComponent"), &Z_Registration_Info_UClass_UWorldPartitionStreamingSourceComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWorldPartitionStreamingSourceComponent), 3035220389U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_WorldPartitionStreamingSourceComponent_h_3356328538(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_WorldPartitionStreamingSourceComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_WorldPartitionStreamingSourceComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
