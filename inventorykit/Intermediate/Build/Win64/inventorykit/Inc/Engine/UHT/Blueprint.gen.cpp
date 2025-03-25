// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/Blueprint.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphPin.h"
#include "Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueprint() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UStruct();
COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_ELifetimeCondition();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprint();
ENGINE_API UClass* Z_Construct_UClass_UBlueprint_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintCore();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintExtension_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDEPRECATED_Breakpoint();
ENGINE_API UClass* Z_Construct_UClass_UDEPRECATED_Breakpoint_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UEdGraph_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UEdGraphPin_Deprecated_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UInheritableComponentHandler_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USimpleConstructionScript_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UThumbnailInfo_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTimelineTemplate_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBlueprintCompileMode();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBlueprintNativizationFlag();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBlueprintStatus();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBlueprintType();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EShouldCookBlueprintPropertyGuids();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintMacroCosmeticInfo();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBPComponentClassOverride();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBPEditorBookmarkNode();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBPInterfaceDescription();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBPVariableDescription();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBPVariableMetaDataEntry();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphPinReference();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphPinType();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEditedDocumentInfo();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum EBlueprintStatus
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBlueprintStatus;
static UEnum* EBlueprintStatus_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EBlueprintStatus.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EBlueprintStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EBlueprintStatus, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EBlueprintStatus"));
	}
	return Z_Registration_Info_UEnum_EBlueprintStatus.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EBlueprintStatus>()
{
	return EBlueprintStatus_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EBlueprintStatus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BS_BeingCreated.Comment", "/** Blueprint is in the process of being created for the first time. */" },
		{ "BS_BeingCreated.Name", "BS_BeingCreated" },
		{ "BS_BeingCreated.ToolTip", "Blueprint is in the process of being created for the first time." },
		{ "BS_Dirty.Comment", "/** Blueprint has been modified but not recompiled. */" },
		{ "BS_Dirty.Name", "BS_Dirty" },
		{ "BS_Dirty.ToolTip", "Blueprint has been modified but not recompiled." },
		{ "BS_Error.Comment", "/** Blueprint tried but failed to be compiled. */" },
		{ "BS_Error.Name", "BS_Error" },
		{ "BS_Error.ToolTip", "Blueprint tried but failed to be compiled." },
		{ "BS_MAX.Name", "BS_MAX" },
		{ "BS_Unknown.Comment", "/** Blueprint is in an unknown state. */" },
		{ "BS_Unknown.Name", "BS_Unknown" },
		{ "BS_Unknown.ToolTip", "Blueprint is in an unknown state." },
		{ "BS_UpToDate.Comment", "/** Blueprint has been compiled since it was last modified. */" },
		{ "BS_UpToDate.Name", "BS_UpToDate" },
		{ "BS_UpToDate.ToolTip", "Blueprint has been compiled since it was last modified." },
		{ "BS_UpToDateWithWarnings.Comment", "/** Blueprint has been compiled since it was last modified. There are warnings. */" },
		{ "BS_UpToDateWithWarnings.Name", "BS_UpToDateWithWarnings" },
		{ "BS_UpToDateWithWarnings.ToolTip", "Blueprint has been compiled since it was last modified. There are warnings." },
		{ "Comment", "/**\n * Enumerates states a blueprint can be in.\n */" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "Enumerates states a blueprint can be in." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "BS_Unknown", (int64)BS_Unknown },
		{ "BS_Dirty", (int64)BS_Dirty },
		{ "BS_Error", (int64)BS_Error },
		{ "BS_UpToDate", (int64)BS_UpToDate },
		{ "BS_BeingCreated", (int64)BS_BeingCreated },
		{ "BS_UpToDateWithWarnings", (int64)BS_UpToDateWithWarnings },
		{ "BS_MAX", (int64)BS_MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EBlueprintStatus_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EBlueprintStatus",
	"EBlueprintStatus",
	Z_Construct_UEnum_Engine_EBlueprintStatus_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EBlueprintStatus_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EBlueprintStatus_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EBlueprintStatus_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EBlueprintStatus()
{
	if (!Z_Registration_Info_UEnum_EBlueprintStatus.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBlueprintStatus.InnerSingleton, Z_Construct_UEnum_Engine_EBlueprintStatus_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EBlueprintStatus.InnerSingleton;
}
// End Enum EBlueprintStatus

// Begin Enum EBlueprintType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBlueprintType;
static UEnum* EBlueprintType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EBlueprintType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EBlueprintType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EBlueprintType, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EBlueprintType"));
	}
	return Z_Registration_Info_UEnum_EBlueprintType.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EBlueprintType>()
{
	return EBlueprintType_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EBlueprintType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BPTYPE_Const.Comment", "/** Blueprint that is const during execution (no state graph and methods cannot modify member variables). */" },
		{ "BPTYPE_Const.DisplayName", "Const Blueprint Class" },
		{ "BPTYPE_Const.Name", "BPTYPE_Const" },
		{ "BPTYPE_Const.ToolTip", "Blueprint that is const during execution (no state graph and methods cannot modify member variables)." },
		{ "BPTYPE_FunctionLibrary.Comment", "/** Blueprint that serves as a container for functions to be used in other blueprints. */" },
		{ "BPTYPE_FunctionLibrary.DisplayName", "Blueprint Function Library" },
		{ "BPTYPE_FunctionLibrary.Name", "BPTYPE_FunctionLibrary" },
		{ "BPTYPE_FunctionLibrary.ToolTip", "Blueprint that serves as a container for functions to be used in other blueprints." },
		{ "BPTYPE_Interface.Comment", "/** Blueprint that serves as an interface to be implemented by other blueprints. */" },
		{ "BPTYPE_Interface.DisplayName", "Blueprint Interface" },
		{ "BPTYPE_Interface.Name", "BPTYPE_Interface" },
		{ "BPTYPE_Interface.ToolTip", "Blueprint that serves as an interface to be implemented by other blueprints." },
		{ "BPTYPE_LevelScript.Comment", "/** Blueprint that handles level scripting. */" },
		{ "BPTYPE_LevelScript.DisplayName", "Level Blueprint" },
		{ "BPTYPE_LevelScript.Name", "BPTYPE_LevelScript" },
		{ "BPTYPE_LevelScript.ToolTip", "Blueprint that handles level scripting." },
		{ "BPTYPE_MacroLibrary.Comment", "/** Blueprint that serves as a container for macros to be used in other blueprints. */" },
		{ "BPTYPE_MacroLibrary.DisplayName", "Blueprint Macro Library" },
		{ "BPTYPE_MacroLibrary.Name", "BPTYPE_MacroLibrary" },
		{ "BPTYPE_MacroLibrary.ToolTip", "Blueprint that serves as a container for macros to be used in other blueprints." },
		{ "BPTYPE_MAX.Name", "BPTYPE_MAX" },
		{ "BPTYPE_Normal.Comment", "/** Normal blueprint. */" },
		{ "BPTYPE_Normal.DisplayName", "Blueprint Class" },
		{ "BPTYPE_Normal.Name", "BPTYPE_Normal" },
		{ "BPTYPE_Normal.ToolTip", "Normal blueprint." },
		{ "Comment", "/** Enumerates types of blueprints. */" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "Enumerates types of blueprints." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "BPTYPE_Normal", (int64)BPTYPE_Normal },
		{ "BPTYPE_Const", (int64)BPTYPE_Const },
		{ "BPTYPE_MacroLibrary", (int64)BPTYPE_MacroLibrary },
		{ "BPTYPE_Interface", (int64)BPTYPE_Interface },
		{ "BPTYPE_LevelScript", (int64)BPTYPE_LevelScript },
		{ "BPTYPE_FunctionLibrary", (int64)BPTYPE_FunctionLibrary },
		{ "BPTYPE_MAX", (int64)BPTYPE_MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EBlueprintType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EBlueprintType",
	"EBlueprintType",
	Z_Construct_UEnum_Engine_EBlueprintType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EBlueprintType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EBlueprintType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EBlueprintType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EBlueprintType()
{
	if (!Z_Registration_Info_UEnum_EBlueprintType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBlueprintType.InnerSingleton, Z_Construct_UEnum_Engine_EBlueprintType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EBlueprintType.InnerSingleton;
}
// End Enum EBlueprintType

// Begin Class UDEPRECATED_Breakpoint
void UDEPRECATED_Breakpoint::StaticRegisterNativesUDEPRECATED_Breakpoint()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDEPRECATED_Breakpoint);
UClass* Z_Construct_UClass_UDEPRECATED_Breakpoint_NoRegister()
{
	return UDEPRECATED_Breakpoint::StaticClass();
}
struct Z_Construct_UClass_UDEPRECATED_Breakpoint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** Breakpoints have been moved to Engine/Source/Editor/UnrealEd/Public/Kismet2/Breakpoint.h,\n*   renamed to FBlueprintBreakpoint, and are now UStructs */" },
		{ "IncludePath", "Engine/Blueprint.h" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "Breakpoints have been moved to Engine/Source/Editor/UnrealEd/Public/Kismet2/Breakpoint.h,\n renamed to FBlueprintBreakpoint, and are now UStructs" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDEPRECATED_Breakpoint>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDEPRECATED_Breakpoint_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_Breakpoint_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDEPRECATED_Breakpoint_Statics::ClassParams = {
	&UDEPRECATED_Breakpoint::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x020002A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_Breakpoint_Statics::Class_MetaDataParams), Z_Construct_UClass_UDEPRECATED_Breakpoint_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDEPRECATED_Breakpoint()
{
	if (!Z_Registration_Info_UClass_UDEPRECATED_Breakpoint.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDEPRECATED_Breakpoint.OuterSingleton, Z_Construct_UClass_UDEPRECATED_Breakpoint_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDEPRECATED_Breakpoint.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UDEPRECATED_Breakpoint>()
{
	return UDEPRECATED_Breakpoint::StaticClass();
}
UDEPRECATED_Breakpoint::UDEPRECATED_Breakpoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDEPRECATED_Breakpoint);
UDEPRECATED_Breakpoint::~UDEPRECATED_Breakpoint() {}
// End Class UDEPRECATED_Breakpoint

// Begin Enum EBlueprintCompileMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBlueprintCompileMode;
static UEnum* EBlueprintCompileMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EBlueprintCompileMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EBlueprintCompileMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EBlueprintCompileMode, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EBlueprintCompileMode"));
	}
	return Z_Registration_Info_UEnum_EBlueprintCompileMode.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EBlueprintCompileMode>()
{
	return EBlueprintCompileMode_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EBlueprintCompileMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/** Compile modes. */" },
		{ "Default.DisplayName", "Use Default" },
		{ "Default.Name", "EBlueprintCompileMode::Default" },
		{ "Default.ToolTip", "Use the default setting." },
		{ "Development.Name", "EBlueprintCompileMode::Development" },
		{ "Development.ToolTip", "Always compile in development mode (even when cooking)." },
		{ "FinalRelease.Name", "EBlueprintCompileMode::FinalRelease" },
		{ "FinalRelease.ToolTip", "Always compile in final release mode." },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "Compile modes." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EBlueprintCompileMode::Default", (int64)EBlueprintCompileMode::Default },
		{ "EBlueprintCompileMode::Development", (int64)EBlueprintCompileMode::Development },
		{ "EBlueprintCompileMode::FinalRelease", (int64)EBlueprintCompileMode::FinalRelease },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EBlueprintCompileMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EBlueprintCompileMode",
	"EBlueprintCompileMode",
	Z_Construct_UEnum_Engine_EBlueprintCompileMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EBlueprintCompileMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EBlueprintCompileMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EBlueprintCompileMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EBlueprintCompileMode()
{
	if (!Z_Registration_Info_UEnum_EBlueprintCompileMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBlueprintCompileMode.InnerSingleton, Z_Construct_UEnum_Engine_EBlueprintCompileMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EBlueprintCompileMode.InnerSingleton;
}
// End Enum EBlueprintCompileMode

// Begin ScriptStruct FBlueprintMacroCosmeticInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BlueprintMacroCosmeticInfo;
class UScriptStruct* FBlueprintMacroCosmeticInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BlueprintMacroCosmeticInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BlueprintMacroCosmeticInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlueprintMacroCosmeticInfo, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("BlueprintMacroCosmeticInfo"));
	}
	return Z_Registration_Info_UScriptStruct_BlueprintMacroCosmeticInfo.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBlueprintMacroCosmeticInfo>()
{
	return FBlueprintMacroCosmeticInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FBlueprintMacroCosmeticInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Cached 'cosmetic' information about a macro graph (this is transient and is computed at load) */" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "Cached 'cosmetic' information about a macro graph (this is transient and is computed at load)" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBlueprintMacroCosmeticInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBlueprintMacroCosmeticInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"BlueprintMacroCosmeticInfo",
	nullptr,
	0,
	sizeof(FBlueprintMacroCosmeticInfo),
	alignof(FBlueprintMacroCosmeticInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintMacroCosmeticInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBlueprintMacroCosmeticInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBlueprintMacroCosmeticInfo()
{
	if (!Z_Registration_Info_UScriptStruct_BlueprintMacroCosmeticInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BlueprintMacroCosmeticInfo.InnerSingleton, Z_Construct_UScriptStruct_FBlueprintMacroCosmeticInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_BlueprintMacroCosmeticInfo.InnerSingleton;
}
// End ScriptStruct FBlueprintMacroCosmeticInfo

// Begin ScriptStruct FBPVariableMetaDataEntry
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BPVariableMetaDataEntry;
class UScriptStruct* FBPVariableMetaDataEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BPVariableMetaDataEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BPVariableMetaDataEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBPVariableMetaDataEntry, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("BPVariableMetaDataEntry"));
	}
	return Z_Registration_Info_UScriptStruct_BPVariableMetaDataEntry.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBPVariableMetaDataEntry>()
{
	return FBPVariableMetaDataEntry::StaticStruct();
}
struct Z_Construct_UScriptStruct_FBPVariableMetaDataEntry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** One metadata entry for a variable */" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "One metadata entry for a variable" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataKey_MetaData[] = {
		{ "Category", "BPVariableMetaDataEntry" },
		{ "Comment", "/** Name of metadata key */" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "Name of metadata key" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataValue_MetaData[] = {
		{ "Category", "BPVariableMetaDataEntry" },
		{ "Comment", "/** Name of metadata value */" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "Name of metadata value" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_DataKey;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DataValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBPVariableMetaDataEntry>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBPVariableMetaDataEntry_Statics::NewProp_DataKey = { "DataKey", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBPVariableMetaDataEntry, DataKey), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataKey_MetaData), NewProp_DataKey_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBPVariableMetaDataEntry_Statics::NewProp_DataValue = { "DataValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBPVariableMetaDataEntry, DataValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataValue_MetaData), NewProp_DataValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBPVariableMetaDataEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPVariableMetaDataEntry_Statics::NewProp_DataKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPVariableMetaDataEntry_Statics::NewProp_DataValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPVariableMetaDataEntry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBPVariableMetaDataEntry_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"BPVariableMetaDataEntry",
	Z_Construct_UScriptStruct_FBPVariableMetaDataEntry_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPVariableMetaDataEntry_Statics::PropPointers),
	sizeof(FBPVariableMetaDataEntry),
	alignof(FBPVariableMetaDataEntry),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPVariableMetaDataEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBPVariableMetaDataEntry_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBPVariableMetaDataEntry()
{
	if (!Z_Registration_Info_UScriptStruct_BPVariableMetaDataEntry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BPVariableMetaDataEntry.InnerSingleton, Z_Construct_UScriptStruct_FBPVariableMetaDataEntry_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_BPVariableMetaDataEntry.InnerSingleton;
}
// End ScriptStruct FBPVariableMetaDataEntry

// Begin ScriptStruct FBPVariableDescription
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BPVariableDescription;
class UScriptStruct* FBPVariableDescription::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BPVariableDescription.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BPVariableDescription.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBPVariableDescription, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("BPVariableDescription"));
	}
	return Z_Registration_Info_UScriptStruct_BPVariableDescription.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBPVariableDescription>()
{
	return FBPVariableDescription::StaticStruct();
}
struct Z_Construct_UScriptStruct_FBPVariableDescription_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Struct indicating a variable in the generated class */" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "Struct indicating a variable in the generated class" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VarName_MetaData[] = {
		{ "Category", "BPVariableDescription" },
		{ "Comment", "/** Name of the variable */" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "Name of the variable" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VarGuid_MetaData[] = {
		{ "Comment", "/** A Guid that will remain constant even if the VarName changes */" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "A Guid that will remain constant even if the VarName changes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VarType_MetaData[] = {
		{ "Category", "BPVariableDescription" },
		{ "Comment", "/** Type of the variable */" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "Type of the variable" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FriendlyName_MetaData[] = {
		{ "Category", "BPVariableDescription" },
		{ "Comment", "/** Friendly name of the variable */" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "Friendly name of the variable" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[] = {
		{ "Category", "BPVariableDescription" },
		{ "Comment", "/** Category this variable should be in */" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "Category this variable should be in" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PropertyFlags_MetaData[] = {
		{ "Category", "BPVariableDescription" },
		{ "Comment", "/** Property flags for this variable - Changed from int32 to uint64*/" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "Property flags for this variable - Changed from int32 to uint64" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RepNotifyFunc_MetaData[] = {
		{ "Category", "BPVariableRepNotify" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReplicationCondition_MetaData[] = {
		{ "Category", "BPVariableDescription" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MetaDataArray_MetaData[] = {
		{ "Category", "BPVariableDescription" },
		{ "Comment", "/** Metadata information for this variable */" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "Metadata information for this variable" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[] = {
		{ "Category", "BPVariableDescription" },
		{ "Comment", "/** Optional new default value stored as string*/" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "Optional new default value stored as string" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_VarName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VarGuid;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VarType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FriendlyName;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Category;
	static const UECodeGen_Private::FUInt64PropertyParams NewProp_PropertyFlags;
	static const UECodeGen_Private::FNamePropertyParams NewProp_RepNotifyFunc;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReplicationCondition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MetaDataArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MetaDataArray;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBPVariableDescription>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBPVariableDescription_Statics::NewProp_VarName = { "VarName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBPVariableDescription, VarName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VarName_MetaData), NewProp_VarName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBPVariableDescription_Statics::NewProp_VarGuid = { "VarGuid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBPVariableDescription, VarGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VarGuid_MetaData), NewProp_VarGuid_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBPVariableDescription_Statics::NewProp_VarType = { "VarType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBPVariableDescription, VarType), Z_Construct_UScriptStruct_FEdGraphPinType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VarType_MetaData), NewProp_VarType_MetaData) }; // 831943823
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBPVariableDescription_Statics::NewProp_FriendlyName = { "FriendlyName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBPVariableDescription, FriendlyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FriendlyName_MetaData), NewProp_FriendlyName_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FBPVariableDescription_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBPVariableDescription, Category), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Category_MetaData), NewProp_Category_MetaData) };
const UECodeGen_Private::FUInt64PropertyParams Z_Construct_UScriptStruct_FBPVariableDescription_Statics::NewProp_PropertyFlags = { "PropertyFlags", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBPVariableDescription, PropertyFlags), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PropertyFlags_MetaData), NewProp_PropertyFlags_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBPVariableDescription_Statics::NewProp_RepNotifyFunc = { "RepNotifyFunc", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBPVariableDescription, RepNotifyFunc), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RepNotifyFunc_MetaData), NewProp_RepNotifyFunc_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBPVariableDescription_Statics::NewProp_ReplicationCondition = { "ReplicationCondition", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBPVariableDescription, ReplicationCondition), Z_Construct_UEnum_CoreUObject_ELifetimeCondition, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReplicationCondition_MetaData), NewProp_ReplicationCondition_MetaData) }; // 1613396080
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBPVariableDescription_Statics::NewProp_MetaDataArray_Inner = { "MetaDataArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBPVariableMetaDataEntry, METADATA_PARAMS(0, nullptr) }; // 3809530829
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBPVariableDescription_Statics::NewProp_MetaDataArray = { "MetaDataArray", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBPVariableDescription, MetaDataArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MetaDataArray_MetaData), NewProp_MetaDataArray_MetaData) }; // 3809530829
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBPVariableDescription_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBPVariableDescription, DefaultValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultValue_MetaData), NewProp_DefaultValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBPVariableDescription_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPVariableDescription_Statics::NewProp_VarName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPVariableDescription_Statics::NewProp_VarGuid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPVariableDescription_Statics::NewProp_VarType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPVariableDescription_Statics::NewProp_FriendlyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPVariableDescription_Statics::NewProp_Category,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPVariableDescription_Statics::NewProp_PropertyFlags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPVariableDescription_Statics::NewProp_RepNotifyFunc,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPVariableDescription_Statics::NewProp_ReplicationCondition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPVariableDescription_Statics::NewProp_MetaDataArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPVariableDescription_Statics::NewProp_MetaDataArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPVariableDescription_Statics::NewProp_DefaultValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPVariableDescription_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBPVariableDescription_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"BPVariableDescription",
	Z_Construct_UScriptStruct_FBPVariableDescription_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPVariableDescription_Statics::PropPointers),
	sizeof(FBPVariableDescription),
	alignof(FBPVariableDescription),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPVariableDescription_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBPVariableDescription_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBPVariableDescription()
{
	if (!Z_Registration_Info_UScriptStruct_BPVariableDescription.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BPVariableDescription.InnerSingleton, Z_Construct_UScriptStruct_FBPVariableDescription_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_BPVariableDescription.InnerSingleton;
}
// End ScriptStruct FBPVariableDescription

// Begin ScriptStruct FBPInterfaceDescription
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BPInterfaceDescription;
class UScriptStruct* FBPInterfaceDescription::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BPInterfaceDescription.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BPInterfaceDescription.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBPInterfaceDescription, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("BPInterfaceDescription"));
	}
	return Z_Registration_Info_UScriptStruct_BPInterfaceDescription.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBPInterfaceDescription>()
{
	return FBPInterfaceDescription::StaticStruct();
}
struct Z_Construct_UScriptStruct_FBPInterfaceDescription_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Struct containing information about what interfaces are implemented in this blueprint */" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "Struct containing information about what interfaces are implemented in this blueprint" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Interface_MetaData[] = {
		{ "Comment", "/** Reference to the interface class we're adding to this blueprint */" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "Reference to the interface class we're adding to this blueprint" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Graphs_MetaData[] = {
		{ "Comment", "/** References to the graphs associated with the required functions for this interface */" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "References to the graphs associated with the required functions for this interface" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_Interface;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Graphs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Graphs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBPInterfaceDescription>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FBPInterfaceDescription_Statics::NewProp_Interface = { "Interface", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBPInterfaceDescription, Interface), Z_Construct_UClass_UClass, Z_Construct_UClass_UInterface, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Interface_MetaData), NewProp_Interface_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FBPInterfaceDescription_Statics::NewProp_Graphs_Inner = { "Graphs", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UEdGraph_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBPInterfaceDescription_Statics::NewProp_Graphs = { "Graphs", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBPInterfaceDescription, Graphs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Graphs_MetaData), NewProp_Graphs_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBPInterfaceDescription_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPInterfaceDescription_Statics::NewProp_Interface,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPInterfaceDescription_Statics::NewProp_Graphs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPInterfaceDescription_Statics::NewProp_Graphs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPInterfaceDescription_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBPInterfaceDescription_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"BPInterfaceDescription",
	Z_Construct_UScriptStruct_FBPInterfaceDescription_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPInterfaceDescription_Statics::PropPointers),
	sizeof(FBPInterfaceDescription),
	alignof(FBPInterfaceDescription),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPInterfaceDescription_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBPInterfaceDescription_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBPInterfaceDescription()
{
	if (!Z_Registration_Info_UScriptStruct_BPInterfaceDescription.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BPInterfaceDescription.InnerSingleton, Z_Construct_UScriptStruct_FBPInterfaceDescription_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_BPInterfaceDescription.InnerSingleton;
}
// End ScriptStruct FBPInterfaceDescription

// Begin ScriptStruct FEditedDocumentInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EditedDocumentInfo;
class UScriptStruct* FEditedDocumentInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EditedDocumentInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EditedDocumentInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEditedDocumentInfo, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EditedDocumentInfo"));
	}
	return Z_Registration_Info_UScriptStruct_EditedDocumentInfo.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FEditedDocumentInfo>()
{
	return FEditedDocumentInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FEditedDocumentInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EditedObjectPath_MetaData[] = {
		{ "Comment", "/** Edited object */" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "Edited object" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SavedViewOffset_MetaData[] = {
		{ "Comment", "/** Saved view position */" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "Saved view position" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SavedZoomAmount_MetaData[] = {
		{ "Comment", "/** Saved zoom amount */" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "Saved zoom amount" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EditedObject_MetaData[] = {
		{ "Comment", "// Legacy hard reference is now serialized as a soft reference (see above).\n" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "Legacy hard reference is now serialized as a soft reference (see above)." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EditedObjectPath;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SavedViewOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SavedZoomAmount;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EditedObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEditedDocumentInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEditedDocumentInfo_Statics::NewProp_EditedObjectPath = { "EditedObjectPath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEditedDocumentInfo, EditedObjectPath), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EditedObjectPath_MetaData), NewProp_EditedObjectPath_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEditedDocumentInfo_Statics::NewProp_SavedViewOffset = { "SavedViewOffset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEditedDocumentInfo, SavedViewOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SavedViewOffset_MetaData), NewProp_SavedViewOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEditedDocumentInfo_Statics::NewProp_SavedZoomAmount = { "SavedZoomAmount", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEditedDocumentInfo, SavedZoomAmount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SavedZoomAmount_MetaData), NewProp_SavedZoomAmount_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEditedDocumentInfo_Statics::NewProp_EditedObject = { "EditedObject", nullptr, (EPropertyFlags)0x0144000020000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEditedDocumentInfo, EditedObject_DEPRECATED), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EditedObject_MetaData), NewProp_EditedObject_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEditedDocumentInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditedDocumentInfo_Statics::NewProp_EditedObjectPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditedDocumentInfo_Statics::NewProp_SavedViewOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditedDocumentInfo_Statics::NewProp_SavedZoomAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditedDocumentInfo_Statics::NewProp_EditedObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditedDocumentInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEditedDocumentInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"EditedDocumentInfo",
	Z_Construct_UScriptStruct_FEditedDocumentInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditedDocumentInfo_Statics::PropPointers),
	sizeof(FEditedDocumentInfo),
	alignof(FEditedDocumentInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditedDocumentInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEditedDocumentInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEditedDocumentInfo()
{
	if (!Z_Registration_Info_UScriptStruct_EditedDocumentInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EditedDocumentInfo.InnerSingleton, Z_Construct_UScriptStruct_FEditedDocumentInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_EditedDocumentInfo.InnerSingleton;
}
// End ScriptStruct FEditedDocumentInfo

// Begin ScriptStruct FBPEditorBookmarkNode
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BPEditorBookmarkNode;
class UScriptStruct* FBPEditorBookmarkNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BPEditorBookmarkNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BPEditorBookmarkNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBPEditorBookmarkNode, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("BPEditorBookmarkNode"));
	}
	return Z_Registration_Info_UScriptStruct_BPEditorBookmarkNode.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBPEditorBookmarkNode>()
{
	return FBPEditorBookmarkNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FBPEditorBookmarkNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Bookmark node info */" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "Bookmark node info" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeGuid_MetaData[] = {
		{ "Comment", "/** Node ID */" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "Node ID" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentGuid_MetaData[] = {
		{ "Comment", "/** Parent ID */" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "Parent ID" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[] = {
		{ "Comment", "/** Display name */" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "Display name" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NodeGuid;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ParentGuid;
	static const UECodeGen_Private::FTextPropertyParams NewProp_DisplayName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBPEditorBookmarkNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBPEditorBookmarkNode_Statics::NewProp_NodeGuid = { "NodeGuid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBPEditorBookmarkNode, NodeGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeGuid_MetaData), NewProp_NodeGuid_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBPEditorBookmarkNode_Statics::NewProp_ParentGuid = { "ParentGuid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBPEditorBookmarkNode, ParentGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentGuid_MetaData), NewProp_ParentGuid_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FBPEditorBookmarkNode_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBPEditorBookmarkNode, DisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayName_MetaData), NewProp_DisplayName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBPEditorBookmarkNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPEditorBookmarkNode_Statics::NewProp_NodeGuid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPEditorBookmarkNode_Statics::NewProp_ParentGuid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPEditorBookmarkNode_Statics::NewProp_DisplayName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPEditorBookmarkNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBPEditorBookmarkNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"BPEditorBookmarkNode",
	Z_Construct_UScriptStruct_FBPEditorBookmarkNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPEditorBookmarkNode_Statics::PropPointers),
	sizeof(FBPEditorBookmarkNode),
	alignof(FBPEditorBookmarkNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPEditorBookmarkNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBPEditorBookmarkNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBPEditorBookmarkNode()
{
	if (!Z_Registration_Info_UScriptStruct_BPEditorBookmarkNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BPEditorBookmarkNode.InnerSingleton, Z_Construct_UScriptStruct_FBPEditorBookmarkNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_BPEditorBookmarkNode.InnerSingleton;
}
// End ScriptStruct FBPEditorBookmarkNode

// Begin Enum EBlueprintNativizationFlag
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBlueprintNativizationFlag;
static UEnum* EBlueprintNativizationFlag_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EBlueprintNativizationFlag.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EBlueprintNativizationFlag.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EBlueprintNativizationFlag, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EBlueprintNativizationFlag"));
	}
	return Z_Registration_Info_UEnum_EBlueprintNativizationFlag.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EBlueprintNativizationFlag>()
{
	return EBlueprintNativizationFlag_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EBlueprintNativizationFlag_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Dependency.Name", "EBlueprintNativizationFlag::Dependency" },
		{ "Disabled.Name", "EBlueprintNativizationFlag::Disabled" },
		{ "ExplicitlyEnabled.Comment", "// conditionally enabled (set from sub-class as a dependency)\n" },
		{ "ExplicitlyEnabled.Name", "EBlueprintNativizationFlag::ExplicitlyEnabled" },
		{ "ExplicitlyEnabled.ToolTip", "conditionally enabled (set from sub-class as a dependency)" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EBlueprintNativizationFlag::Disabled", (int64)EBlueprintNativizationFlag::Disabled },
		{ "EBlueprintNativizationFlag::Dependency", (int64)EBlueprintNativizationFlag::Dependency },
		{ "EBlueprintNativizationFlag::ExplicitlyEnabled", (int64)EBlueprintNativizationFlag::ExplicitlyEnabled },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EBlueprintNativizationFlag_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EBlueprintNativizationFlag",
	"EBlueprintNativizationFlag",
	Z_Construct_UEnum_Engine_EBlueprintNativizationFlag_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EBlueprintNativizationFlag_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EBlueprintNativizationFlag_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EBlueprintNativizationFlag_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EBlueprintNativizationFlag()
{
	if (!Z_Registration_Info_UEnum_EBlueprintNativizationFlag.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBlueprintNativizationFlag.InnerSingleton, Z_Construct_UEnum_Engine_EBlueprintNativizationFlag_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EBlueprintNativizationFlag.InnerSingleton;
}
// End Enum EBlueprintNativizationFlag

// Begin Enum EShouldCookBlueprintPropertyGuids
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EShouldCookBlueprintPropertyGuids;
static UEnum* EShouldCookBlueprintPropertyGuids_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EShouldCookBlueprintPropertyGuids.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EShouldCookBlueprintPropertyGuids.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EShouldCookBlueprintPropertyGuids, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EShouldCookBlueprintPropertyGuids"));
	}
	return Z_Registration_Info_UEnum_EShouldCookBlueprintPropertyGuids.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EShouldCookBlueprintPropertyGuids>()
{
	return EShouldCookBlueprintPropertyGuids_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EShouldCookBlueprintPropertyGuids_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Inherit.Comment", "/** Inherit whether to cook the property GUIDs for this Blueprint from the parent Blueprint (behaves like 'No' if there is no parent Blueprint) */" },
		{ "Inherit.Name", "EShouldCookBlueprintPropertyGuids::Inherit" },
		{ "Inherit.ToolTip", "Inherit whether to cook the property GUIDs for this Blueprint from the parent Blueprint (behaves like 'No' if there is no parent Blueprint)" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "No.Comment", "/** Don't cook the property GUIDs for this Blueprint */" },
		{ "No.Name", "EShouldCookBlueprintPropertyGuids::No" },
		{ "No.ToolTip", "Don't cook the property GUIDs for this Blueprint" },
		{ "Yes.Comment", "/** Cook the property GUIDs for this Blueprint (see UCookerSettings::BlueprintPropertyGuidsCookingMethod) */" },
		{ "Yes.Name", "EShouldCookBlueprintPropertyGuids::Yes" },
		{ "Yes.ToolTip", "Cook the property GUIDs for this Blueprint (see UCookerSettings::BlueprintPropertyGuidsCookingMethod)" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EShouldCookBlueprintPropertyGuids::No", (int64)EShouldCookBlueprintPropertyGuids::No },
		{ "EShouldCookBlueprintPropertyGuids::Yes", (int64)EShouldCookBlueprintPropertyGuids::Yes },
		{ "EShouldCookBlueprintPropertyGuids::Inherit", (int64)EShouldCookBlueprintPropertyGuids::Inherit },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EShouldCookBlueprintPropertyGuids_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EShouldCookBlueprintPropertyGuids",
	"EShouldCookBlueprintPropertyGuids",
	Z_Construct_UEnum_Engine_EShouldCookBlueprintPropertyGuids_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EShouldCookBlueprintPropertyGuids_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EShouldCookBlueprintPropertyGuids_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EShouldCookBlueprintPropertyGuids_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EShouldCookBlueprintPropertyGuids()
{
	if (!Z_Registration_Info_UEnum_EShouldCookBlueprintPropertyGuids.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EShouldCookBlueprintPropertyGuids.InnerSingleton, Z_Construct_UEnum_Engine_EShouldCookBlueprintPropertyGuids_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EShouldCookBlueprintPropertyGuids.InnerSingleton;
}
// End Enum EShouldCookBlueprintPropertyGuids

// Begin Class UBlueprint
void UBlueprint::StaticRegisterNativesUBlueprint()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBlueprint);
UClass* Z_Construct_UClass_UBlueprint_NoRegister()
{
	return UBlueprint::StaticClass();
}
struct Z_Construct_UClass_UBlueprint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Blueprints are special assets that provide an intuitive, node-based interface that can be used to create new types of Actors\n * and script level events; giving designers and gameplay programmers the tools to quickly create and iterate gameplay from\n * within Unreal Editor without ever needing to write a line of code.\n */" },
		{ "IncludePath", "Engine/Blueprint.h" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "Blueprints are special assets that provide an intuitive, node-based interface that can be used to create new types of Actors\nand script level events; giving designers and gameplay programmers the tools to quickly create and iterate gameplay from\nwithin Unreal Editor without ever needing to write a line of code." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentClass_MetaData[] = {
		{ "Comment", "/** \n\x09 * Pointer to the parent class that the generated class should derive from. This *can* be null under rare circumstances, \n\x09 * one such case can be created by creating a blueprint (A) based on another blueprint (B), shutting down the editor, and\n\x09 * deleting the parent blueprint. Exported as Alphabetical in GetAssetRegistryTags\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "Pointer to the parent class that the generated class should derive from. This *can* be null under rare circumstances,\none such case can be created by creating a blueprint (A) based on another blueprint (B), shutting down the editor, and\ndeleting the parent blueprint. Exported as Alphabetical in GetAssetRegistryTags" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlueprintType_MetaData[] = {
		{ "Comment", "/** The type of this blueprint */" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "The type of this blueprint" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRecompileOnLoad_MetaData[] = {
		{ "Comment", "/** Whether or not this blueprint should recompile itself on load */" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "Whether or not this blueprint should recompile itself on load" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasBeenRegenerated_MetaData[] = {
		{ "Comment", "/** When the class generated by this blueprint is loaded, it will be recompiled the first time.  After that initial recompile, subsequent loads will skip the regeneration step */" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "When the class generated by this blueprint is loaded, it will be recompiled the first time.  After that initial recompile, subsequent loads will skip the regeneration step" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsRegeneratingOnLoad_MetaData[] = {
		{ "Comment", "/** State flag to indicate whether or not the Blueprint is currently being regenerated on load */" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "State flag to indicate whether or not the Blueprint is currently being regenerated on load" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBeingCompiled_MetaData[] = {
		{ "Comment", "/** The blueprint is currently compiled */" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "The blueprint is currently compiled" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsNewlyCreated_MetaData[] = {
		{ "Comment", "/** Whether or not this blueprint is newly created, and hasn't been opened in an editor yet */" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "Whether or not this blueprint is newly created, and hasn't been opened in an editor yet" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bForceFullEditor_MetaData[] = {
		{ "Comment", "/** Whether to force opening the full (non data-only) editor for this blueprint. */" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "Whether to force opening the full (non data-only) editor for this blueprint." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bQueuedForCompilation_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRunConstructionScriptOnDrag_MetaData[] = {
		{ "Category", "BlueprintOptions" },
		{ "Comment", "/**whether or not you want to continuously rerun the construction script for an actor as you drag it in the editor, or only when the drag operation is complete*/" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "whether or not you want to continuously rerun the construction script for an actor as you drag it in the editor, or only when the drag operation is complete" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRunConstructionScriptInSequencer_MetaData[] = {
		{ "Category", "BlueprintOptions" },
		{ "Comment", "/**whether or not you want to continuously rerun the construction script for an actor in sequencer*/" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "whether or not you want to continuously rerun the construction script for an actor in sequencer" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateConstClass_MetaData[] = {
		{ "Category", "ClassOptions" },
		{ "Comment", "/** Whether or not this blueprint's class is a const class or not.  Should set CLASS_Const in the KismetCompiler. */" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "Whether or not this blueprint's class is a const class or not.  Should set CLASS_Const in the KismetCompiler." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateAbstractClass_MetaData[] = {
		{ "Category", "ClassOptions" },
		{ "Comment", "/** Whether or not this blueprint's class is a abstract class or not.  Should set CLASS_Abstract in the KismetCompiler. */" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "Whether or not this blueprint's class is a abstract class or not.  Should set CLASS_Abstract in the KismetCompiler." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDisplayCompilePIEWarning_MetaData[] = {
		{ "Comment", "/** TRUE to show a warning when attempting to start in PIE and there is a compiler error on this Blueprint */" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "TRUE to show a warning when attempting to start in PIE and there is a compiler error on this Blueprint" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDeprecate_MetaData[] = {
		{ "Category", "ClassOptions" },
		{ "Comment", "/** Deprecates the Blueprint, marking the generated class with the CLASS_Deprecated flag */" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "Deprecates the Blueprint, marking the generated class with the CLASS_Deprecated flag" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDuplicatingReadOnly_MetaData[] = {
		{ "Comment", "/** \n\x09 * Flag indicating that a read only duplicate of this blueprint is being created, used to disable logic in ::PostDuplicate,\n\x09 *\n\x09 * This flag needs to be copied on duplication (because it's the duplicated object that we're disabling on PostDuplicate),\n\x09 * but we don't *need* to serialize it for permanent objects.\n\x09 *\n\x09 * Without setting this flag a blueprint will be marked dirty when it is duplicated and if saved while in this dirty\n\x09 * state you will not be able to open the blueprint. More specifically, UClass::Rename (called by DestroyGeneratedClass)\n\x09 * sets a dirty flag on the package. Once saved the package will fail to open because some unnamed objects are present in\n\x09 * the pacakge.\n\x09 *\n\x09 * This flag can be used to avoid the package being marked as dirty in the first place. Ideally PostDuplicateObject\n\x09 * would not rename classes that are still in use by the original object.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "Flag indicating that a read only duplicate of this blueprint is being created, used to disable logic in ::PostDuplicate,\n\nThis flag needs to be copied on duplication (because it's the duplicated object that we're disabling on PostDuplicate),\nbut we don't *need* to serialize it for permanent objects.\n\nWithout setting this flag a blueprint will be marked dirty when it is duplicated and if saved while in this dirty\nstate you will not be able to open the blueprint. More specifically, UClass::Rename (called by DestroyGeneratedClass)\nsets a dirty flag on the package. Once saved the package will fail to open because some unnamed objects are present in\nthe pacakge.\n\nThis flag can be used to avoid the package being marked as dirty in the first place. Ideally PostDuplicateObject\nwould not rename classes that are still in use by the original object." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShouldCookPropertyGuidsValue_MetaData[] = {
		{ "Category", "ClassOptions" },
		{ "Comment", "/**\n\x09 * Whether to include the property GUIDs for the generated class in a cooked build.\n\x09 * @note This option may slightly increase memory usage in a cooked build, but can avoid needing to add CoreRedirect data for Blueprint classes stored within SaveGame archives.\n\x09 */" },
		{ "DisplayName", "Should Cook Property Guids?" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "Whether to include the property GUIDs for the generated class in a cooked build.\n@note This option may slightly increase memory usage in a cooked build, but can avoid needing to add CoreRedirect data for Blueprint classes stored within SaveGame archives." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NativizationFlag_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompileMode_MetaData[] = {
		{ "Category", "ClassOptions" },
		{ "Comment", "/** The mode that will be used when compiling this class. */" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "The mode that will be used when compiling this class." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[] = {
		{ "Comment", "/** The current status of this blueprint */" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "The current status of this blueprint" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlueprintDisplayName_MetaData[] = {
		{ "Category", "BlueprintOptions" },
		{ "Comment", "/** Overrides the BP's display name in the editor UI */" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "Overrides the BP's display name in the editor UI" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlueprintDescription_MetaData[] = {
		{ "Category", "BlueprintOptions" },
		{ "Comment", "/** Shows up in the content browser tooltip when the blueprint is hovered */" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "MultiLine", "TRUE" },
		{ "ToolTip", "Shows up in the content browser tooltip when the blueprint is hovered" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlueprintNamespace_MetaData[] = {
		{ "Category", "BlueprintOptions" },
		{ "Comment", "/** The namespace of this blueprint (if set, the Blueprint will be treated differently for the context menu) */" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "The namespace of this blueprint (if set, the Blueprint will be treated differently for the context menu)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlueprintCategory_MetaData[] = {
		{ "Category", "BlueprintOptions" },
		{ "Comment", "/** The category of the Blueprint, used to organize this Blueprint class when displayed in palette windows */" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "The category of the Blueprint, used to organize this Blueprint class when displayed in palette windows" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HideCategories_MetaData[] = {
		{ "Category", "BlueprintOptions" },
		{ "Comment", "/** Additional HideCategories. These are added to HideCategories from parent. */" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "Additional HideCategories. These are added to HideCategories from parent." },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlueprintSystemVersion_MetaData[] = {
		{ "Comment", "/** The version of the blueprint system that was used to  create this blueprint */" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "The version of the blueprint system that was used to  create this blueprint" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SimpleConstructionScript_MetaData[] = {
		{ "Comment", "/** 'Simple' construction script - graph of components to instance */" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "'Simple' construction script - graph of components to instance" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UbergraphPages_MetaData[] = {
		{ "Comment", "/** Set of pages that combine into a single uber-graph */" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "Set of pages that combine into a single uber-graph" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FunctionGraphs_MetaData[] = {
		{ "Comment", "/** Set of functions implemented for this class graphically */" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "Set of functions implemented for this class graphically" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DelegateSignatureGraphs_MetaData[] = {
		{ "Comment", "/** Graphs of signatures for delegates */" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "Graphs of signatures for delegates" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MacroGraphs_MetaData[] = {
		{ "Comment", "/** Set of macros implemented for this class */" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "Set of macros implemented for this class" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntermediateGeneratedGraphs_MetaData[] = {
		{ "Comment", "/** Set of functions actually compiled for this class */" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "Set of functions actually compiled for this class" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventGraphs_MetaData[] = {
		{ "Comment", "/** Set of functions actually compiled for this class */" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "Set of functions actually compiled for this class" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PRIVATE_CachedMacroInfo_MetaData[] = {
		{ "Comment", "/** Cached cosmetic information about macro graphs, use GetCosmeticInfoForMacro() to access */" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "Cached cosmetic information about macro graphs, use GetCosmeticInfoForMacro() to access" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComponentTemplates_MetaData[] = {
		{ "Comment", "/** Array of component template objects, used by AddComponent function */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "Array of component template objects, used by AddComponent function" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Timelines_MetaData[] = {
		{ "Comment", "/** Array of templates for timelines that should be created */" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "Array of templates for timelines that should be created" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComponentClassOverrides_MetaData[] = {
		{ "Comment", "/** Array of blueprint overrides of component classes in parent classes */" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "Array of blueprint overrides of component classes in parent classes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InheritableComponentHandler_MetaData[] = {
		{ "Comment", "/** Stores data to override (in children classes) components (created by SCS) from parent classes */" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "Stores data to override (in children classes) components (created by SCS) from parent classes" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewVariables_MetaData[] = {
		{ "Comment", "/** Array of new variables to be added to generated class */" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "Array of new variables to be added to generated class" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CategorySorting_MetaData[] = {
		{ "Comment", "/** Array of user sorted categories */" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "Array of user sorted categories" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImportedNamespaces_MetaData[] = {
		{ "Comment", "/** Namespaces imported by this blueprint */" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "Namespaces imported by this blueprint" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImplementedInterfaces_MetaData[] = {
		{ "Comment", "/** Array of info about the interfaces we implement in this blueprint */" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "Array of info about the interfaces we implement in this blueprint" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastEditedDocuments_MetaData[] = {
		{ "Comment", "/** Set of documents that were being edited in this blueprint, so we can open them right away */" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "Set of documents that were being edited in this blueprint, so we can open them right away" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bookmarks_MetaData[] = {
		{ "Comment", "/** Bookmark data */" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "Bookmark data" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BookmarkNodes_MetaData[] = {
		{ "Comment", "/** Bookmark nodes (for display) */" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "Bookmark nodes (for display)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Breakpoints_MetaData[] = {
		{ "Comment", "// moved to FPerBlueprintSettings\n" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "moved to FPerBlueprintSettings" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WatchedPins_MetaData[] = {
		{ "Comment", "// moved to FPerBlueprintSettings\n" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "moved to FPerBlueprintSettings" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeprecatedPinWatches_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComponentTemplateNameIndex_MetaData[] = {
		{ "Comment", "/** Index map for component template names */" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "Index map for component template names" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldToNewComponentTemplateNames_MetaData[] = {
		{ "Comment", "/** Maps old to new component template names */" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "Maps old to new component template names" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Extensions_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThumbnailInfo_MetaData[] = {
		{ "Category", "Thumbnail" },
		{ "Comment", "/** Information for thumbnail rendering */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "Information for thumbnail rendering" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CrcLastCompiledCDO_MetaData[] = {
		{ "Comment", "/** CRC for CDO calculated right after the latest compilation used by Reinstancer to check if default values were changed */" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "CRC for CDO calculated right after the latest compilation used by Reinstancer to check if default values were changed" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CrcLastCompiledSignature_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCachedDependenciesUpToDate_MetaData[] = {
		{ "Comment", "/**\n\x09 * Transient flag that indicates whether or not the internal dependency\n\x09 * cache needs to be updated. This is not carried forward by duplication so\n\x09 * that the post-duplicate compile path is forced to reinitialize the cache.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "Transient flag that indicates whether or not the internal dependency\ncache needs to be updated. This is not carried forward by duplication so\nthat the post-duplicate compile path is forced to reinitialize the cache." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedDependencies_MetaData[] = {
		{ "Comment", "/**\n\x09 * Set of blueprints that we reference - i.e. blueprints that we have\n\x09 * some kind of reference to (variable of that blueprints type or function\n\x09 * call\n\x09 *\n\x09 * We need this to be serializable so that its references can be collected.\n\x09 *\n\x09 * This is intentionally marked 'duplicatetransient' so that it won't carry\n\x09 * over to a duplicated Blueprint object. The post-duplicate compile path\n\x09 * will instead regenerate this set to be relative to the duplicated object.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "Set of blueprints that we reference - i.e. blueprints that we have\nsome kind of reference to (variable of that blueprints type or function\ncall\n\nWe need this to be serializable so that its references can be collected.\n\nThis is intentionally marked 'duplicatetransient' so that it won't carry\nover to a duplicated Blueprint object. The post-duplicate compile path\nwill instead regenerate this set to be relative to the duplicated object." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedDependents_MetaData[] = {
		{ "Comment", "/**\n\x09 * Transient cache of dependent blueprints - i.e. blueprints that call\n\x09 * functions declared in this blueprint. Used to speed up compilation checks\n\x09 *\n\x09 * This is intentionally marked 'duplicatetransient' so that it won't carry\n\x09 * over to a duplicated Blueprint object. However, the post-duplicate compile\n\x09 * path will not regenerate this set, since it is populated by each dependent\n\x09 * Blueprint's compile. In this case, a duplicated Blueprint equates to a\n\x09 * new Blueprint, so it won't initially have any dependents to include here.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "Transient cache of dependent blueprints - i.e. blueprints that call\nfunctions declared in this blueprint. Used to speed up compilation checks\n\nThis is intentionally marked 'duplicatetransient' so that it won't carry\nover to a duplicated Blueprint object. However, the post-duplicate compile\npath will not regenerate this set, since it is populated by each dependent\nBlueprint's compile. In this case, a duplicated Blueprint equates to a\nnew Blueprint, so it won't initially have any dependents to include here." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedUDSDependencies_MetaData[] = {
		{ "Comment", "/**\n\x09 * User Defined Structures the blueprint depends on\n\x09 *\n\x09 * This is intentionally marked 'duplicatetransient' so that it won't carry\n\x09 * over to a duplicated Blueprint object. The post-duplicate compile path\n\x09 * will instead regenerate this set to be relative to the duplicated object.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "User Defined Structures the blueprint depends on\n\nThis is intentionally marked 'duplicatetransient' so that it won't carry\nover to a duplicated Blueprint object. The post-duplicate compile path\nwill instead regenerate this set to be relative to the duplicated object." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OriginalClass_MetaData[] = {
		{ "Comment", "// If this BP is just a duplicate created for a specific compilation, the reference to original GeneratedClass is needed\n" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "If this BP is just a duplicate created for a specific compilation, the reference to original GeneratedClass is needed" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ParentClass;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BlueprintType;
	static void NewProp_bRecompileOnLoad_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRecompileOnLoad;
	static void NewProp_bHasBeenRegenerated_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasBeenRegenerated;
	static void NewProp_bIsRegeneratingOnLoad_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsRegeneratingOnLoad;
#if WITH_EDITORONLY_DATA
	static void NewProp_bBeingCompiled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBeingCompiled;
	static void NewProp_bIsNewlyCreated_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsNewlyCreated;
	static void NewProp_bForceFullEditor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceFullEditor;
	static void NewProp_bQueuedForCompilation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bQueuedForCompilation;
	static void NewProp_bRunConstructionScriptOnDrag_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRunConstructionScriptOnDrag;
	static void NewProp_bRunConstructionScriptInSequencer_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRunConstructionScriptInSequencer;
	static void NewProp_bGenerateConstClass_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateConstClass;
	static void NewProp_bGenerateAbstractClass_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateAbstractClass;
	static void NewProp_bDisplayCompilePIEWarning_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisplayCompilePIEWarning;
	static void NewProp_bDeprecate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDeprecate;
	static void NewProp_bDuplicatingReadOnly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDuplicatingReadOnly;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ShouldCookPropertyGuidsValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ShouldCookPropertyGuidsValue;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NativizationFlag_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NativizationFlag;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CompileMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CompileMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Status;
	static const UECodeGen_Private::FStrPropertyParams NewProp_BlueprintDisplayName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_BlueprintDescription;
	static const UECodeGen_Private::FStrPropertyParams NewProp_BlueprintNamespace;
	static const UECodeGen_Private::FStrPropertyParams NewProp_BlueprintCategory;
	static const UECodeGen_Private::FStrPropertyParams NewProp_HideCategories_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_HideCategories;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_BlueprintSystemVersion;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SimpleConstructionScript;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UbergraphPages_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_UbergraphPages;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FunctionGraphs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FunctionGraphs;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DelegateSignatureGraphs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DelegateSignatureGraphs;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MacroGraphs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MacroGraphs;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IntermediateGeneratedGraphs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_IntermediateGeneratedGraphs;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EventGraphs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_EventGraphs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PRIVATE_CachedMacroInfo_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PRIVATE_CachedMacroInfo_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_PRIVATE_CachedMacroInfo;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ComponentTemplates_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ComponentTemplates;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Timelines_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Timelines;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ComponentClassOverrides_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ComponentClassOverrides;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InheritableComponentHandler;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewVariables_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NewVariables;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CategorySorting_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CategorySorting;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ImportedNamespaces_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_ImportedNamespaces;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ImplementedInterfaces_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ImplementedInterfaces;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LastEditedDocuments_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LastEditedDocuments;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Bookmarks_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Bookmarks_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Bookmarks;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BookmarkNodes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BookmarkNodes;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Breakpoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Breakpoints;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WatchedPins_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_WatchedPins;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DeprecatedPinWatches_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DeprecatedPinWatches;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ComponentTemplateNameIndex_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ComponentTemplateNameIndex_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ComponentTemplateNameIndex;
	static const UECodeGen_Private::FNamePropertyParams NewProp_OldToNewComponentTemplateNames_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_OldToNewComponentTemplateNames_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_OldToNewComponentTemplateNames;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Extensions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Extensions;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ThumbnailInfo;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_CrcLastCompiledCDO;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_CrcLastCompiledSignature;
	static void NewProp_bCachedDependenciesUpToDate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCachedDependenciesUpToDate;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_CachedDependencies_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_CachedDependencies;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_CachedDependents_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_CachedDependents;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_CachedUDSDependencies_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_CachedUDSDependencies;
	static const UECodeGen_Private::FClassPropertyParams NewProp_OriginalClass;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlueprint>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_ParentClass = { "ParentClass", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlueprint, ParentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentClass_MetaData), NewProp_ParentClass_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_BlueprintType = { "BlueprintType", nullptr, (EPropertyFlags)0x0010010000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlueprint, BlueprintType), Z_Construct_UEnum_Engine_EBlueprintType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlueprintType_MetaData), NewProp_BlueprintType_MetaData) }; // 3915063642
void Z_Construct_UClass_UBlueprint_Statics::NewProp_bRecompileOnLoad_SetBit(void* Obj)
{
	((UBlueprint*)Obj)->bRecompileOnLoad = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_bRecompileOnLoad = { "bRecompileOnLoad", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UBlueprint), &Z_Construct_UClass_UBlueprint_Statics::NewProp_bRecompileOnLoad_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRecompileOnLoad_MetaData), NewProp_bRecompileOnLoad_MetaData) };
void Z_Construct_UClass_UBlueprint_Statics::NewProp_bHasBeenRegenerated_SetBit(void* Obj)
{
	((UBlueprint*)Obj)->bHasBeenRegenerated = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_bHasBeenRegenerated = { "bHasBeenRegenerated", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UBlueprint), &Z_Construct_UClass_UBlueprint_Statics::NewProp_bHasBeenRegenerated_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasBeenRegenerated_MetaData), NewProp_bHasBeenRegenerated_MetaData) };
void Z_Construct_UClass_UBlueprint_Statics::NewProp_bIsRegeneratingOnLoad_SetBit(void* Obj)
{
	((UBlueprint*)Obj)->bIsRegeneratingOnLoad = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_bIsRegeneratingOnLoad = { "bIsRegeneratingOnLoad", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UBlueprint), &Z_Construct_UClass_UBlueprint_Statics::NewProp_bIsRegeneratingOnLoad_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsRegeneratingOnLoad_MetaData), NewProp_bIsRegeneratingOnLoad_MetaData) };
#if WITH_EDITORONLY_DATA
void Z_Construct_UClass_UBlueprint_Statics::NewProp_bBeingCompiled_SetBit(void* Obj)
{
	((UBlueprint*)Obj)->bBeingCompiled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_bBeingCompiled = { "bBeingCompiled", nullptr, (EPropertyFlags)0x0010000800002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UBlueprint), &Z_Construct_UClass_UBlueprint_Statics::NewProp_bBeingCompiled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBeingCompiled_MetaData), NewProp_bBeingCompiled_MetaData) };
void Z_Construct_UClass_UBlueprint_Statics::NewProp_bIsNewlyCreated_SetBit(void* Obj)
{
	((UBlueprint*)Obj)->bIsNewlyCreated = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_bIsNewlyCreated = { "bIsNewlyCreated", nullptr, (EPropertyFlags)0x0010000800002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UBlueprint), &Z_Construct_UClass_UBlueprint_Statics::NewProp_bIsNewlyCreated_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsNewlyCreated_MetaData), NewProp_bIsNewlyCreated_MetaData) };
void Z_Construct_UClass_UBlueprint_Statics::NewProp_bForceFullEditor_SetBit(void* Obj)
{
	((UBlueprint*)Obj)->bForceFullEditor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_bForceFullEditor = { "bForceFullEditor", nullptr, (EPropertyFlags)0x0010000800002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UBlueprint), &Z_Construct_UClass_UBlueprint_Statics::NewProp_bForceFullEditor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bForceFullEditor_MetaData), NewProp_bForceFullEditor_MetaData) };
void Z_Construct_UClass_UBlueprint_Statics::NewProp_bQueuedForCompilation_SetBit(void* Obj)
{
	((UBlueprint*)Obj)->bQueuedForCompilation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_bQueuedForCompilation = { "bQueuedForCompilation", nullptr, (EPropertyFlags)0x0010000800002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UBlueprint), &Z_Construct_UClass_UBlueprint_Statics::NewProp_bQueuedForCompilation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bQueuedForCompilation_MetaData), NewProp_bQueuedForCompilation_MetaData) };
void Z_Construct_UClass_UBlueprint_Statics::NewProp_bRunConstructionScriptOnDrag_SetBit(void* Obj)
{
	((UBlueprint*)Obj)->bRunConstructionScriptOnDrag = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_bRunConstructionScriptOnDrag = { "bRunConstructionScriptOnDrag", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UBlueprint), &Z_Construct_UClass_UBlueprint_Statics::NewProp_bRunConstructionScriptOnDrag_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRunConstructionScriptOnDrag_MetaData), NewProp_bRunConstructionScriptOnDrag_MetaData) };
void Z_Construct_UClass_UBlueprint_Statics::NewProp_bRunConstructionScriptInSequencer_SetBit(void* Obj)
{
	((UBlueprint*)Obj)->bRunConstructionScriptInSequencer = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_bRunConstructionScriptInSequencer = { "bRunConstructionScriptInSequencer", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UBlueprint), &Z_Construct_UClass_UBlueprint_Statics::NewProp_bRunConstructionScriptInSequencer_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRunConstructionScriptInSequencer_MetaData), NewProp_bRunConstructionScriptInSequencer_MetaData) };
void Z_Construct_UClass_UBlueprint_Statics::NewProp_bGenerateConstClass_SetBit(void* Obj)
{
	((UBlueprint*)Obj)->bGenerateConstClass = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_bGenerateConstClass = { "bGenerateConstClass", nullptr, (EPropertyFlags)0x0010040800000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UBlueprint), &Z_Construct_UClass_UBlueprint_Statics::NewProp_bGenerateConstClass_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGenerateConstClass_MetaData), NewProp_bGenerateConstClass_MetaData) };
void Z_Construct_UClass_UBlueprint_Statics::NewProp_bGenerateAbstractClass_SetBit(void* Obj)
{
	((UBlueprint*)Obj)->bGenerateAbstractClass = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_bGenerateAbstractClass = { "bGenerateAbstractClass", nullptr, (EPropertyFlags)0x0010040800000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UBlueprint), &Z_Construct_UClass_UBlueprint_Statics::NewProp_bGenerateAbstractClass_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGenerateAbstractClass_MetaData), NewProp_bGenerateAbstractClass_MetaData) };
void Z_Construct_UClass_UBlueprint_Statics::NewProp_bDisplayCompilePIEWarning_SetBit(void* Obj)
{
	((UBlueprint*)Obj)->bDisplayCompilePIEWarning = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_bDisplayCompilePIEWarning = { "bDisplayCompilePIEWarning", nullptr, (EPropertyFlags)0x0010000800002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UBlueprint), &Z_Construct_UClass_UBlueprint_Statics::NewProp_bDisplayCompilePIEWarning_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDisplayCompilePIEWarning_MetaData), NewProp_bDisplayCompilePIEWarning_MetaData) };
void Z_Construct_UClass_UBlueprint_Statics::NewProp_bDeprecate_SetBit(void* Obj)
{
	((UBlueprint*)Obj)->bDeprecate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_bDeprecate = { "bDeprecate", nullptr, (EPropertyFlags)0x0010040800000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UBlueprint), &Z_Construct_UClass_UBlueprint_Statics::NewProp_bDeprecate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDeprecate_MetaData), NewProp_bDeprecate_MetaData) };
void Z_Construct_UClass_UBlueprint_Statics::NewProp_bDuplicatingReadOnly_SetBit(void* Obj)
{
	((UBlueprint*)Obj)->bDuplicatingReadOnly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_bDuplicatingReadOnly = { "bDuplicatingReadOnly", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UBlueprint), &Z_Construct_UClass_UBlueprint_Statics::NewProp_bDuplicatingReadOnly_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDuplicatingReadOnly_MetaData), NewProp_bDuplicatingReadOnly_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_ShouldCookPropertyGuidsValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_ShouldCookPropertyGuidsValue = { "ShouldCookPropertyGuidsValue", nullptr, (EPropertyFlags)0x0010040800000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlueprint, ShouldCookPropertyGuidsValue), Z_Construct_UEnum_Engine_EShouldCookBlueprintPropertyGuids, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShouldCookPropertyGuidsValue_MetaData), NewProp_ShouldCookPropertyGuidsValue_MetaData) }; // 2744896052
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_NativizationFlag_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_NativizationFlag = { "NativizationFlag", nullptr, (EPropertyFlags)0x0010000800002000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlueprint, NativizationFlag), Z_Construct_UEnum_Engine_EBlueprintNativizationFlag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NativizationFlag_MetaData), NewProp_NativizationFlag_MetaData) }; // 939624309
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_CompileMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_CompileMode = { "CompileMode", nullptr, (EPropertyFlags)0x0010040800000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlueprint, CompileMode), Z_Construct_UEnum_Engine_EBlueprintCompileMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompileMode_MetaData), NewProp_CompileMode_MetaData) }; // 290272264
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000800002000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlueprint, Status), Z_Construct_UEnum_Engine_EBlueprintStatus, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Status_MetaData), NewProp_Status_MetaData) }; // 2842544729
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_BlueprintDisplayName = { "BlueprintDisplayName", nullptr, (EPropertyFlags)0x0010000800200001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlueprint, BlueprintDisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlueprintDisplayName_MetaData), NewProp_BlueprintDisplayName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_BlueprintDescription = { "BlueprintDescription", nullptr, (EPropertyFlags)0x0010000800200001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlueprint, BlueprintDescription), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlueprintDescription_MetaData), NewProp_BlueprintDescription_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_BlueprintNamespace = { "BlueprintNamespace", nullptr, (EPropertyFlags)0x0010010800000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlueprint, BlueprintNamespace), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlueprintNamespace_MetaData), NewProp_BlueprintNamespace_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_BlueprintCategory = { "BlueprintCategory", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlueprint, BlueprintCategory), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlueprintCategory_MetaData), NewProp_BlueprintCategory_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_HideCategories_Inner = { "HideCategories", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_HideCategories = { "HideCategories", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlueprint, HideCategories), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HideCategories_MetaData), NewProp_HideCategories_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_BlueprintSystemVersion = { "BlueprintSystemVersion", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlueprint, BlueprintSystemVersion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlueprintSystemVersion_MetaData), NewProp_BlueprintSystemVersion_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_SimpleConstructionScript = { "SimpleConstructionScript", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlueprint, SimpleConstructionScript), Z_Construct_UClass_USimpleConstructionScript_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SimpleConstructionScript_MetaData), NewProp_SimpleConstructionScript_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_UbergraphPages_Inner = { "UbergraphPages", nullptr, (EPropertyFlags)0x0104000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UEdGraph_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_UbergraphPages = { "UbergraphPages", nullptr, (EPropertyFlags)0x0114000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlueprint, UbergraphPages), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UbergraphPages_MetaData), NewProp_UbergraphPages_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_FunctionGraphs_Inner = { "FunctionGraphs", nullptr, (EPropertyFlags)0x0104000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UEdGraph_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_FunctionGraphs = { "FunctionGraphs", nullptr, (EPropertyFlags)0x0114000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlueprint, FunctionGraphs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FunctionGraphs_MetaData), NewProp_FunctionGraphs_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_DelegateSignatureGraphs_Inner = { "DelegateSignatureGraphs", nullptr, (EPropertyFlags)0x0104000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UEdGraph_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_DelegateSignatureGraphs = { "DelegateSignatureGraphs", nullptr, (EPropertyFlags)0x0114000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlueprint, DelegateSignatureGraphs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DelegateSignatureGraphs_MetaData), NewProp_DelegateSignatureGraphs_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_MacroGraphs_Inner = { "MacroGraphs", nullptr, (EPropertyFlags)0x0104000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UEdGraph_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_MacroGraphs = { "MacroGraphs", nullptr, (EPropertyFlags)0x0114000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlueprint, MacroGraphs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MacroGraphs_MetaData), NewProp_MacroGraphs_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_IntermediateGeneratedGraphs_Inner = { "IntermediateGeneratedGraphs", nullptr, (EPropertyFlags)0x0104000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UEdGraph_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_IntermediateGeneratedGraphs = { "IntermediateGeneratedGraphs", nullptr, (EPropertyFlags)0x0114000800202000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlueprint, IntermediateGeneratedGraphs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntermediateGeneratedGraphs_MetaData), NewProp_IntermediateGeneratedGraphs_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_EventGraphs_Inner = { "EventGraphs", nullptr, (EPropertyFlags)0x0104000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UEdGraph_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_EventGraphs = { "EventGraphs", nullptr, (EPropertyFlags)0x0114000800202000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlueprint, EventGraphs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventGraphs_MetaData), NewProp_EventGraphs_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_PRIVATE_CachedMacroInfo_ValueProp = { "PRIVATE_CachedMacroInfo", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FBlueprintMacroCosmeticInfo, METADATA_PARAMS(0, nullptr) }; // 2884658367
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_PRIVATE_CachedMacroInfo_Key_KeyProp = { "PRIVATE_CachedMacroInfo_Key", nullptr, (EPropertyFlags)0x0004000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UEdGraph_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_PRIVATE_CachedMacroInfo = { "PRIVATE_CachedMacroInfo", nullptr, (EPropertyFlags)0x0010000800002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlueprint, PRIVATE_CachedMacroInfo), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PRIVATE_CachedMacroInfo_MetaData), NewProp_PRIVATE_CachedMacroInfo_MetaData) }; // 2884658367
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_ComponentTemplates_Inner = { "ComponentTemplates", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_ComponentTemplates = { "ComponentTemplates", nullptr, (EPropertyFlags)0x0114008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlueprint, ComponentTemplates), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComponentTemplates_MetaData), NewProp_ComponentTemplates_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_Timelines_Inner = { "Timelines", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UTimelineTemplate_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_Timelines = { "Timelines", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlueprint, Timelines), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Timelines_MetaData), NewProp_Timelines_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_ComponentClassOverrides_Inner = { "ComponentClassOverrides", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBPComponentClassOverride, METADATA_PARAMS(0, nullptr) }; // 1968656929
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_ComponentClassOverrides = { "ComponentClassOverrides", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlueprint, ComponentClassOverrides), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComponentClassOverrides_MetaData), NewProp_ComponentClassOverrides_MetaData) }; // 1968656929
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_InheritableComponentHandler = { "InheritableComponentHandler", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlueprint, InheritableComponentHandler), Z_Construct_UClass_UInheritableComponentHandler_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InheritableComponentHandler_MetaData), NewProp_InheritableComponentHandler_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_NewVariables_Inner = { "NewVariables", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBPVariableDescription, METADATA_PARAMS(0, nullptr) }; // 25162506
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_NewVariables = { "NewVariables", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlueprint, NewVariables), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewVariables_MetaData), NewProp_NewVariables_MetaData) }; // 25162506
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_CategorySorting_Inner = { "CategorySorting", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_CategorySorting = { "CategorySorting", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlueprint, CategorySorting), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CategorySorting_MetaData), NewProp_CategorySorting_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_ImportedNamespaces_ElementProp = { "ImportedNamespaces", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_ImportedNamespaces = { "ImportedNamespaces", nullptr, (EPropertyFlags)0x0010010800000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlueprint, ImportedNamespaces), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImportedNamespaces_MetaData), NewProp_ImportedNamespaces_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_ImplementedInterfaces_Inner = { "ImplementedInterfaces", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBPInterfaceDescription, METADATA_PARAMS(0, nullptr) }; // 1301257875
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_ImplementedInterfaces = { "ImplementedInterfaces", nullptr, (EPropertyFlags)0x0010010800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlueprint, ImplementedInterfaces), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImplementedInterfaces_MetaData), NewProp_ImplementedInterfaces_MetaData) }; // 1301257875
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_LastEditedDocuments_Inner = { "LastEditedDocuments", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FEditedDocumentInfo, METADATA_PARAMS(0, nullptr) }; // 1045714291
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_LastEditedDocuments = { "LastEditedDocuments", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlueprint, LastEditedDocuments), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastEditedDocuments_MetaData), NewProp_LastEditedDocuments_MetaData) }; // 1045714291
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_Bookmarks_ValueProp = { "Bookmarks", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FEditedDocumentInfo, METADATA_PARAMS(0, nullptr) }; // 1045714291
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_Bookmarks_Key_KeyProp = { "Bookmarks_Key", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_Bookmarks = { "Bookmarks", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlueprint, Bookmarks), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bookmarks_MetaData), NewProp_Bookmarks_MetaData) }; // 1045714291
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_BookmarkNodes_Inner = { "BookmarkNodes", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBPEditorBookmarkNode, METADATA_PARAMS(0, nullptr) }; // 3276982716
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_BookmarkNodes = { "BookmarkNodes", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlueprint, BookmarkNodes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BookmarkNodes_MetaData), NewProp_BookmarkNodes_MetaData) }; // 3276982716
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_Breakpoints_Inner = { "Breakpoints", nullptr, (EPropertyFlags)0x0104000820000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UDEPRECATED_Breakpoint_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_Breakpoints = { "Breakpoints", nullptr, (EPropertyFlags)0x0114000820000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlueprint, Breakpoints_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Breakpoints_MetaData), NewProp_Breakpoints_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_WatchedPins_Inner = { "WatchedPins", nullptr, (EPropertyFlags)0x0000000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FEdGraphPinReference, METADATA_PARAMS(0, nullptr) }; // 3539559491
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_WatchedPins = { "WatchedPins", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlueprint, WatchedPins_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WatchedPins_MetaData), NewProp_WatchedPins_MetaData) }; // 3539559491
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_DeprecatedPinWatches_Inner = { "DeprecatedPinWatches", nullptr, (EPropertyFlags)0x0104000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UEdGraphPin_Deprecated_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_DeprecatedPinWatches = { "DeprecatedPinWatches", nullptr, (EPropertyFlags)0x0114000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlueprint, DeprecatedPinWatches), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeprecatedPinWatches_MetaData), NewProp_DeprecatedPinWatches_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_ComponentTemplateNameIndex_ValueProp = { "ComponentTemplateNameIndex", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_ComponentTemplateNameIndex_Key_KeyProp = { "ComponentTemplateNameIndex_Key", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_ComponentTemplateNameIndex = { "ComponentTemplateNameIndex", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlueprint, ComponentTemplateNameIndex), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComponentTemplateNameIndex_MetaData), NewProp_ComponentTemplateNameIndex_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_OldToNewComponentTemplateNames_ValueProp = { "OldToNewComponentTemplateNames", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_OldToNewComponentTemplateNames_Key_KeyProp = { "OldToNewComponentTemplateNames_Key", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_OldToNewComponentTemplateNames = { "OldToNewComponentTemplateNames", nullptr, (EPropertyFlags)0x0010000800002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlueprint, OldToNewComponentTemplateNames), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldToNewComponentTemplateNames_MetaData), NewProp_OldToNewComponentTemplateNames_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_Extensions_Inner = { "Extensions", nullptr, (EPropertyFlags)0x0104000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UBlueprintExtension_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_Extensions = { "Extensions", nullptr, (EPropertyFlags)0x0114000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlueprint, Extensions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Extensions_MetaData), NewProp_Extensions_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_ThumbnailInfo = { "ThumbnailInfo", nullptr, (EPropertyFlags)0x01160008000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlueprint, ThumbnailInfo), Z_Construct_UClass_UThumbnailInfo_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThumbnailInfo_MetaData), NewProp_ThumbnailInfo_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_CrcLastCompiledCDO = { "CrcLastCompiledCDO", nullptr, (EPropertyFlags)0x0010000800202000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlueprint, CrcLastCompiledCDO), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CrcLastCompiledCDO_MetaData), NewProp_CrcLastCompiledCDO_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_CrcLastCompiledSignature = { "CrcLastCompiledSignature", nullptr, (EPropertyFlags)0x0010000800202000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlueprint, CrcLastCompiledSignature), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CrcLastCompiledSignature_MetaData), NewProp_CrcLastCompiledSignature_MetaData) };
void Z_Construct_UClass_UBlueprint_Statics::NewProp_bCachedDependenciesUpToDate_SetBit(void* Obj)
{
	((UBlueprint*)Obj)->bCachedDependenciesUpToDate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_bCachedDependenciesUpToDate = { "bCachedDependenciesUpToDate", nullptr, (EPropertyFlags)0x0010000800202000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBlueprint), &Z_Construct_UClass_UBlueprint_Statics::NewProp_bCachedDependenciesUpToDate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCachedDependenciesUpToDate_MetaData), NewProp_bCachedDependenciesUpToDate_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_CachedDependencies_ElementProp = { "CachedDependencies", nullptr, (EPropertyFlags)0x0004000800000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_CachedDependencies = { "CachedDependencies", nullptr, (EPropertyFlags)0x0014000800202000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlueprint, CachedDependencies), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedDependencies_MetaData), NewProp_CachedDependencies_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_CachedDependents_ElementProp = { "CachedDependents", nullptr, (EPropertyFlags)0x0004000800000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_CachedDependents = { "CachedDependents", nullptr, (EPropertyFlags)0x0014000800202000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlueprint, CachedDependents), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedDependents_MetaData), NewProp_CachedDependents_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_CachedUDSDependencies_ElementProp = { "CachedUDSDependencies", nullptr, (EPropertyFlags)0x0004000800000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UStruct, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_CachedUDSDependencies = { "CachedUDSDependencies", nullptr, (EPropertyFlags)0x0014000800202000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlueprint, CachedUDSDependencies), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedUDSDependencies_MetaData), NewProp_CachedUDSDependencies_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_OriginalClass = { "OriginalClass", nullptr, (EPropertyFlags)0x0114000800202000, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlueprint, OriginalClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OriginalClass_MetaData), NewProp_OriginalClass_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBlueprint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_ParentClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_BlueprintType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_bRecompileOnLoad,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_bHasBeenRegenerated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_bIsRegeneratingOnLoad,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_bBeingCompiled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_bIsNewlyCreated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_bForceFullEditor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_bQueuedForCompilation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_bRunConstructionScriptOnDrag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_bRunConstructionScriptInSequencer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_bGenerateConstClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_bGenerateAbstractClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_bDisplayCompilePIEWarning,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_bDeprecate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_bDuplicatingReadOnly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_ShouldCookPropertyGuidsValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_ShouldCookPropertyGuidsValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_NativizationFlag_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_NativizationFlag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_CompileMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_CompileMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_Status,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_BlueprintDisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_BlueprintDescription,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_BlueprintNamespace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_BlueprintCategory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_HideCategories_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_HideCategories,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_BlueprintSystemVersion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_SimpleConstructionScript,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_UbergraphPages_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_UbergraphPages,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_FunctionGraphs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_FunctionGraphs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_DelegateSignatureGraphs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_DelegateSignatureGraphs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_MacroGraphs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_MacroGraphs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_IntermediateGeneratedGraphs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_IntermediateGeneratedGraphs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_EventGraphs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_EventGraphs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_PRIVATE_CachedMacroInfo_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_PRIVATE_CachedMacroInfo_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_PRIVATE_CachedMacroInfo,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_ComponentTemplates_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_ComponentTemplates,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_Timelines_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_Timelines,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_ComponentClassOverrides_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_ComponentClassOverrides,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_InheritableComponentHandler,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_NewVariables_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_NewVariables,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_CategorySorting_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_CategorySorting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_ImportedNamespaces_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_ImportedNamespaces,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_ImplementedInterfaces_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_ImplementedInterfaces,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_LastEditedDocuments_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_LastEditedDocuments,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_Bookmarks_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_Bookmarks_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_Bookmarks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_BookmarkNodes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_BookmarkNodes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_Breakpoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_Breakpoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_WatchedPins_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_WatchedPins,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_DeprecatedPinWatches_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_DeprecatedPinWatches,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_ComponentTemplateNameIndex_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_ComponentTemplateNameIndex_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_ComponentTemplateNameIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_OldToNewComponentTemplateNames_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_OldToNewComponentTemplateNames_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_OldToNewComponentTemplateNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_Extensions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_Extensions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_ThumbnailInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_CrcLastCompiledCDO,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_CrcLastCompiledSignature,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_bCachedDependenciesUpToDate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_CachedDependencies_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_CachedDependencies,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_CachedDependents_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_CachedDependents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_CachedUDSDependencies_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_CachedUDSDependencies,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_OriginalClass,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprint_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBlueprint_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintCore,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprint_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBlueprint_Statics::ClassParams = {
	&UBlueprint::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBlueprint_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprint_Statics::PropPointers),
	0,
	0x008800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprint_Statics::Class_MetaDataParams), Z_Construct_UClass_UBlueprint_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBlueprint()
{
	if (!Z_Registration_Info_UClass_UBlueprint.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBlueprint.OuterSingleton, Z_Construct_UClass_UBlueprint_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBlueprint.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UBlueprint>()
{
	return UBlueprint::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBlueprint);
UBlueprint::~UBlueprint() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UBlueprint)
// End Class UBlueprint

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Blueprint_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EBlueprintStatus_StaticEnum, TEXT("EBlueprintStatus"), &Z_Registration_Info_UEnum_EBlueprintStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2842544729U) },
		{ EBlueprintType_StaticEnum, TEXT("EBlueprintType"), &Z_Registration_Info_UEnum_EBlueprintType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3915063642U) },
		{ EBlueprintCompileMode_StaticEnum, TEXT("EBlueprintCompileMode"), &Z_Registration_Info_UEnum_EBlueprintCompileMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 290272264U) },
		{ EBlueprintNativizationFlag_StaticEnum, TEXT("EBlueprintNativizationFlag"), &Z_Registration_Info_UEnum_EBlueprintNativizationFlag, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 939624309U) },
		{ EShouldCookBlueprintPropertyGuids_StaticEnum, TEXT("EShouldCookBlueprintPropertyGuids"), &Z_Registration_Info_UEnum_EShouldCookBlueprintPropertyGuids, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2744896052U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FBlueprintMacroCosmeticInfo::StaticStruct, Z_Construct_UScriptStruct_FBlueprintMacroCosmeticInfo_Statics::NewStructOps, TEXT("BlueprintMacroCosmeticInfo"), &Z_Registration_Info_UScriptStruct_BlueprintMacroCosmeticInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBlueprintMacroCosmeticInfo), 2884658367U) },
		{ FBPVariableMetaDataEntry::StaticStruct, Z_Construct_UScriptStruct_FBPVariableMetaDataEntry_Statics::NewStructOps, TEXT("BPVariableMetaDataEntry"), &Z_Registration_Info_UScriptStruct_BPVariableMetaDataEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBPVariableMetaDataEntry), 3809530829U) },
		{ FBPVariableDescription::StaticStruct, Z_Construct_UScriptStruct_FBPVariableDescription_Statics::NewStructOps, TEXT("BPVariableDescription"), &Z_Registration_Info_UScriptStruct_BPVariableDescription, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBPVariableDescription), 25162506U) },
		{ FBPInterfaceDescription::StaticStruct, Z_Construct_UScriptStruct_FBPInterfaceDescription_Statics::NewStructOps, TEXT("BPInterfaceDescription"), &Z_Registration_Info_UScriptStruct_BPInterfaceDescription, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBPInterfaceDescription), 1301257875U) },
		{ FEditedDocumentInfo::StaticStruct, Z_Construct_UScriptStruct_FEditedDocumentInfo_Statics::NewStructOps, TEXT("EditedDocumentInfo"), &Z_Registration_Info_UScriptStruct_EditedDocumentInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEditedDocumentInfo), 1045714291U) },
		{ FBPEditorBookmarkNode::StaticStruct, Z_Construct_UScriptStruct_FBPEditorBookmarkNode_Statics::NewStructOps, TEXT("BPEditorBookmarkNode"), &Z_Registration_Info_UScriptStruct_BPEditorBookmarkNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBPEditorBookmarkNode), 3276982716U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDEPRECATED_Breakpoint, UDEPRECATED_Breakpoint::StaticClass, TEXT("UDEPRECATED_Breakpoint"), &Z_Registration_Info_UClass_UDEPRECATED_Breakpoint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDEPRECATED_Breakpoint), 3335993764U) },
		{ Z_Construct_UClass_UBlueprint, UBlueprint::StaticClass, TEXT("UBlueprint"), &Z_Registration_Info_UClass_UBlueprint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlueprint), 2476596007U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Blueprint_h_1910183336(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Blueprint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Blueprint_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Blueprint_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Blueprint_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Blueprint_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Blueprint_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
