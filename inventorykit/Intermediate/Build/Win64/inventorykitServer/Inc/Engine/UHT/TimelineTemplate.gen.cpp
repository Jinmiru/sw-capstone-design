// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/TimelineTemplate.h"
#include "Runtime/Engine/Classes/Engine/Blueprint.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTimelineTemplate() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCurveLinearColor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCurveVector_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTimelineTemplate();
ENGINE_API UClass* Z_Construct_UClass_UTimelineTemplate_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETickingGroup();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETimelineLengthMode();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBPVariableMetaDataEntry();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTTEventTrack();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTTFloatTrack();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTTLinearColorTrack();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTTPropertyTrack();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTTTrackBase();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTTTrackId();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTTVectorTrack();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FTTTrackBase
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TTTrackBase;
class UScriptStruct* FTTTrackBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TTTrackBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TTTrackBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTTTrackBase, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("TTTrackBase"));
	}
	return Z_Registration_Info_UScriptStruct_TTTrackBase.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FTTTrackBase>()
{
	return FTTTrackBase::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTTTrackBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrackName_MetaData[] = {
		{ "Comment", "/** Name of this track */" },
		{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
		{ "ToolTip", "Name of this track" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsExternalCurve_MetaData[] = {
		{ "Comment", "/** Flag to identify internal/external curve*/" },
		{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
		{ "ToolTip", "Flag to identify internal/external curve" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsExpanded_MetaData[] = {
		{ "Comment", "/** Whether or not this track is expanded in the UI. */" },
		{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
		{ "ToolTip", "Whether or not this track is expanded in the UI." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsCurveViewSynchronized_MetaData[] = {
		{ "Comment", "/** Whether or not this track has its curve's view synchronized with the other curve views. */" },
		{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
		{ "ToolTip", "Whether or not this track has its curve's view synchronized with the other curve views." },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_TrackName;
	static void NewProp_bIsExternalCurve_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsExternalCurve;
#if WITH_EDITORONLY_DATA
	static void NewProp_bIsExpanded_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsExpanded;
	static void NewProp_bIsCurveViewSynchronized_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCurveViewSynchronized;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTTTrackBase>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTTTrackBase_Statics::NewProp_TrackName = { "TrackName", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTTTrackBase, TrackName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrackName_MetaData), NewProp_TrackName_MetaData) };
void Z_Construct_UScriptStruct_FTTTrackBase_Statics::NewProp_bIsExternalCurve_SetBit(void* Obj)
{
	((FTTTrackBase*)Obj)->bIsExternalCurve = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTTTrackBase_Statics::NewProp_bIsExternalCurve = { "bIsExternalCurve", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FTTTrackBase), &Z_Construct_UScriptStruct_FTTTrackBase_Statics::NewProp_bIsExternalCurve_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsExternalCurve_MetaData), NewProp_bIsExternalCurve_MetaData) };
#if WITH_EDITORONLY_DATA
void Z_Construct_UScriptStruct_FTTTrackBase_Statics::NewProp_bIsExpanded_SetBit(void* Obj)
{
	((FTTTrackBase*)Obj)->bIsExpanded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTTTrackBase_Statics::NewProp_bIsExpanded = { "bIsExpanded", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FTTTrackBase), &Z_Construct_UScriptStruct_FTTTrackBase_Statics::NewProp_bIsExpanded_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsExpanded_MetaData), NewProp_bIsExpanded_MetaData) };
void Z_Construct_UScriptStruct_FTTTrackBase_Statics::NewProp_bIsCurveViewSynchronized_SetBit(void* Obj)
{
	((FTTTrackBase*)Obj)->bIsCurveViewSynchronized = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTTTrackBase_Statics::NewProp_bIsCurveViewSynchronized = { "bIsCurveViewSynchronized", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FTTTrackBase), &Z_Construct_UScriptStruct_FTTTrackBase_Statics::NewProp_bIsCurveViewSynchronized_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsCurveViewSynchronized_MetaData), NewProp_bIsCurveViewSynchronized_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTTTrackBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTTTrackBase_Statics::NewProp_TrackName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTTTrackBase_Statics::NewProp_bIsExternalCurve,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTTTrackBase_Statics::NewProp_bIsExpanded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTTTrackBase_Statics::NewProp_bIsCurveViewSynchronized,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTTTrackBase_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTTTrackBase_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"TTTrackBase",
	Z_Construct_UScriptStruct_FTTTrackBase_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTTTrackBase_Statics::PropPointers),
	sizeof(FTTTrackBase),
	alignof(FTTTrackBase),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTTTrackBase_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTTTrackBase_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTTTrackBase()
{
	if (!Z_Registration_Info_UScriptStruct_TTTrackBase.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TTTrackBase.InnerSingleton, Z_Construct_UScriptStruct_FTTTrackBase_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TTTrackBase.InnerSingleton;
}
// End ScriptStruct FTTTrackBase

// Begin ScriptStruct FTTTrackId
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TTTrackId;
class UScriptStruct* FTTTrackId::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TTTrackId.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TTTrackId.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTTTrackId, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("TTTrackId"));
	}
	return Z_Registration_Info_UScriptStruct_TTTrackId.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FTTTrackId>()
{
	return FTTTrackId::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTTTrackId_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrackType_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrackIndex_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_TrackType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TrackIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTTTrackId>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTTTrackId_Statics::NewProp_TrackType = { "TrackType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTTTrackId, TrackType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrackType_MetaData), NewProp_TrackType_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTTTrackId_Statics::NewProp_TrackIndex = { "TrackIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTTTrackId, TrackIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrackIndex_MetaData), NewProp_TrackIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTTTrackId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTTTrackId_Statics::NewProp_TrackType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTTTrackId_Statics::NewProp_TrackIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTTTrackId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTTTrackId_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"TTTrackId",
	Z_Construct_UScriptStruct_FTTTrackId_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTTTrackId_Statics::PropPointers),
	sizeof(FTTTrackId),
	alignof(FTTTrackId),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTTTrackId_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTTTrackId_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTTTrackId()
{
	if (!Z_Registration_Info_UScriptStruct_TTTrackId.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TTTrackId.InnerSingleton, Z_Construct_UScriptStruct_FTTTrackId_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TTTrackId.InnerSingleton;
}
// End ScriptStruct FTTTrackId

// Begin ScriptStruct FTTEventTrack
static_assert(std::is_polymorphic<FTTEventTrack>() == std::is_polymorphic<FTTTrackBase>(), "USTRUCT FTTEventTrack cannot be polymorphic unless super FTTTrackBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TTEventTrack;
class UScriptStruct* FTTEventTrack::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TTEventTrack.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TTEventTrack.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTTEventTrack, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("TTEventTrack"));
	}
	return Z_Registration_Info_UScriptStruct_TTEventTrack.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FTTEventTrack>()
{
	return FTTEventTrack::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTTEventTrack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Structure storing information about one event track */" },
		{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
		{ "ToolTip", "Structure storing information about one event track" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FunctionName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurveKeys_MetaData[] = {
		{ "Comment", "/** Curve object used to store keys */" },
		{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
		{ "ToolTip", "Curve object used to store keys" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_FunctionName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurveKeys;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTTEventTrack>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTTEventTrack_Statics::NewProp_FunctionName = { "FunctionName", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTTEventTrack, FunctionName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FunctionName_MetaData), NewProp_FunctionName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTTEventTrack_Statics::NewProp_CurveKeys = { "CurveKeys", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTTEventTrack, CurveKeys), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurveKeys_MetaData), NewProp_CurveKeys_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTTEventTrack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTTEventTrack_Statics::NewProp_FunctionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTTEventTrack_Statics::NewProp_CurveKeys,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTTEventTrack_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTTEventTrack_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	Z_Construct_UScriptStruct_FTTTrackBase,
	&NewStructOps,
	"TTEventTrack",
	Z_Construct_UScriptStruct_FTTEventTrack_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTTEventTrack_Statics::PropPointers),
	sizeof(FTTEventTrack),
	alignof(FTTEventTrack),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTTEventTrack_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTTEventTrack_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTTEventTrack()
{
	if (!Z_Registration_Info_UScriptStruct_TTEventTrack.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TTEventTrack.InnerSingleton, Z_Construct_UScriptStruct_FTTEventTrack_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TTEventTrack.InnerSingleton;
}
// End ScriptStruct FTTEventTrack

// Begin ScriptStruct FTTPropertyTrack
static_assert(std::is_polymorphic<FTTPropertyTrack>() == std::is_polymorphic<FTTTrackBase>(), "USTRUCT FTTPropertyTrack cannot be polymorphic unless super FTTTrackBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TTPropertyTrack;
class UScriptStruct* FTTPropertyTrack::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TTPropertyTrack.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TTPropertyTrack.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTTPropertyTrack, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("TTPropertyTrack"));
	}
	return Z_Registration_Info_UScriptStruct_TTPropertyTrack.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FTTPropertyTrack>()
{
	return FTTPropertyTrack::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTTPropertyTrack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTTPropertyTrack>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTTPropertyTrack_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTTPropertyTrack, PropertyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PropertyName_MetaData), NewProp_PropertyName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTTPropertyTrack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTTPropertyTrack_Statics::NewProp_PropertyName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTTPropertyTrack_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTTPropertyTrack_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	Z_Construct_UScriptStruct_FTTTrackBase,
	&NewStructOps,
	"TTPropertyTrack",
	Z_Construct_UScriptStruct_FTTPropertyTrack_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTTPropertyTrack_Statics::PropPointers),
	sizeof(FTTPropertyTrack),
	alignof(FTTPropertyTrack),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTTPropertyTrack_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTTPropertyTrack_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTTPropertyTrack()
{
	if (!Z_Registration_Info_UScriptStruct_TTPropertyTrack.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TTPropertyTrack.InnerSingleton, Z_Construct_UScriptStruct_FTTPropertyTrack_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TTPropertyTrack.InnerSingleton;
}
// End ScriptStruct FTTPropertyTrack

// Begin ScriptStruct FTTFloatTrack
static_assert(std::is_polymorphic<FTTFloatTrack>() == std::is_polymorphic<FTTPropertyTrack>(), "USTRUCT FTTFloatTrack cannot be polymorphic unless super FTTPropertyTrack is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TTFloatTrack;
class UScriptStruct* FTTFloatTrack::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TTFloatTrack.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TTFloatTrack.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTTFloatTrack, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("TTFloatTrack"));
	}
	return Z_Registration_Info_UScriptStruct_TTFloatTrack.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FTTFloatTrack>()
{
	return FTTFloatTrack::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTTFloatTrack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Structure storing information about one float interpolation track */" },
		{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
		{ "ToolTip", "Structure storing information about one float interpolation track" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurveFloat_MetaData[] = {
		{ "Comment", "/** Curve object used to define float value over time */" },
		{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
		{ "ToolTip", "Curve object used to define float value over time" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurveFloat;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTTFloatTrack>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTTFloatTrack_Statics::NewProp_CurveFloat = { "CurveFloat", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTTFloatTrack, CurveFloat), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurveFloat_MetaData), NewProp_CurveFloat_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTTFloatTrack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTTFloatTrack_Statics::NewProp_CurveFloat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTTFloatTrack_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTTFloatTrack_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	Z_Construct_UScriptStruct_FTTPropertyTrack,
	&NewStructOps,
	"TTFloatTrack",
	Z_Construct_UScriptStruct_FTTFloatTrack_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTTFloatTrack_Statics::PropPointers),
	sizeof(FTTFloatTrack),
	alignof(FTTFloatTrack),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTTFloatTrack_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTTFloatTrack_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTTFloatTrack()
{
	if (!Z_Registration_Info_UScriptStruct_TTFloatTrack.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TTFloatTrack.InnerSingleton, Z_Construct_UScriptStruct_FTTFloatTrack_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TTFloatTrack.InnerSingleton;
}
// End ScriptStruct FTTFloatTrack

// Begin ScriptStruct FTTVectorTrack
static_assert(std::is_polymorphic<FTTVectorTrack>() == std::is_polymorphic<FTTPropertyTrack>(), "USTRUCT FTTVectorTrack cannot be polymorphic unless super FTTPropertyTrack is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TTVectorTrack;
class UScriptStruct* FTTVectorTrack::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TTVectorTrack.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TTVectorTrack.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTTVectorTrack, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("TTVectorTrack"));
	}
	return Z_Registration_Info_UScriptStruct_TTVectorTrack.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FTTVectorTrack>()
{
	return FTTVectorTrack::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTTVectorTrack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Structure storing information about one vector interpolation track */" },
		{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
		{ "ToolTip", "Structure storing information about one vector interpolation track" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurveVector_MetaData[] = {
		{ "Comment", "/** Curve object used to define vector value over time */" },
		{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
		{ "ToolTip", "Curve object used to define vector value over time" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurveVector;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTTVectorTrack>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTTVectorTrack_Statics::NewProp_CurveVector = { "CurveVector", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTTVectorTrack, CurveVector), Z_Construct_UClass_UCurveVector_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurveVector_MetaData), NewProp_CurveVector_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTTVectorTrack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTTVectorTrack_Statics::NewProp_CurveVector,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTTVectorTrack_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTTVectorTrack_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	Z_Construct_UScriptStruct_FTTPropertyTrack,
	&NewStructOps,
	"TTVectorTrack",
	Z_Construct_UScriptStruct_FTTVectorTrack_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTTVectorTrack_Statics::PropPointers),
	sizeof(FTTVectorTrack),
	alignof(FTTVectorTrack),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTTVectorTrack_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTTVectorTrack_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTTVectorTrack()
{
	if (!Z_Registration_Info_UScriptStruct_TTVectorTrack.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TTVectorTrack.InnerSingleton, Z_Construct_UScriptStruct_FTTVectorTrack_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TTVectorTrack.InnerSingleton;
}
// End ScriptStruct FTTVectorTrack

// Begin ScriptStruct FTTLinearColorTrack
static_assert(std::is_polymorphic<FTTLinearColorTrack>() == std::is_polymorphic<FTTPropertyTrack>(), "USTRUCT FTTLinearColorTrack cannot be polymorphic unless super FTTPropertyTrack is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TTLinearColorTrack;
class UScriptStruct* FTTLinearColorTrack::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TTLinearColorTrack.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TTLinearColorTrack.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTTLinearColorTrack, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("TTLinearColorTrack"));
	}
	return Z_Registration_Info_UScriptStruct_TTLinearColorTrack.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FTTLinearColorTrack>()
{
	return FTTLinearColorTrack::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTTLinearColorTrack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Structure storing information about one color interpolation track */" },
		{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
		{ "ToolTip", "Structure storing information about one color interpolation track" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurveLinearColor_MetaData[] = {
		{ "Comment", "/** Curve object used to define color value over time */" },
		{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
		{ "ToolTip", "Curve object used to define color value over time" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurveLinearColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTTLinearColorTrack>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTTLinearColorTrack_Statics::NewProp_CurveLinearColor = { "CurveLinearColor", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTTLinearColorTrack, CurveLinearColor), Z_Construct_UClass_UCurveLinearColor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurveLinearColor_MetaData), NewProp_CurveLinearColor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTTLinearColorTrack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTTLinearColorTrack_Statics::NewProp_CurveLinearColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTTLinearColorTrack_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTTLinearColorTrack_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	Z_Construct_UScriptStruct_FTTPropertyTrack,
	&NewStructOps,
	"TTLinearColorTrack",
	Z_Construct_UScriptStruct_FTTLinearColorTrack_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTTLinearColorTrack_Statics::PropPointers),
	sizeof(FTTLinearColorTrack),
	alignof(FTTLinearColorTrack),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTTLinearColorTrack_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTTLinearColorTrack_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTTLinearColorTrack()
{
	if (!Z_Registration_Info_UScriptStruct_TTLinearColorTrack.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TTLinearColorTrack.InnerSingleton, Z_Construct_UScriptStruct_FTTLinearColorTrack_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TTLinearColorTrack.InnerSingleton;
}
// End ScriptStruct FTTLinearColorTrack

// Begin Class UTimelineTemplate
void UTimelineTemplate::StaticRegisterNativesUTimelineTemplate()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTimelineTemplate);
UClass* Z_Construct_UClass_UTimelineTemplate_NoRegister()
{
	return UTimelineTemplate::StaticClass();
}
struct Z_Construct_UClass_UTimelineTemplate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/TimelineTemplate.h" },
		{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimelineLength_MetaData[] = {
		{ "Category", "TimelineTemplate" },
		{ "Comment", "/** Length of this timeline */" },
		{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
		{ "ToolTip", "Length of this timeline" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LengthMode_MetaData[] = {
		{ "Category", "TimelineTemplate" },
		{ "Comment", "/** How we want the timeline to determine its own length (e.g. specified length, last keyframe) */" },
		{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
		{ "ToolTip", "How we want the timeline to determine its own length (e.g. specified length, last keyframe)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoPlay_MetaData[] = {
		{ "Category", "TimelineTemplate" },
		{ "Comment", "/** If we want the timeline to auto-play */" },
		{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
		{ "ToolTip", "If we want the timeline to auto-play" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLoop_MetaData[] = {
		{ "Category", "TimelineTemplate" },
		{ "Comment", "/** If we want the timeline to loop */" },
		{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
		{ "ToolTip", "If we want the timeline to loop" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReplicated_MetaData[] = {
		{ "Category", "TimelineTemplate" },
		{ "Comment", "/** If we want the timeline to loop */" },
		{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
		{ "ToolTip", "If we want the timeline to loop" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreTimeDilation_MetaData[] = {
		{ "Category", "TimelineTemplate" },
		{ "Comment", "/** If we want the timeline to ignore global time dilation */" },
		{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
		{ "ToolTip", "If we want the timeline to ignore global time dilation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventTracks_MetaData[] = {
		{ "Comment", "/** Set of event tracks */" },
		{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
		{ "ToolTip", "Set of event tracks" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloatTracks_MetaData[] = {
		{ "Comment", "/** Set of float interpolation tracks */" },
		{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
		{ "ToolTip", "Set of float interpolation tracks" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VectorTracks_MetaData[] = {
		{ "Comment", "/** Set of vector interpolation tracks */" },
		{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
		{ "ToolTip", "Set of vector interpolation tracks" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinearColorTracks_MetaData[] = {
		{ "Comment", "/** Set of linear color interpolation tracks */" },
		{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
		{ "ToolTip", "Set of linear color interpolation tracks" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MetaDataArray_MetaData[] = {
		{ "Category", "BPVariableDescription" },
		{ "Comment", "/** Metadata information for this timeline */" },
		{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
		{ "ToolTip", "Metadata information for this timeline" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimelineGuid_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimelineTickGroup_MetaData[] = {
		{ "Comment", "/** Allow control of Timeline component TickGroup assignment via TimelineTemplates */" },
		{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
		{ "ToolTip", "Allow control of Timeline component TickGroup assignment via TimelineTemplates" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VariableName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DirectionPropertyName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpdateFunctionName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FinishedFunctionName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrackDisplayOrder_MetaData[] = {
		{ "Comment", "/** Whether or not this track is expanded in the UI. */" },
		{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
		{ "ToolTip", "Whether or not this track is expanded in the UI." },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimelineLength;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LengthMode;
	static void NewProp_bAutoPlay_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoPlay;
	static void NewProp_bLoop_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLoop;
	static void NewProp_bReplicated_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReplicated;
	static void NewProp_bIgnoreTimeDilation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreTimeDilation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventTracks_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_EventTracks;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FloatTracks_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FloatTracks;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VectorTracks_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_VectorTracks;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LinearColorTracks_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LinearColorTracks;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MetaDataArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MetaDataArray;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TimelineGuid;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TimelineTickGroup;
	static const UECodeGen_Private::FNamePropertyParams NewProp_VariableName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DirectionPropertyName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_UpdateFunctionName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_FinishedFunctionName;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TrackDisplayOrder_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TrackDisplayOrder;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTimelineTemplate>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_TimelineLength = { "TimelineLength", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTimelineTemplate, TimelineLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimelineLength_MetaData), NewProp_TimelineLength_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_LengthMode = { "LengthMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTimelineTemplate, LengthMode), Z_Construct_UEnum_Engine_ETimelineLengthMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LengthMode_MetaData), NewProp_LengthMode_MetaData) }; // 3815588061
void Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_bAutoPlay_SetBit(void* Obj)
{
	((UTimelineTemplate*)Obj)->bAutoPlay = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_bAutoPlay = { "bAutoPlay", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UTimelineTemplate), &Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_bAutoPlay_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoPlay_MetaData), NewProp_bAutoPlay_MetaData) };
void Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_bLoop_SetBit(void* Obj)
{
	((UTimelineTemplate*)Obj)->bLoop = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_bLoop = { "bLoop", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UTimelineTemplate), &Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_bLoop_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLoop_MetaData), NewProp_bLoop_MetaData) };
void Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_bReplicated_SetBit(void* Obj)
{
	((UTimelineTemplate*)Obj)->bReplicated = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_bReplicated = { "bReplicated", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UTimelineTemplate), &Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_bReplicated_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReplicated_MetaData), NewProp_bReplicated_MetaData) };
void Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_bIgnoreTimeDilation_SetBit(void* Obj)
{
	((UTimelineTemplate*)Obj)->bIgnoreTimeDilation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_bIgnoreTimeDilation = { "bIgnoreTimeDilation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UTimelineTemplate), &Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_bIgnoreTimeDilation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIgnoreTimeDilation_MetaData), NewProp_bIgnoreTimeDilation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_EventTracks_Inner = { "EventTracks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTTEventTrack, METADATA_PARAMS(0, nullptr) }; // 4136808249
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_EventTracks = { "EventTracks", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTimelineTemplate, EventTracks), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventTracks_MetaData), NewProp_EventTracks_MetaData) }; // 4136808249
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_FloatTracks_Inner = { "FloatTracks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTTFloatTrack, METADATA_PARAMS(0, nullptr) }; // 2382075852
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_FloatTracks = { "FloatTracks", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTimelineTemplate, FloatTracks), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloatTracks_MetaData), NewProp_FloatTracks_MetaData) }; // 2382075852
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_VectorTracks_Inner = { "VectorTracks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTTVectorTrack, METADATA_PARAMS(0, nullptr) }; // 1982011549
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_VectorTracks = { "VectorTracks", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTimelineTemplate, VectorTracks), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VectorTracks_MetaData), NewProp_VectorTracks_MetaData) }; // 1982011549
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_LinearColorTracks_Inner = { "LinearColorTracks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTTLinearColorTrack, METADATA_PARAMS(0, nullptr) }; // 76365035
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_LinearColorTracks = { "LinearColorTracks", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTimelineTemplate, LinearColorTracks), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinearColorTracks_MetaData), NewProp_LinearColorTracks_MetaData) }; // 76365035
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_MetaDataArray_Inner = { "MetaDataArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBPVariableMetaDataEntry, METADATA_PARAMS(0, nullptr) }; // 3809530829
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_MetaDataArray = { "MetaDataArray", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTimelineTemplate, MetaDataArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MetaDataArray_MetaData), NewProp_MetaDataArray_MetaData) }; // 3809530829
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_TimelineGuid = { "TimelineGuid", nullptr, (EPropertyFlags)0x0010000000200000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTimelineTemplate, TimelineGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimelineGuid_MetaData), NewProp_TimelineGuid_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_TimelineTickGroup = { "TimelineTickGroup", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTimelineTemplate, TimelineTickGroup), Z_Construct_UEnum_Engine_ETickingGroup, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimelineTickGroup_MetaData), NewProp_TimelineTickGroup_MetaData) }; // 3616902692
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_VariableName = { "VariableName", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTimelineTemplate, VariableName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VariableName_MetaData), NewProp_VariableName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_DirectionPropertyName = { "DirectionPropertyName", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTimelineTemplate, DirectionPropertyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DirectionPropertyName_MetaData), NewProp_DirectionPropertyName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_UpdateFunctionName = { "UpdateFunctionName", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTimelineTemplate, UpdateFunctionName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpdateFunctionName_MetaData), NewProp_UpdateFunctionName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_FinishedFunctionName = { "FinishedFunctionName", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTimelineTemplate, FinishedFunctionName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FinishedFunctionName_MetaData), NewProp_FinishedFunctionName_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_TrackDisplayOrder_Inner = { "TrackDisplayOrder", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTTTrackId, METADATA_PARAMS(0, nullptr) }; // 89389898
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_TrackDisplayOrder = { "TrackDisplayOrder", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTimelineTemplate, TrackDisplayOrder), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrackDisplayOrder_MetaData), NewProp_TrackDisplayOrder_MetaData) }; // 89389898
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTimelineTemplate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_TimelineLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_LengthMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_bAutoPlay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_bLoop,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_bReplicated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_bIgnoreTimeDilation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_EventTracks_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_EventTracks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_FloatTracks_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_FloatTracks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_VectorTracks_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_VectorTracks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_LinearColorTracks_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_LinearColorTracks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_MetaDataArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_MetaDataArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_TimelineGuid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_TimelineTickGroup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_VariableName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_DirectionPropertyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_UpdateFunctionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_FinishedFunctionName,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_TrackDisplayOrder_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_TrackDisplayOrder,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTimelineTemplate_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTimelineTemplate_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTimelineTemplate_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTimelineTemplate_Statics::ClassParams = {
	&UTimelineTemplate::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UTimelineTemplate_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UTimelineTemplate_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTimelineTemplate_Statics::Class_MetaDataParams), Z_Construct_UClass_UTimelineTemplate_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTimelineTemplate()
{
	if (!Z_Registration_Info_UClass_UTimelineTemplate.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTimelineTemplate.OuterSingleton, Z_Construct_UClass_UTimelineTemplate_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTimelineTemplate.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UTimelineTemplate>()
{
	return UTimelineTemplate::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTimelineTemplate);
UTimelineTemplate::~UTimelineTemplate() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UTimelineTemplate)
// End Class UTimelineTemplate

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TimelineTemplate_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FTTTrackBase::StaticStruct, Z_Construct_UScriptStruct_FTTTrackBase_Statics::NewStructOps, TEXT("TTTrackBase"), &Z_Registration_Info_UScriptStruct_TTTrackBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTTTrackBase), 1155497438U) },
		{ FTTTrackId::StaticStruct, Z_Construct_UScriptStruct_FTTTrackId_Statics::NewStructOps, TEXT("TTTrackId"), &Z_Registration_Info_UScriptStruct_TTTrackId, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTTTrackId), 89389898U) },
		{ FTTEventTrack::StaticStruct, Z_Construct_UScriptStruct_FTTEventTrack_Statics::NewStructOps, TEXT("TTEventTrack"), &Z_Registration_Info_UScriptStruct_TTEventTrack, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTTEventTrack), 4136808249U) },
		{ FTTPropertyTrack::StaticStruct, Z_Construct_UScriptStruct_FTTPropertyTrack_Statics::NewStructOps, TEXT("TTPropertyTrack"), &Z_Registration_Info_UScriptStruct_TTPropertyTrack, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTTPropertyTrack), 499691577U) },
		{ FTTFloatTrack::StaticStruct, Z_Construct_UScriptStruct_FTTFloatTrack_Statics::NewStructOps, TEXT("TTFloatTrack"), &Z_Registration_Info_UScriptStruct_TTFloatTrack, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTTFloatTrack), 2382075852U) },
		{ FTTVectorTrack::StaticStruct, Z_Construct_UScriptStruct_FTTVectorTrack_Statics::NewStructOps, TEXT("TTVectorTrack"), &Z_Registration_Info_UScriptStruct_TTVectorTrack, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTTVectorTrack), 1982011549U) },
		{ FTTLinearColorTrack::StaticStruct, Z_Construct_UScriptStruct_FTTLinearColorTrack_Statics::NewStructOps, TEXT("TTLinearColorTrack"), &Z_Registration_Info_UScriptStruct_TTLinearColorTrack, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTTLinearColorTrack), 76365035U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTimelineTemplate, UTimelineTemplate::StaticClass, TEXT("UTimelineTemplate"), &Z_Registration_Info_UClass_UTimelineTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTimelineTemplate), 3954717492U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TimelineTemplate_h_3181515369(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TimelineTemplate_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TimelineTemplate_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TimelineTemplate_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TimelineTemplate_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
