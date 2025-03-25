// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h"
#include "Runtime/FieldNotification/Public/FieldNotificationId.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueprintGeneratedClass() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UClassCookedMetaData_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UFunction();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UStruct();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintGeneratedClass();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintGeneratedClass_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDynamicBlueprintBinding_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UInheritableComponentHandler_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USimpleConstructionScript_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTimelineTemplate_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintComponentChangedPropertyInfo();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintDebugData();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBPComponentClassOverride();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDebuggingInfoForSingleFunction();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEventGraphFastCallPair();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNodeToCodeAssociation();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPointerToUberGraphFrame();
FIELDNOTIFICATION_API UScriptStruct* Z_Construct_UScriptStruct_FFieldNotificationId();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FNodeToCodeAssociation
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NodeToCodeAssociation;
class UScriptStruct* FNodeToCodeAssociation::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NodeToCodeAssociation.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NodeToCodeAssociation.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNodeToCodeAssociation, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("NodeToCodeAssociation"));
	}
	return Z_Registration_Info_UScriptStruct_NodeToCodeAssociation.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FNodeToCodeAssociation>()
{
	return FNodeToCodeAssociation::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNodeToCodeAssociation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNodeToCodeAssociation>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNodeToCodeAssociation_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"NodeToCodeAssociation",
	nullptr,
	0,
	sizeof(FNodeToCodeAssociation),
	alignof(FNodeToCodeAssociation),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeToCodeAssociation_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNodeToCodeAssociation_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNodeToCodeAssociation()
{
	if (!Z_Registration_Info_UScriptStruct_NodeToCodeAssociation.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NodeToCodeAssociation.InnerSingleton, Z_Construct_UScriptStruct_FNodeToCodeAssociation_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NodeToCodeAssociation.InnerSingleton;
}
// End ScriptStruct FNodeToCodeAssociation

// Begin ScriptStruct FDebuggingInfoForSingleFunction
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DebuggingInfoForSingleFunction;
class UScriptStruct* FDebuggingInfoForSingleFunction::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DebuggingInfoForSingleFunction.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DebuggingInfoForSingleFunction.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDebuggingInfoForSingleFunction, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("DebuggingInfoForSingleFunction"));
	}
	return Z_Registration_Info_UScriptStruct_DebuggingInfoForSingleFunction.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FDebuggingInfoForSingleFunction>()
{
	return FDebuggingInfoForSingleFunction::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDebuggingInfoForSingleFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDebuggingInfoForSingleFunction>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDebuggingInfoForSingleFunction_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"DebuggingInfoForSingleFunction",
	nullptr,
	0,
	sizeof(FDebuggingInfoForSingleFunction),
	alignof(FDebuggingInfoForSingleFunction),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebuggingInfoForSingleFunction_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDebuggingInfoForSingleFunction_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDebuggingInfoForSingleFunction()
{
	if (!Z_Registration_Info_UScriptStruct_DebuggingInfoForSingleFunction.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DebuggingInfoForSingleFunction.InnerSingleton, Z_Construct_UScriptStruct_FDebuggingInfoForSingleFunction_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DebuggingInfoForSingleFunction.InnerSingleton;
}
// End ScriptStruct FDebuggingInfoForSingleFunction

// Begin ScriptStruct FPointerToUberGraphFrame
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PointerToUberGraphFrame;
class UScriptStruct* FPointerToUberGraphFrame::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PointerToUberGraphFrame.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PointerToUberGraphFrame.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPointerToUberGraphFrame, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("PointerToUberGraphFrame"));
	}
	return Z_Registration_Info_UScriptStruct_PointerToUberGraphFrame.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FPointerToUberGraphFrame>()
{
	return FPointerToUberGraphFrame::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPointerToUberGraphFrame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPointerToUberGraphFrame>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPointerToUberGraphFrame_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"PointerToUberGraphFrame",
	nullptr,
	0,
	sizeof(FPointerToUberGraphFrame),
	alignof(FPointerToUberGraphFrame),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPointerToUberGraphFrame_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPointerToUberGraphFrame_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPointerToUberGraphFrame()
{
	if (!Z_Registration_Info_UScriptStruct_PointerToUberGraphFrame.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PointerToUberGraphFrame.InnerSingleton, Z_Construct_UScriptStruct_FPointerToUberGraphFrame_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PointerToUberGraphFrame.InnerSingleton;
}
// End ScriptStruct FPointerToUberGraphFrame

// Begin ScriptStruct FBlueprintDebugData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BlueprintDebugData;
class UScriptStruct* FBlueprintDebugData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BlueprintDebugData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BlueprintDebugData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlueprintDebugData, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("BlueprintDebugData"));
	}
	return Z_Registration_Info_UScriptStruct_BlueprintDebugData.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBlueprintDebugData>()
{
	return FBlueprintDebugData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FBlueprintDebugData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBlueprintDebugData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBlueprintDebugData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"BlueprintDebugData",
	nullptr,
	0,
	sizeof(FBlueprintDebugData),
	alignof(FBlueprintDebugData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintDebugData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBlueprintDebugData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBlueprintDebugData()
{
	if (!Z_Registration_Info_UScriptStruct_BlueprintDebugData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BlueprintDebugData.InnerSingleton, Z_Construct_UScriptStruct_FBlueprintDebugData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_BlueprintDebugData.InnerSingleton;
}
// End ScriptStruct FBlueprintDebugData

// Begin ScriptStruct FEventGraphFastCallPair
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EventGraphFastCallPair;
class UScriptStruct* FEventGraphFastCallPair::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EventGraphFastCallPair.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EventGraphFastCallPair.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEventGraphFastCallPair, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EventGraphFastCallPair"));
	}
	return Z_Registration_Info_UScriptStruct_EventGraphFastCallPair.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FEventGraphFastCallPair>()
{
	return FEventGraphFastCallPair::StaticStruct();
}
struct Z_Construct_UScriptStruct_FEventGraphFastCallPair_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FunctionToPatch_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventGraphCallOffset_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FunctionToPatch;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EventGraphCallOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEventGraphFastCallPair>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEventGraphFastCallPair_Statics::NewProp_FunctionToPatch = { "FunctionToPatch", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEventGraphFastCallPair, FunctionToPatch), Z_Construct_UClass_UFunction, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FunctionToPatch_MetaData), NewProp_FunctionToPatch_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEventGraphFastCallPair_Statics::NewProp_EventGraphCallOffset = { "EventGraphCallOffset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEventGraphFastCallPair, EventGraphCallOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventGraphCallOffset_MetaData), NewProp_EventGraphCallOffset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEventGraphFastCallPair_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventGraphFastCallPair_Statics::NewProp_FunctionToPatch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventGraphFastCallPair_Statics::NewProp_EventGraphCallOffset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventGraphFastCallPair_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEventGraphFastCallPair_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"EventGraphFastCallPair",
	Z_Construct_UScriptStruct_FEventGraphFastCallPair_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventGraphFastCallPair_Statics::PropPointers),
	sizeof(FEventGraphFastCallPair),
	alignof(FEventGraphFastCallPair),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventGraphFastCallPair_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEventGraphFastCallPair_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEventGraphFastCallPair()
{
	if (!Z_Registration_Info_UScriptStruct_EventGraphFastCallPair.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EventGraphFastCallPair.InnerSingleton, Z_Construct_UScriptStruct_FEventGraphFastCallPair_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_EventGraphFastCallPair.InnerSingleton;
}
// End ScriptStruct FEventGraphFastCallPair

// Begin ScriptStruct FBlueprintComponentChangedPropertyInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BlueprintComponentChangedPropertyInfo;
class UScriptStruct* FBlueprintComponentChangedPropertyInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BlueprintComponentChangedPropertyInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BlueprintComponentChangedPropertyInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlueprintComponentChangedPropertyInfo, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("BlueprintComponentChangedPropertyInfo"));
	}
	return Z_Registration_Info_UScriptStruct_BlueprintComponentChangedPropertyInfo.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBlueprintComponentChangedPropertyInfo>()
{
	return FBlueprintComponentChangedPropertyInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FBlueprintComponentChangedPropertyInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** A single changed Blueprint component property. */" },
		{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
		{ "ToolTip", "A single changed Blueprint component property." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[] = {
		{ "Comment", "/** The name of the changed property. */" },
		{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
		{ "ToolTip", "The name of the changed property." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArrayIndex_MetaData[] = {
		{ "Comment", "/** The array index of the changed property. */" },
		{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
		{ "ToolTip", "The array index of the changed property." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PropertyScope_MetaData[] = {
		{ "Comment", "/** The parent struct (owner) of the changed property. */" },
		{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
		{ "ToolTip", "The parent struct (owner) of the changed property." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ArrayIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PropertyScope;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBlueprintComponentChangedPropertyInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBlueprintComponentChangedPropertyInfo_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBlueprintComponentChangedPropertyInfo, PropertyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PropertyName_MetaData), NewProp_PropertyName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBlueprintComponentChangedPropertyInfo_Statics::NewProp_ArrayIndex = { "ArrayIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBlueprintComponentChangedPropertyInfo, ArrayIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArrayIndex_MetaData), NewProp_ArrayIndex_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FBlueprintComponentChangedPropertyInfo_Statics::NewProp_PropertyScope = { "PropertyScope", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBlueprintComponentChangedPropertyInfo, PropertyScope), Z_Construct_UClass_UStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PropertyScope_MetaData), NewProp_PropertyScope_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBlueprintComponentChangedPropertyInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintComponentChangedPropertyInfo_Statics::NewProp_PropertyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintComponentChangedPropertyInfo_Statics::NewProp_ArrayIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintComponentChangedPropertyInfo_Statics::NewProp_PropertyScope,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintComponentChangedPropertyInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBlueprintComponentChangedPropertyInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"BlueprintComponentChangedPropertyInfo",
	Z_Construct_UScriptStruct_FBlueprintComponentChangedPropertyInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintComponentChangedPropertyInfo_Statics::PropPointers),
	sizeof(FBlueprintComponentChangedPropertyInfo),
	alignof(FBlueprintComponentChangedPropertyInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintComponentChangedPropertyInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBlueprintComponentChangedPropertyInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBlueprintComponentChangedPropertyInfo()
{
	if (!Z_Registration_Info_UScriptStruct_BlueprintComponentChangedPropertyInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BlueprintComponentChangedPropertyInfo.InnerSingleton, Z_Construct_UScriptStruct_FBlueprintComponentChangedPropertyInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_BlueprintComponentChangedPropertyInfo.InnerSingleton;
}
// End ScriptStruct FBlueprintComponentChangedPropertyInfo

// Begin ScriptStruct FBlueprintCookedComponentInstancingData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BlueprintCookedComponentInstancingData;
class UScriptStruct* FBlueprintCookedComponentInstancingData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BlueprintCookedComponentInstancingData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BlueprintCookedComponentInstancingData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("BlueprintCookedComponentInstancingData"));
	}
	return Z_Registration_Info_UScriptStruct_BlueprintCookedComponentInstancingData.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBlueprintCookedComponentInstancingData>()
{
	return FBlueprintCookedComponentInstancingData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Cooked data for a Blueprint component template. */" },
		{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
		{ "ToolTip", "Cooked data for a Blueprint component template." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChangedPropertyList_MetaData[] = {
		{ "Comment", "/** List of property info records with values that differ between the template and the component class CDO. This list will be generated at cook time. */" },
		{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
		{ "ToolTip", "List of property info records with values that differ between the template and the component class CDO. This list will be generated at cook time." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasValidCookedData_MetaData[] = {
		{ "Comment", "/** Flag indicating whether or not this contains valid cooked data. Note that an empty changed property list can also be a valid template data context. */" },
		{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
		{ "ToolTip", "Flag indicating whether or not this contains valid cooked data. Note that an empty changed property list can also be a valid template data context." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChangedPropertyList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ChangedPropertyList;
	static void NewProp_bHasValidCookedData_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasValidCookedData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBlueprintCookedComponentInstancingData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData_Statics::NewProp_ChangedPropertyList_Inner = { "ChangedPropertyList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBlueprintComponentChangedPropertyInfo, METADATA_PARAMS(0, nullptr) }; // 316480849
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData_Statics::NewProp_ChangedPropertyList = { "ChangedPropertyList", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBlueprintCookedComponentInstancingData, ChangedPropertyList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChangedPropertyList_MetaData), NewProp_ChangedPropertyList_MetaData) }; // 316480849
void Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData_Statics::NewProp_bHasValidCookedData_SetBit(void* Obj)
{
	((FBlueprintCookedComponentInstancingData*)Obj)->bHasValidCookedData = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData_Statics::NewProp_bHasValidCookedData = { "bHasValidCookedData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FBlueprintCookedComponentInstancingData), &Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData_Statics::NewProp_bHasValidCookedData_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasValidCookedData_MetaData), NewProp_bHasValidCookedData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData_Statics::NewProp_ChangedPropertyList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData_Statics::NewProp_ChangedPropertyList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData_Statics::NewProp_bHasValidCookedData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"BlueprintCookedComponentInstancingData",
	Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData_Statics::PropPointers),
	sizeof(FBlueprintCookedComponentInstancingData),
	alignof(FBlueprintCookedComponentInstancingData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData()
{
	if (!Z_Registration_Info_UScriptStruct_BlueprintCookedComponentInstancingData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BlueprintCookedComponentInstancingData.InnerSingleton, Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_BlueprintCookedComponentInstancingData.InnerSingleton;
}
// End ScriptStruct FBlueprintCookedComponentInstancingData

// Begin ScriptStruct FBPComponentClassOverride
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BPComponentClassOverride;
class UScriptStruct* FBPComponentClassOverride::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BPComponentClassOverride.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BPComponentClassOverride.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBPComponentClassOverride, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("BPComponentClassOverride"));
	}
	return Z_Registration_Info_UScriptStruct_BPComponentClassOverride.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBPComponentClassOverride>()
{
	return FBPComponentClassOverride::StaticStruct();
}
struct Z_Construct_UScriptStruct_FBPComponentClassOverride_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Utility struct to store class overrides for components. */" },
		{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
		{ "ToolTip", "Utility struct to store class overrides for components." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComponentName_MetaData[] = {
		{ "Comment", "/** The component name an override is being specified for. */" },
		{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
		{ "ToolTip", "The component name an override is being specified for." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComponentClass_MetaData[] = {
		{ "Comment", "/** The class to use when constructing the component. */" },
		{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "The class to use when constructing the component." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ComponentName;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ComponentClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBPComponentClassOverride>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBPComponentClassOverride_Statics::NewProp_ComponentName = { "ComponentName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBPComponentClassOverride, ComponentName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComponentName_MetaData), NewProp_ComponentName_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FBPComponentClassOverride_Statics::NewProp_ComponentClass = { "ComponentClass", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBPComponentClassOverride, ComponentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComponentClass_MetaData), NewProp_ComponentClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBPComponentClassOverride_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPComponentClassOverride_Statics::NewProp_ComponentName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPComponentClassOverride_Statics::NewProp_ComponentClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPComponentClassOverride_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBPComponentClassOverride_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"BPComponentClassOverride",
	Z_Construct_UScriptStruct_FBPComponentClassOverride_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPComponentClassOverride_Statics::PropPointers),
	sizeof(FBPComponentClassOverride),
	alignof(FBPComponentClassOverride),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPComponentClassOverride_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBPComponentClassOverride_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBPComponentClassOverride()
{
	if (!Z_Registration_Info_UScriptStruct_BPComponentClassOverride.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BPComponentClassOverride.InnerSingleton, Z_Construct_UScriptStruct_FBPComponentClassOverride_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_BPComponentClassOverride.InnerSingleton;
}
// End ScriptStruct FBPComponentClassOverride

// Begin Class UBlueprintGeneratedClass
void UBlueprintGeneratedClass::StaticRegisterNativesUBlueprintGeneratedClass()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBlueprintGeneratedClass);
UClass* Z_Construct_UClass_UBlueprintGeneratedClass_NoRegister()
{
	return UBlueprintGeneratedClass::StaticClass();
}
struct Z_Construct_UClass_UBlueprintGeneratedClass_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/BlueprintGeneratedClass.h" },
		{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumReplicatedProperties_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasCookedComponentInstancingData_MetaData[] = {
		{ "Comment", "/** Flag used to indicate if this class has data to support the component instancing fast path. */" },
		{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
		{ "ToolTip", "Flag used to indicate if this class has data to support the component instancing fast path." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsSparseClassDataSerializable_MetaData[] = {
		{ "Comment", "/** Used to check if this class has sparse data that can be serialized. This will be false when loading the data if it hasn't already been saved out. */" },
		{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
		{ "ToolTip", "Used to check if this class has sparse data that can be serialized. This will be false when loading the data if it hasn't already been saved out." },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DynamicBindingObjects_MetaData[] = {
		{ "Comment", "/** Array of objects containing information for dynamically binding delegates to functions in this blueprint */" },
		{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
		{ "ToolTip", "Array of objects containing information for dynamically binding delegates to functions in this blueprint" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComponentTemplates_MetaData[] = {
		{ "Comment", "/** Array of component template objects, used by AddComponent function */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
		{ "ToolTip", "Array of component template objects, used by AddComponent function" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Timelines_MetaData[] = {
		{ "Comment", "/** Array of templates for timelines that should be created */" },
		{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
		{ "ToolTip", "Array of templates for timelines that should be created" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComponentClassOverrides_MetaData[] = {
		{ "Comment", "/** Array of blueprint overrides of component classes in parent classes */" },
		{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
		{ "ToolTip", "Array of blueprint overrides of component classes in parent classes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FieldNotifies_MetaData[] = {
		{ "Comment", "/** The name of the properties with FieldNotify */" },
		{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
		{ "ToolTip", "The name of the properties with FieldNotify" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SimpleConstructionScript_MetaData[] = {
		{ "Comment", "/** 'Simple' construction script - graph of components to instance */" },
		{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
		{ "ToolTip", "'Simple' construction script - graph of components to instance" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InheritableComponentHandler_MetaData[] = {
		{ "Comment", "/** Stores data to override (in children classes) components (created by SCS) from parent classes */" },
		{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
		{ "ToolTip", "Stores data to override (in children classes) components (created by SCS) from parent classes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UberGraphFunction_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FastCallPairs_MetaData[] = {
		{ "Comment", "// This is a list of event graph call function nodes that are simple (no argument) thunks into the event graph (typically used for animation delegates, etc...)\n// It is a deprecated list only used for backwards compatibility prior to VER_UE4_SERIALIZE_BLUEPRINT_EVENTGRAPH_FASTCALLS_IN_UFUNCTION.\n" },
		{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
		{ "ToolTip", "This is a list of event graph call function nodes that are simple (no argument) thunks into the event graph (typically used for animation delegates, etc...)\nIt is a deprecated list only used for backwards compatibility prior to VER_UE4_SERIALIZE_BLUEPRINT_EVENTGRAPH_FASTCALLS_IN_UFUNCTION." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverridenArchetypeForCDO_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PropertyGuids_MetaData[] = {
		{ "Comment", "/** Property guid map */" },
		{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
		{ "ToolTip", "Property guid map" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CalledFunctions_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CookedPropertyGuids_MetaData[] = {
		{ "Comment", "/** Property guid map (if any), for use only when this BP is cooked */" },
		{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
		{ "ToolTip", "Property guid map (if any), for use only when this BP is cooked" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CookedComponentInstancingData_MetaData[] = {
		{ "Comment", "// Mapping of changed properties & data to apply when instancing components in a cooked build (one entry per named AddComponent node template for fast lookup at runtime).\n// Note: This is not currently utilized by the editor; it is a runtime optimization for cooked builds only. It assumes that the component class structure does not change.\n" },
		{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
		{ "ToolTip", "Mapping of changed properties & data to apply when instancing components in a cooked build (one entry per named AddComponent node template for fast lookup at runtime).\nNote: This is not currently utilized by the editor; it is a runtime optimization for cooked builds only. It assumes that the component class structure does not change." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedCookedMetaDataPtr_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumReplicatedProperties;
	static void NewProp_bHasCookedComponentInstancingData_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasCookedComponentInstancingData;
#if WITH_EDITORONLY_DATA
	static void NewProp_bIsSparseClassDataSerializable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSparseClassDataSerializable;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DynamicBindingObjects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DynamicBindingObjects;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ComponentTemplates_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ComponentTemplates;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Timelines_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Timelines;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ComponentClassOverrides_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ComponentClassOverrides;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FieldNotifies_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FieldNotifies;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SimpleConstructionScript;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InheritableComponentHandler;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UberGraphFunction;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_FastCallPairs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FastCallPairs;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverridenArchetypeForCDO;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PropertyGuids_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyGuids_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_PropertyGuids;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CalledFunctions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CalledFunctions;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CookedPropertyGuids_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CookedPropertyGuids_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_CookedPropertyGuids;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CookedComponentInstancingData_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CookedComponentInstancingData_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_CookedComponentInstancingData;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedCookedMetaDataPtr;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlueprintGeneratedClass>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_NumReplicatedProperties = { "NumReplicatedProperties", nullptr, (EPropertyFlags)0x0010010000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlueprintGeneratedClass, NumReplicatedProperties), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumReplicatedProperties_MetaData), NewProp_NumReplicatedProperties_MetaData) };
void Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_bHasCookedComponentInstancingData_SetBit(void* Obj)
{
	((UBlueprintGeneratedClass*)Obj)->bHasCookedComponentInstancingData = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_bHasCookedComponentInstancingData = { "bHasCookedComponentInstancingData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UBlueprintGeneratedClass), &Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_bHasCookedComponentInstancingData_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasCookedComponentInstancingData_MetaData), NewProp_bHasCookedComponentInstancingData_MetaData) };
#if WITH_EDITORONLY_DATA
void Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_bIsSparseClassDataSerializable_SetBit(void* Obj)
{
	((UBlueprintGeneratedClass*)Obj)->bIsSparseClassDataSerializable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_bIsSparseClassDataSerializable = { "bIsSparseClassDataSerializable", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UBlueprintGeneratedClass), &Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_bIsSparseClassDataSerializable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsSparseClassDataSerializable_MetaData), NewProp_bIsSparseClassDataSerializable_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_DynamicBindingObjects_Inner = { "DynamicBindingObjects", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UDynamicBlueprintBinding_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_DynamicBindingObjects = { "DynamicBindingObjects", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlueprintGeneratedClass, DynamicBindingObjects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DynamicBindingObjects_MetaData), NewProp_DynamicBindingObjects_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_ComponentTemplates_Inner = { "ComponentTemplates", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_ComponentTemplates = { "ComponentTemplates", nullptr, (EPropertyFlags)0x0114008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlueprintGeneratedClass, ComponentTemplates), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComponentTemplates_MetaData), NewProp_ComponentTemplates_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_Timelines_Inner = { "Timelines", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UTimelineTemplate_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_Timelines = { "Timelines", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlueprintGeneratedClass, Timelines), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Timelines_MetaData), NewProp_Timelines_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_ComponentClassOverrides_Inner = { "ComponentClassOverrides", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBPComponentClassOverride, METADATA_PARAMS(0, nullptr) }; // 1968656929
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_ComponentClassOverrides = { "ComponentClassOverrides", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlueprintGeneratedClass, ComponentClassOverrides), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComponentClassOverrides_MetaData), NewProp_ComponentClassOverrides_MetaData) }; // 1968656929
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_FieldNotifies_Inner = { "FieldNotifies", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FFieldNotificationId, METADATA_PARAMS(0, nullptr) }; // 2941726941
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_FieldNotifies = { "FieldNotifies", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlueprintGeneratedClass, FieldNotifies), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FieldNotifies_MetaData), NewProp_FieldNotifies_MetaData) }; // 2941726941
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_SimpleConstructionScript = { "SimpleConstructionScript", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlueprintGeneratedClass, SimpleConstructionScript), Z_Construct_UClass_USimpleConstructionScript_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SimpleConstructionScript_MetaData), NewProp_SimpleConstructionScript_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_InheritableComponentHandler = { "InheritableComponentHandler", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlueprintGeneratedClass, InheritableComponentHandler), Z_Construct_UClass_UInheritableComponentHandler_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InheritableComponentHandler_MetaData), NewProp_InheritableComponentHandler_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_UberGraphFunction = { "UberGraphFunction", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlueprintGeneratedClass, UberGraphFunction), Z_Construct_UClass_UFunction, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UberGraphFunction_MetaData), NewProp_UberGraphFunction_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_FastCallPairs_Inner = { "FastCallPairs", nullptr, (EPropertyFlags)0x0000000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FEventGraphFastCallPair, METADATA_PARAMS(0, nullptr) }; // 669433380
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_FastCallPairs = { "FastCallPairs", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlueprintGeneratedClass, FastCallPairs_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FastCallPairs_MetaData), NewProp_FastCallPairs_MetaData) }; // 669433380
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_OverridenArchetypeForCDO = { "OverridenArchetypeForCDO", nullptr, (EPropertyFlags)0x0114000800002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlueprintGeneratedClass, OverridenArchetypeForCDO), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverridenArchetypeForCDO_MetaData), NewProp_OverridenArchetypeForCDO_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_PropertyGuids_ValueProp = { "PropertyGuids", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_PropertyGuids_Key_KeyProp = { "PropertyGuids_Key", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_PropertyGuids = { "PropertyGuids", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlueprintGeneratedClass, PropertyGuids), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PropertyGuids_MetaData), NewProp_PropertyGuids_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_CalledFunctions_Inner = { "CalledFunctions", nullptr, (EPropertyFlags)0x0104000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UFunction, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_CalledFunctions = { "CalledFunctions", nullptr, (EPropertyFlags)0x0114000800002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlueprintGeneratedClass, CalledFunctions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CalledFunctions_MetaData), NewProp_CalledFunctions_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_CookedPropertyGuids_ValueProp = { "CookedPropertyGuids", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_CookedPropertyGuids_Key_KeyProp = { "CookedPropertyGuids_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_CookedPropertyGuids = { "CookedPropertyGuids", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlueprintGeneratedClass, CookedPropertyGuids), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CookedPropertyGuids_MetaData), NewProp_CookedPropertyGuids_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_CookedComponentInstancingData_ValueProp = { "CookedComponentInstancingData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData, METADATA_PARAMS(0, nullptr) }; // 4287695424
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_CookedComponentInstancingData_Key_KeyProp = { "CookedComponentInstancingData_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_CookedComponentInstancingData = { "CookedComponentInstancingData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlueprintGeneratedClass, CookedComponentInstancingData), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CookedComponentInstancingData_MetaData), NewProp_CookedComponentInstancingData_MetaData) }; // 4287695424
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_CachedCookedMetaDataPtr = { "CachedCookedMetaDataPtr", nullptr, (EPropertyFlags)0x0144000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlueprintGeneratedClass, CachedCookedMetaDataPtr), Z_Construct_UClass_UClassCookedMetaData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedCookedMetaDataPtr_MetaData), NewProp_CachedCookedMetaDataPtr_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBlueprintGeneratedClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_NumReplicatedProperties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_bHasCookedComponentInstancingData,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_bIsSparseClassDataSerializable,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_DynamicBindingObjects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_DynamicBindingObjects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_ComponentTemplates_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_ComponentTemplates,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_Timelines_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_Timelines,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_ComponentClassOverrides_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_ComponentClassOverrides,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_FieldNotifies_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_FieldNotifies,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_SimpleConstructionScript,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_InheritableComponentHandler,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_UberGraphFunction,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_FastCallPairs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_FastCallPairs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_OverridenArchetypeForCDO,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_PropertyGuids_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_PropertyGuids_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_PropertyGuids,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_CalledFunctions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_CalledFunctions,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_CookedPropertyGuids_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_CookedPropertyGuids_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_CookedPropertyGuids,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_CookedComponentInstancingData_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_CookedComponentInstancingData_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_CookedComponentInstancingData,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_CachedCookedMetaDataPtr,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintGeneratedClass_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBlueprintGeneratedClass_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UClass,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintGeneratedClass_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBlueprintGeneratedClass_Statics::ClassParams = {
	&UBlueprintGeneratedClass::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBlueprintGeneratedClass_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintGeneratedClass_Statics::PropPointers),
	0,
	0x008A00A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintGeneratedClass_Statics::Class_MetaDataParams), Z_Construct_UClass_UBlueprintGeneratedClass_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBlueprintGeneratedClass()
{
	if (!Z_Registration_Info_UClass_UBlueprintGeneratedClass.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBlueprintGeneratedClass.OuterSingleton, Z_Construct_UClass_UBlueprintGeneratedClass_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBlueprintGeneratedClass.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UBlueprintGeneratedClass>()
{
	return UBlueprintGeneratedClass::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBlueprintGeneratedClass);
UBlueprintGeneratedClass::~UBlueprintGeneratedClass() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UBlueprintGeneratedClass)
// End Class UBlueprintGeneratedClass

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_BlueprintGeneratedClass_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FNodeToCodeAssociation::StaticStruct, Z_Construct_UScriptStruct_FNodeToCodeAssociation_Statics::NewStructOps, TEXT("NodeToCodeAssociation"), &Z_Registration_Info_UScriptStruct_NodeToCodeAssociation, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNodeToCodeAssociation), 1247160641U) },
		{ FDebuggingInfoForSingleFunction::StaticStruct, Z_Construct_UScriptStruct_FDebuggingInfoForSingleFunction_Statics::NewStructOps, TEXT("DebuggingInfoForSingleFunction"), &Z_Registration_Info_UScriptStruct_DebuggingInfoForSingleFunction, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDebuggingInfoForSingleFunction), 1868472578U) },
		{ FPointerToUberGraphFrame::StaticStruct, Z_Construct_UScriptStruct_FPointerToUberGraphFrame_Statics::NewStructOps, TEXT("PointerToUberGraphFrame"), &Z_Registration_Info_UScriptStruct_PointerToUberGraphFrame, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPointerToUberGraphFrame), 4167830541U) },
		{ FBlueprintDebugData::StaticStruct, Z_Construct_UScriptStruct_FBlueprintDebugData_Statics::NewStructOps, TEXT("BlueprintDebugData"), &Z_Registration_Info_UScriptStruct_BlueprintDebugData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBlueprintDebugData), 1218200549U) },
		{ FEventGraphFastCallPair::StaticStruct, Z_Construct_UScriptStruct_FEventGraphFastCallPair_Statics::NewStructOps, TEXT("EventGraphFastCallPair"), &Z_Registration_Info_UScriptStruct_EventGraphFastCallPair, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEventGraphFastCallPair), 669433380U) },
		{ FBlueprintComponentChangedPropertyInfo::StaticStruct, Z_Construct_UScriptStruct_FBlueprintComponentChangedPropertyInfo_Statics::NewStructOps, TEXT("BlueprintComponentChangedPropertyInfo"), &Z_Registration_Info_UScriptStruct_BlueprintComponentChangedPropertyInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBlueprintComponentChangedPropertyInfo), 316480849U) },
		{ FBlueprintCookedComponentInstancingData::StaticStruct, Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData_Statics::NewStructOps, TEXT("BlueprintCookedComponentInstancingData"), &Z_Registration_Info_UScriptStruct_BlueprintCookedComponentInstancingData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBlueprintCookedComponentInstancingData), 4287695424U) },
		{ FBPComponentClassOverride::StaticStruct, Z_Construct_UScriptStruct_FBPComponentClassOverride_Statics::NewStructOps, TEXT("BPComponentClassOverride"), &Z_Registration_Info_UScriptStruct_BPComponentClassOverride, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBPComponentClassOverride), 1968656929U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBlueprintGeneratedClass, UBlueprintGeneratedClass::StaticClass, TEXT("UBlueprintGeneratedClass"), &Z_Registration_Info_UClass_UBlueprintGeneratedClass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlueprintGeneratedClass), 2560370551U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_BlueprintGeneratedClass_h_445760527(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_BlueprintGeneratedClass_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_BlueprintGeneratedClass_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_BlueprintGeneratedClass_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_BlueprintGeneratedClass_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
