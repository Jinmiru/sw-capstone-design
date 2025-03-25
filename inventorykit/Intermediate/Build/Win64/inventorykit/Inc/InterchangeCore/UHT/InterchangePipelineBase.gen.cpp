// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Interchange/Core/Public/InterchangePipelineBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangePipelineBase() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeBaseNodeContainer_NoRegister();
INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangePipelineBase();
INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangePipelineBase_NoRegister();
INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeResultsContainer_NoRegister();
INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeSourceData_NoRegister();
INTERCHANGECORE_API UEnum* Z_Construct_UEnum_InterchangeCore_EInterchangePipelineContext();
INTERCHANGECORE_API UEnum* Z_Construct_UEnum_InterchangeCore_EInterchangePipelineTask();
INTERCHANGECORE_API UScriptStruct* Z_Construct_UScriptStruct_FInterchangePipelinePropertyStatePerContext();
INTERCHANGECORE_API UScriptStruct* Z_Construct_UScriptStruct_FInterchangePipelinePropertyStates();
UPackage* Z_Construct_UPackage__Script_InterchangeCore();
// End Cross Module References

// Begin Enum EInterchangePipelineTask
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInterchangePipelineTask;
static UEnum* EInterchangePipelineTask_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EInterchangePipelineTask.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EInterchangePipelineTask.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_InterchangeCore_EInterchangePipelineTask, (UObject*)Z_Construct_UPackage__Script_InterchangeCore(), TEXT("EInterchangePipelineTask"));
	}
	return Z_Registration_Info_UEnum_EInterchangePipelineTask.OuterSingleton;
}
template<> INTERCHANGECORE_API UEnum* StaticEnum<EInterchangePipelineTask>()
{
	return EInterchangePipelineTask_StaticEnum();
}
struct Z_Construct_UEnum_InterchangeCore_EInterchangePipelineTask_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Export.Name", "EInterchangePipelineTask::Export" },
		{ "ModuleRelativePath", "Public/InterchangePipelineBase.h" },
		{ "PostFactory.Name", "EInterchangePipelineTask::PostFactory" },
		{ "PostImport.Name", "EInterchangePipelineTask::PostImport" },
		{ "PostTranslator.Name", "EInterchangePipelineTask::PostTranslator" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EInterchangePipelineTask::PostTranslator", (int64)EInterchangePipelineTask::PostTranslator },
		{ "EInterchangePipelineTask::PostFactory", (int64)EInterchangePipelineTask::PostFactory },
		{ "EInterchangePipelineTask::PostImport", (int64)EInterchangePipelineTask::PostImport },
		{ "EInterchangePipelineTask::Export", (int64)EInterchangePipelineTask::Export },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_InterchangeCore_EInterchangePipelineTask_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_InterchangeCore,
	nullptr,
	"EInterchangePipelineTask",
	"EInterchangePipelineTask",
	Z_Construct_UEnum_InterchangeCore_EInterchangePipelineTask_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_InterchangeCore_EInterchangePipelineTask_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_InterchangeCore_EInterchangePipelineTask_Statics::Enum_MetaDataParams), Z_Construct_UEnum_InterchangeCore_EInterchangePipelineTask_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_InterchangeCore_EInterchangePipelineTask()
{
	if (!Z_Registration_Info_UEnum_EInterchangePipelineTask.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInterchangePipelineTask.InnerSingleton, Z_Construct_UEnum_InterchangeCore_EInterchangePipelineTask_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EInterchangePipelineTask.InnerSingleton;
}
// End Enum EInterchangePipelineTask

// Begin Enum EInterchangePipelineContext
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInterchangePipelineContext;
static UEnum* EInterchangePipelineContext_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EInterchangePipelineContext.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EInterchangePipelineContext.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_InterchangeCore_EInterchangePipelineContext, (UObject*)Z_Construct_UPackage__Script_InterchangeCore(), TEXT("EInterchangePipelineContext"));
	}
	return Z_Registration_Info_UEnum_EInterchangePipelineContext.OuterSingleton;
}
template<> INTERCHANGECORE_API UEnum* StaticEnum<EInterchangePipelineContext>()
{
	return EInterchangePipelineContext_StaticEnum();
}
struct Z_Construct_UEnum_InterchangeCore_EInterchangePipelineContext_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AssetAlternateSkinningImport.Name", "EInterchangePipelineContext::AssetAlternateSkinningImport" },
		{ "AssetAlternateSkinningReimport.Comment", "//The import for custom LOD is there because we use a copy of the asset import data pipeline stack.\n" },
		{ "AssetAlternateSkinningReimport.Name", "EInterchangePipelineContext::AssetAlternateSkinningReimport" },
		{ "AssetAlternateSkinningReimport.ToolTip", "The import for custom LOD is there because we use a copy of the asset import data pipeline stack." },
		{ "AssetCustomLODImport.Name", "EInterchangePipelineContext::AssetCustomLODImport" },
		{ "AssetCustomLODReimport.Comment", "//The import for custom LOD is there because we use a copy of the asset import data pipeline stack.\n" },
		{ "AssetCustomLODReimport.Name", "EInterchangePipelineContext::AssetCustomLODReimport" },
		{ "AssetCustomLODReimport.ToolTip", "The import for custom LOD is there because we use a copy of the asset import data pipeline stack." },
		{ "AssetImport.Comment", "//Default pipeline instance we refer in the project settings pipeline stack. This context should allow editing of the properties states\n" },
		{ "AssetImport.Name", "EInterchangePipelineContext::AssetImport" },
		{ "AssetImport.ToolTip", "Default pipeline instance we refer in the project settings pipeline stack. This context should allow editing of the properties states" },
		{ "AssetReimport.Name", "EInterchangePipelineContext::AssetReimport" },
		{ "ModuleRelativePath", "Public/InterchangePipelineBase.h" },
		{ "None.Name", "EInterchangePipelineContext::None" },
		{ "SceneImport.Name", "EInterchangePipelineContext::SceneImport" },
		{ "SceneReimport.Name", "EInterchangePipelineContext::SceneReimport" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EInterchangePipelineContext::None", (int64)EInterchangePipelineContext::None },
		{ "EInterchangePipelineContext::AssetImport", (int64)EInterchangePipelineContext::AssetImport },
		{ "EInterchangePipelineContext::AssetReimport", (int64)EInterchangePipelineContext::AssetReimport },
		{ "EInterchangePipelineContext::SceneImport", (int64)EInterchangePipelineContext::SceneImport },
		{ "EInterchangePipelineContext::SceneReimport", (int64)EInterchangePipelineContext::SceneReimport },
		{ "EInterchangePipelineContext::AssetCustomLODImport", (int64)EInterchangePipelineContext::AssetCustomLODImport },
		{ "EInterchangePipelineContext::AssetCustomLODReimport", (int64)EInterchangePipelineContext::AssetCustomLODReimport },
		{ "EInterchangePipelineContext::AssetAlternateSkinningImport", (int64)EInterchangePipelineContext::AssetAlternateSkinningImport },
		{ "EInterchangePipelineContext::AssetAlternateSkinningReimport", (int64)EInterchangePipelineContext::AssetAlternateSkinningReimport },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_InterchangeCore_EInterchangePipelineContext_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_InterchangeCore,
	nullptr,
	"EInterchangePipelineContext",
	"EInterchangePipelineContext",
	Z_Construct_UEnum_InterchangeCore_EInterchangePipelineContext_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_InterchangeCore_EInterchangePipelineContext_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_InterchangeCore_EInterchangePipelineContext_Statics::Enum_MetaDataParams), Z_Construct_UEnum_InterchangeCore_EInterchangePipelineContext_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_InterchangeCore_EInterchangePipelineContext()
{
	if (!Z_Registration_Info_UEnum_EInterchangePipelineContext.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInterchangePipelineContext.InnerSingleton, Z_Construct_UEnum_InterchangeCore_EInterchangePipelineContext_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EInterchangePipelineContext.InnerSingleton;
}
// End Enum EInterchangePipelineContext

// Begin ScriptStruct FInterchangePipelinePropertyStatePerContext
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InterchangePipelinePropertyStatePerContext;
class UScriptStruct* FInterchangePipelinePropertyStatePerContext::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InterchangePipelinePropertyStatePerContext.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InterchangePipelinePropertyStatePerContext.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInterchangePipelinePropertyStatePerContext, (UObject*)Z_Construct_UPackage__Script_InterchangeCore(), TEXT("InterchangePipelinePropertyStatePerContext"));
	}
	return Z_Registration_Info_UScriptStruct_InterchangePipelinePropertyStatePerContext.OuterSingleton;
}
template<> INTERCHANGECORE_API UScriptStruct* StaticStruct<FInterchangePipelinePropertyStatePerContext>()
{
	return FInterchangePipelinePropertyStatePerContext::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInterchangePipelinePropertyStatePerContext_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/InterchangePipelineBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bVisible_MetaData[] = {
		{ "Category", "Property States" },
		{ "Comment", "/** If true, the property is visible. */" },
		{ "ModuleRelativePath", "Public/InterchangePipelineBase.h" },
		{ "ToolTip", "If true, the property is visible." },
	};
#endif // WITH_METADATA
	static void NewProp_bVisible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisible;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInterchangePipelinePropertyStatePerContext>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FInterchangePipelinePropertyStatePerContext_Statics::NewProp_bVisible_SetBit(void* Obj)
{
	((FInterchangePipelinePropertyStatePerContext*)Obj)->bVisible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInterchangePipelinePropertyStatePerContext_Statics::NewProp_bVisible = { "bVisible", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FInterchangePipelinePropertyStatePerContext), &Z_Construct_UScriptStruct_FInterchangePipelinePropertyStatePerContext_Statics::NewProp_bVisible_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bVisible_MetaData), NewProp_bVisible_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInterchangePipelinePropertyStatePerContext_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangePipelinePropertyStatePerContext_Statics::NewProp_bVisible,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangePipelinePropertyStatePerContext_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInterchangePipelinePropertyStatePerContext_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeCore,
	nullptr,
	&NewStructOps,
	"InterchangePipelinePropertyStatePerContext",
	Z_Construct_UScriptStruct_FInterchangePipelinePropertyStatePerContext_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangePipelinePropertyStatePerContext_Statics::PropPointers),
	sizeof(FInterchangePipelinePropertyStatePerContext),
	alignof(FInterchangePipelinePropertyStatePerContext),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangePipelinePropertyStatePerContext_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInterchangePipelinePropertyStatePerContext_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInterchangePipelinePropertyStatePerContext()
{
	if (!Z_Registration_Info_UScriptStruct_InterchangePipelinePropertyStatePerContext.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InterchangePipelinePropertyStatePerContext.InnerSingleton, Z_Construct_UScriptStruct_FInterchangePipelinePropertyStatePerContext_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InterchangePipelinePropertyStatePerContext.InnerSingleton;
}
// End ScriptStruct FInterchangePipelinePropertyStatePerContext

// Begin ScriptStruct FInterchangePipelinePropertyStates
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InterchangePipelinePropertyStates;
class UScriptStruct* FInterchangePipelinePropertyStates::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InterchangePipelinePropertyStates.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InterchangePipelinePropertyStates.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInterchangePipelinePropertyStates, (UObject*)Z_Construct_UPackage__Script_InterchangeCore(), TEXT("InterchangePipelinePropertyStates"));
	}
	return Z_Registration_Info_UScriptStruct_InterchangePipelinePropertyStates.OuterSingleton;
}
template<> INTERCHANGECORE_API UScriptStruct* StaticStruct<FInterchangePipelinePropertyStates>()
{
	return FInterchangePipelinePropertyStates::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInterchangePipelinePropertyStates_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/InterchangePipelineBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLocked_MetaData[] = {
		{ "Category", "Property States" },
		{ "Comment", "/** If true, the property is locked. */" },
		{ "ModuleRelativePath", "Public/InterchangePipelineBase.h" },
		{ "ToolTip", "If true, the property is locked." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BasicLayoutStates_MetaData[] = {
		{ "Category", "Context Properties States" },
		{ "Comment", "/** The property states for the import context. */" },
		{ "ModuleRelativePath", "Public/InterchangePipelineBase.h" },
		{ "ToolTip", "The property states for the import context." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImportStates_MetaData[] = {
		{ "Category", "Context Properties States" },
		{ "Comment", "/** The property states for the import context */" },
		{ "ModuleRelativePath", "Public/InterchangePipelineBase.h" },
		{ "ToolTip", "The property states for the import context" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReimportStates_MetaData[] = {
		{ "Category", "Context Properties States" },
		{ "Comment", "/** The property states for the reimport context. */" },
		{ "ModuleRelativePath", "Public/InterchangePipelineBase.h" },
		{ "ToolTip", "The property states for the reimport context." },
	};
#endif // WITH_METADATA
	static void NewProp_bLocked_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLocked;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BasicLayoutStates;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ImportStates;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReimportStates;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInterchangePipelinePropertyStates>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FInterchangePipelinePropertyStates_Statics::NewProp_bLocked_SetBit(void* Obj)
{
	((FInterchangePipelinePropertyStates*)Obj)->bLocked = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInterchangePipelinePropertyStates_Statics::NewProp_bLocked = { "bLocked", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FInterchangePipelinePropertyStates), &Z_Construct_UScriptStruct_FInterchangePipelinePropertyStates_Statics::NewProp_bLocked_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLocked_MetaData), NewProp_bLocked_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInterchangePipelinePropertyStates_Statics::NewProp_BasicLayoutStates = { "BasicLayoutStates", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInterchangePipelinePropertyStates, BasicLayoutStates), Z_Construct_UScriptStruct_FInterchangePipelinePropertyStatePerContext, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BasicLayoutStates_MetaData), NewProp_BasicLayoutStates_MetaData) }; // 2741613384
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInterchangePipelinePropertyStates_Statics::NewProp_ImportStates = { "ImportStates", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInterchangePipelinePropertyStates, ImportStates), Z_Construct_UScriptStruct_FInterchangePipelinePropertyStatePerContext, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImportStates_MetaData), NewProp_ImportStates_MetaData) }; // 2741613384
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInterchangePipelinePropertyStates_Statics::NewProp_ReimportStates = { "ReimportStates", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInterchangePipelinePropertyStates, ReimportStates), Z_Construct_UScriptStruct_FInterchangePipelinePropertyStatePerContext, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReimportStates_MetaData), NewProp_ReimportStates_MetaData) }; // 2741613384
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInterchangePipelinePropertyStates_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangePipelinePropertyStates_Statics::NewProp_bLocked,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangePipelinePropertyStates_Statics::NewProp_BasicLayoutStates,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangePipelinePropertyStates_Statics::NewProp_ImportStates,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangePipelinePropertyStates_Statics::NewProp_ReimportStates,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangePipelinePropertyStates_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInterchangePipelinePropertyStates_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeCore,
	nullptr,
	&NewStructOps,
	"InterchangePipelinePropertyStates",
	Z_Construct_UScriptStruct_FInterchangePipelinePropertyStates_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangePipelinePropertyStates_Statics::PropPointers),
	sizeof(FInterchangePipelinePropertyStates),
	alignof(FInterchangePipelinePropertyStates),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangePipelinePropertyStates_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInterchangePipelinePropertyStates_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInterchangePipelinePropertyStates()
{
	if (!Z_Registration_Info_UScriptStruct_InterchangePipelinePropertyStates.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InterchangePipelinePropertyStates.InnerSingleton, Z_Construct_UScriptStruct_FInterchangePipelinePropertyStates_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InterchangePipelinePropertyStates.InnerSingleton;
}
// End ScriptStruct FInterchangePipelinePropertyStates

// Begin Class UInterchangePipelineBase Function DoesPropertyStatesExist
struct Z_Construct_UFunction_UInterchangePipelineBase_DoesPropertyStatesExist_Statics
{
	struct InterchangePipelineBase_eventDoesPropertyStatesExist_Parms
	{
		FName PropertyPath;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Pipeline" },
		{ "Comment", "/**\n\x09 * Return true if the property has valid states, or false if no states were set for the property.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangePipelineBase.h" },
		{ "ToolTip", "Return true if the property has valid states, or false if no states were set for the property." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PropertyPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyPath;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UInterchangePipelineBase_DoesPropertyStatesExist_Statics::NewProp_PropertyPath = { "PropertyPath", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangePipelineBase_eventDoesPropertyStatesExist_Parms, PropertyPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PropertyPath_MetaData), NewProp_PropertyPath_MetaData) };
void Z_Construct_UFunction_UInterchangePipelineBase_DoesPropertyStatesExist_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangePipelineBase_eventDoesPropertyStatesExist_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangePipelineBase_DoesPropertyStatesExist_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangePipelineBase_eventDoesPropertyStatesExist_Parms), &Z_Construct_UFunction_UInterchangePipelineBase_DoesPropertyStatesExist_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangePipelineBase_DoesPropertyStatesExist_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineBase_DoesPropertyStatesExist_Statics::NewProp_PropertyPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineBase_DoesPropertyStatesExist_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineBase_DoesPropertyStatesExist_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangePipelineBase_DoesPropertyStatesExist_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangePipelineBase, nullptr, "DoesPropertyStatesExist", nullptr, nullptr, Z_Construct_UFunction_UInterchangePipelineBase_DoesPropertyStatesExist_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineBase_DoesPropertyStatesExist_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangePipelineBase_DoesPropertyStatesExist_Statics::InterchangePipelineBase_eventDoesPropertyStatesExist_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineBase_DoesPropertyStatesExist_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangePipelineBase_DoesPropertyStatesExist_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangePipelineBase_DoesPropertyStatesExist_Statics::InterchangePipelineBase_eventDoesPropertyStatesExist_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangePipelineBase_DoesPropertyStatesExist()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangePipelineBase_DoesPropertyStatesExist_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangePipelineBase::execDoesPropertyStatesExist)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_PropertyPath);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->DoesPropertyStatesExist(Z_Param_PropertyPath);
	P_NATIVE_END;
}
// End Class UInterchangePipelineBase Function DoesPropertyStatesExist

// Begin Class UInterchangePipelineBase Function FindOrAddPropertyStates
struct Z_Construct_UFunction_UInterchangePipelineBase_FindOrAddPropertyStates_Statics
{
	struct InterchangePipelineBase_eventFindOrAddPropertyStates_Parms
	{
		FName PropertyPath;
		FInterchangePipelinePropertyStates ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Pipeline" },
		{ "Comment", "/**\n\x09 * Return a mutable property states reference. Add the property states if it doesn't exist.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangePipelineBase.h" },
		{ "ToolTip", "Return a mutable property states reference. Add the property states if it doesn't exist." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PropertyPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyPath;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UInterchangePipelineBase_FindOrAddPropertyStates_Statics::NewProp_PropertyPath = { "PropertyPath", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangePipelineBase_eventFindOrAddPropertyStates_Parms, PropertyPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PropertyPath_MetaData), NewProp_PropertyPath_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterchangePipelineBase_FindOrAddPropertyStates_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangePipelineBase_eventFindOrAddPropertyStates_Parms, ReturnValue), Z_Construct_UScriptStruct_FInterchangePipelinePropertyStates, METADATA_PARAMS(0, nullptr) }; // 715341497
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangePipelineBase_FindOrAddPropertyStates_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineBase_FindOrAddPropertyStates_Statics::NewProp_PropertyPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineBase_FindOrAddPropertyStates_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineBase_FindOrAddPropertyStates_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangePipelineBase_FindOrAddPropertyStates_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangePipelineBase, nullptr, "FindOrAddPropertyStates", nullptr, nullptr, Z_Construct_UFunction_UInterchangePipelineBase_FindOrAddPropertyStates_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineBase_FindOrAddPropertyStates_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangePipelineBase_FindOrAddPropertyStates_Statics::InterchangePipelineBase_eventFindOrAddPropertyStates_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineBase_FindOrAddPropertyStates_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangePipelineBase_FindOrAddPropertyStates_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangePipelineBase_FindOrAddPropertyStates_Statics::InterchangePipelineBase_eventFindOrAddPropertyStates_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangePipelineBase_FindOrAddPropertyStates()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangePipelineBase_FindOrAddPropertyStates_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangePipelineBase::execFindOrAddPropertyStates)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_PropertyPath);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FInterchangePipelinePropertyStates*)Z_Param__Result=P_THIS->FindOrAddPropertyStates(Z_Param_PropertyPath);
	P_NATIVE_END;
}
// End Class UInterchangePipelineBase Function FindOrAddPropertyStates

// Begin Class UInterchangePipelineBase Function ScriptedExecuteExportPipeline
struct InterchangePipelineBase_eventScriptedExecuteExportPipeline_Parms
{
	UInterchangeBaseNodeContainer* BaseNodeContainer;
};
static FName NAME_UInterchangePipelineBase_ScriptedExecuteExportPipeline = FName(TEXT("ScriptedExecuteExportPipeline"));
void UInterchangePipelineBase::ScriptedExecuteExportPipeline(UInterchangeBaseNodeContainer* BaseNodeContainer)
{
	InterchangePipelineBase_eventScriptedExecuteExportPipeline_Parms Parms;
	Parms.BaseNodeContainer=BaseNodeContainer;
	ProcessEvent(FindFunctionChecked(NAME_UInterchangePipelineBase_ScriptedExecuteExportPipeline),&Parms);
}
struct Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecuteExportPipeline_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Pipeline" },
		{ "Comment", "/**\n\x09 * Non-virtual helper that allows Blueprint to implement an event-based function.\n\x09 * The Interchange manager calls this function, not the virtual one that is called by the default implementation.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangePipelineBase.h" },
		{ "ToolTip", "Non-virtual helper that allows Blueprint to implement an event-based function.\nThe Interchange manager calls this function, not the virtual one that is called by the default implementation." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseNodeContainer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecuteExportPipeline_Statics::NewProp_BaseNodeContainer = { "BaseNodeContainer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangePipelineBase_eventScriptedExecuteExportPipeline_Parms, BaseNodeContainer), Z_Construct_UClass_UInterchangeBaseNodeContainer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecuteExportPipeline_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecuteExportPipeline_Statics::NewProp_BaseNodeContainer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecuteExportPipeline_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecuteExportPipeline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangePipelineBase, nullptr, "ScriptedExecuteExportPipeline", nullptr, nullptr, Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecuteExportPipeline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecuteExportPipeline_Statics::PropPointers), sizeof(InterchangePipelineBase_eventScriptedExecuteExportPipeline_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C02, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecuteExportPipeline_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecuteExportPipeline_Statics::Function_MetaDataParams) };
static_assert(sizeof(InterchangePipelineBase_eventScriptedExecuteExportPipeline_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecuteExportPipeline()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecuteExportPipeline_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangePipelineBase::execScriptedExecuteExportPipeline)
{
	P_GET_OBJECT(UInterchangeBaseNodeContainer,Z_Param_BaseNodeContainer);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ScriptedExecuteExportPipeline_Implementation(Z_Param_BaseNodeContainer);
	P_NATIVE_END;
}
// End Class UInterchangePipelineBase Function ScriptedExecuteExportPipeline

// Begin Class UInterchangePipelineBase Function ScriptedExecutePipeline
struct InterchangePipelineBase_eventScriptedExecutePipeline_Parms
{
	UInterchangeBaseNodeContainer* BaseNodeContainer;
	TArray<UInterchangeSourceData*> SourceDatas;
	FString ContentBasePath;
};
static FName NAME_UInterchangePipelineBase_ScriptedExecutePipeline = FName(TEXT("ScriptedExecutePipeline"));
void UInterchangePipelineBase::ScriptedExecutePipeline(UInterchangeBaseNodeContainer* BaseNodeContainer, TArray<UInterchangeSourceData*> const& SourceDatas, const FString& ContentBasePath)
{
	InterchangePipelineBase_eventScriptedExecutePipeline_Parms Parms;
	Parms.BaseNodeContainer=BaseNodeContainer;
	Parms.SourceDatas=SourceDatas;
	Parms.ContentBasePath=ContentBasePath;
	ProcessEvent(FindFunctionChecked(NAME_UInterchangePipelineBase_ScriptedExecutePipeline),&Parms);
}
struct Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePipeline_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Pipeline" },
		{ "Comment", "/**\n\x09 * ScriptedExecutePipeline, is call after the translation and before we parse the graph to call the factory.\n\x09 * This is where factory node should be created by the pipeline.\n\x09 * Each factory node represent an unreal asset create that will be create by an interchange factory.\n\x09 * @note - the FTaskPipeline is calling this function not the virtual one that is call by the default implementation.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangePipelineBase.h" },
		{ "ToolTip", "ScriptedExecutePipeline, is call after the translation and before we parse the graph to call the factory.\nThis is where factory node should be created by the pipeline.\nEach factory node represent an unreal asset create that will be create by an interchange factory.\n@note - the FTaskPipeline is calling this function not the virtual one that is call by the default implementation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceDatas_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContentBasePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseNodeContainer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceDatas_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SourceDatas;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ContentBasePath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePipeline_Statics::NewProp_BaseNodeContainer = { "BaseNodeContainer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangePipelineBase_eventScriptedExecutePipeline_Parms, BaseNodeContainer), Z_Construct_UClass_UInterchangeBaseNodeContainer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePipeline_Statics::NewProp_SourceDatas_Inner = { "SourceDatas", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInterchangeSourceData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePipeline_Statics::NewProp_SourceDatas = { "SourceDatas", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangePipelineBase_eventScriptedExecutePipeline_Parms, SourceDatas), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceDatas_MetaData), NewProp_SourceDatas_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePipeline_Statics::NewProp_ContentBasePath = { "ContentBasePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangePipelineBase_eventScriptedExecutePipeline_Parms, ContentBasePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContentBasePath_MetaData), NewProp_ContentBasePath_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePipeline_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePipeline_Statics::NewProp_BaseNodeContainer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePipeline_Statics::NewProp_SourceDatas_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePipeline_Statics::NewProp_SourceDatas,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePipeline_Statics::NewProp_ContentBasePath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePipeline_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePipeline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangePipelineBase, nullptr, "ScriptedExecutePipeline", nullptr, nullptr, Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePipeline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePipeline_Statics::PropPointers), sizeof(InterchangePipelineBase_eventScriptedExecutePipeline_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C02, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePipeline_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePipeline_Statics::Function_MetaDataParams) };
static_assert(sizeof(InterchangePipelineBase_eventScriptedExecutePipeline_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePipeline()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePipeline_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangePipelineBase::execScriptedExecutePipeline)
{
	P_GET_OBJECT(UInterchangeBaseNodeContainer,Z_Param_BaseNodeContainer);
	P_GET_TARRAY_REF(UInterchangeSourceData*,Z_Param_Out_SourceDatas);
	P_GET_PROPERTY(FStrProperty,Z_Param_ContentBasePath);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ScriptedExecutePipeline_Implementation(Z_Param_BaseNodeContainer,Z_Param_Out_SourceDatas,Z_Param_ContentBasePath);
	P_NATIVE_END;
}
// End Class UInterchangePipelineBase Function ScriptedExecutePipeline

// Begin Class UInterchangePipelineBase Function ScriptedExecutePostFactoryPipeline
struct InterchangePipelineBase_eventScriptedExecutePostFactoryPipeline_Parms
{
	const UInterchangeBaseNodeContainer* BaseNodeContainer;
	FString FactoryNodeKey;
	UObject* CreatedAsset;
	bool bIsAReimport;
};
static FName NAME_UInterchangePipelineBase_ScriptedExecutePostFactoryPipeline = FName(TEXT("ScriptedExecutePostFactoryPipeline"));
void UInterchangePipelineBase::ScriptedExecutePostFactoryPipeline(const UInterchangeBaseNodeContainer* BaseNodeContainer, const FString& FactoryNodeKey, UObject* CreatedAsset, bool bIsAReimport)
{
	InterchangePipelineBase_eventScriptedExecutePostFactoryPipeline_Parms Parms;
	Parms.BaseNodeContainer=BaseNodeContainer;
	Parms.FactoryNodeKey=FactoryNodeKey;
	Parms.CreatedAsset=CreatedAsset;
	Parms.bIsAReimport=bIsAReimport ? true : false;
	ProcessEvent(FindFunctionChecked(NAME_UInterchangePipelineBase_ScriptedExecutePostFactoryPipeline),&Parms);
}
struct Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePostFactoryPipeline_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Pipeline" },
		{ "Comment", "/**\n\x09 * ScriptedExecutePostFactoryPipeline is called after the factory creates an Unreal asset, but before it calls PostEditChange.\n\x09 * @note - The FTaskPreCompletion task calls this function, not the virtual one that is called by the default implementation.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangePipelineBase.h" },
		{ "ToolTip", "ScriptedExecutePostFactoryPipeline is called after the factory creates an Unreal asset, but before it calls PostEditChange.\n@note - The FTaskPreCompletion task calls this function, not the virtual one that is called by the default implementation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseNodeContainer_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FactoryNodeKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseNodeContainer;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FactoryNodeKey;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CreatedAsset;
	static void NewProp_bIsAReimport_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAReimport;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePostFactoryPipeline_Statics::NewProp_BaseNodeContainer = { "BaseNodeContainer", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangePipelineBase_eventScriptedExecutePostFactoryPipeline_Parms, BaseNodeContainer), Z_Construct_UClass_UInterchangeBaseNodeContainer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseNodeContainer_MetaData), NewProp_BaseNodeContainer_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePostFactoryPipeline_Statics::NewProp_FactoryNodeKey = { "FactoryNodeKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangePipelineBase_eventScriptedExecutePostFactoryPipeline_Parms, FactoryNodeKey), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FactoryNodeKey_MetaData), NewProp_FactoryNodeKey_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePostFactoryPipeline_Statics::NewProp_CreatedAsset = { "CreatedAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangePipelineBase_eventScriptedExecutePostFactoryPipeline_Parms, CreatedAsset), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePostFactoryPipeline_Statics::NewProp_bIsAReimport_SetBit(void* Obj)
{
	((InterchangePipelineBase_eventScriptedExecutePostFactoryPipeline_Parms*)Obj)->bIsAReimport = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePostFactoryPipeline_Statics::NewProp_bIsAReimport = { "bIsAReimport", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangePipelineBase_eventScriptedExecutePostFactoryPipeline_Parms), &Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePostFactoryPipeline_Statics::NewProp_bIsAReimport_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePostFactoryPipeline_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePostFactoryPipeline_Statics::NewProp_BaseNodeContainer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePostFactoryPipeline_Statics::NewProp_FactoryNodeKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePostFactoryPipeline_Statics::NewProp_CreatedAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePostFactoryPipeline_Statics::NewProp_bIsAReimport,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePostFactoryPipeline_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePostFactoryPipeline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangePipelineBase, nullptr, "ScriptedExecutePostFactoryPipeline", nullptr, nullptr, Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePostFactoryPipeline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePostFactoryPipeline_Statics::PropPointers), sizeof(InterchangePipelineBase_eventScriptedExecutePostFactoryPipeline_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C02, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePostFactoryPipeline_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePostFactoryPipeline_Statics::Function_MetaDataParams) };
static_assert(sizeof(InterchangePipelineBase_eventScriptedExecutePostFactoryPipeline_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePostFactoryPipeline()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePostFactoryPipeline_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangePipelineBase::execScriptedExecutePostFactoryPipeline)
{
	P_GET_OBJECT(UInterchangeBaseNodeContainer,Z_Param_BaseNodeContainer);
	P_GET_PROPERTY(FStrProperty,Z_Param_FactoryNodeKey);
	P_GET_OBJECT(UObject,Z_Param_CreatedAsset);
	P_GET_UBOOL(Z_Param_bIsAReimport);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ScriptedExecutePostFactoryPipeline_Implementation(Z_Param_BaseNodeContainer,Z_Param_FactoryNodeKey,Z_Param_CreatedAsset,Z_Param_bIsAReimport);
	P_NATIVE_END;
}
// End Class UInterchangePipelineBase Function ScriptedExecutePostFactoryPipeline

// Begin Class UInterchangePipelineBase Function ScriptedExecutePostImportPipeline
struct InterchangePipelineBase_eventScriptedExecutePostImportPipeline_Parms
{
	const UInterchangeBaseNodeContainer* BaseNodeContainer;
	FString FactoryNodeKey;
	UObject* CreatedAsset;
	bool bIsAReimport;
};
static FName NAME_UInterchangePipelineBase_ScriptedExecutePostImportPipeline = FName(TEXT("ScriptedExecutePostImportPipeline"));
void UInterchangePipelineBase::ScriptedExecutePostImportPipeline(const UInterchangeBaseNodeContainer* BaseNodeContainer, const FString& FactoryNodeKey, UObject* CreatedAsset, bool bIsAReimport)
{
	InterchangePipelineBase_eventScriptedExecutePostImportPipeline_Parms Parms;
	Parms.BaseNodeContainer=BaseNodeContainer;
	Parms.FactoryNodeKey=FactoryNodeKey;
	Parms.CreatedAsset=CreatedAsset;
	Parms.bIsAReimport=bIsAReimport ? true : false;
	ProcessEvent(FindFunctionChecked(NAME_UInterchangePipelineBase_ScriptedExecutePostImportPipeline),&Parms);
}
struct Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePostImportPipeline_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Pipeline" },
		{ "Comment", "/**\n\x09 * ScriptedExecutePostImportPipeline is called after an asset is completely imported, after PostEditChange has already been called.\n\x09 * This can be useful if you need build data for one asset to finish setting up another asset.\n\x09 * @example - A PhysicsAsset needs skeletal mesh render data to be built properly.\n\x09 * @note - the FTaskPostImport calls this function not the virtual one that is call by the default implementation.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangePipelineBase.h" },
		{ "ToolTip", "ScriptedExecutePostImportPipeline is called after an asset is completely imported, after PostEditChange has already been called.\nThis can be useful if you need build data for one asset to finish setting up another asset.\n@example - A PhysicsAsset needs skeletal mesh render data to be built properly.\n@note - the FTaskPostImport calls this function not the virtual one that is call by the default implementation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseNodeContainer_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FactoryNodeKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseNodeContainer;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FactoryNodeKey;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CreatedAsset;
	static void NewProp_bIsAReimport_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAReimport;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePostImportPipeline_Statics::NewProp_BaseNodeContainer = { "BaseNodeContainer", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangePipelineBase_eventScriptedExecutePostImportPipeline_Parms, BaseNodeContainer), Z_Construct_UClass_UInterchangeBaseNodeContainer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseNodeContainer_MetaData), NewProp_BaseNodeContainer_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePostImportPipeline_Statics::NewProp_FactoryNodeKey = { "FactoryNodeKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangePipelineBase_eventScriptedExecutePostImportPipeline_Parms, FactoryNodeKey), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FactoryNodeKey_MetaData), NewProp_FactoryNodeKey_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePostImportPipeline_Statics::NewProp_CreatedAsset = { "CreatedAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangePipelineBase_eventScriptedExecutePostImportPipeline_Parms, CreatedAsset), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePostImportPipeline_Statics::NewProp_bIsAReimport_SetBit(void* Obj)
{
	((InterchangePipelineBase_eventScriptedExecutePostImportPipeline_Parms*)Obj)->bIsAReimport = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePostImportPipeline_Statics::NewProp_bIsAReimport = { "bIsAReimport", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangePipelineBase_eventScriptedExecutePostImportPipeline_Parms), &Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePostImportPipeline_Statics::NewProp_bIsAReimport_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePostImportPipeline_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePostImportPipeline_Statics::NewProp_BaseNodeContainer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePostImportPipeline_Statics::NewProp_FactoryNodeKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePostImportPipeline_Statics::NewProp_CreatedAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePostImportPipeline_Statics::NewProp_bIsAReimport,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePostImportPipeline_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePostImportPipeline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangePipelineBase, nullptr, "ScriptedExecutePostImportPipeline", nullptr, nullptr, Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePostImportPipeline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePostImportPipeline_Statics::PropPointers), sizeof(InterchangePipelineBase_eventScriptedExecutePostImportPipeline_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C02, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePostImportPipeline_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePostImportPipeline_Statics::Function_MetaDataParams) };
static_assert(sizeof(InterchangePipelineBase_eventScriptedExecutePostImportPipeline_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePostImportPipeline()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePostImportPipeline_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangePipelineBase::execScriptedExecutePostImportPipeline)
{
	P_GET_OBJECT(UInterchangeBaseNodeContainer,Z_Param_BaseNodeContainer);
	P_GET_PROPERTY(FStrProperty,Z_Param_FactoryNodeKey);
	P_GET_OBJECT(UObject,Z_Param_CreatedAsset);
	P_GET_UBOOL(Z_Param_bIsAReimport);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ScriptedExecutePostImportPipeline_Implementation(Z_Param_BaseNodeContainer,Z_Param_FactoryNodeKey,Z_Param_CreatedAsset,Z_Param_bIsAReimport);
	P_NATIVE_END;
}
// End Class UInterchangePipelineBase Function ScriptedExecutePostImportPipeline

// Begin Class UInterchangePipelineBase Function ScriptedGetPipelineDisplayName
struct InterchangePipelineBase_eventScriptedGetPipelineDisplayName_Parms
{
	FString ReturnValue;
};
static FName NAME_UInterchangePipelineBase_ScriptedGetPipelineDisplayName = FName(TEXT("ScriptedGetPipelineDisplayName"));
FString UInterchangePipelineBase::ScriptedGetPipelineDisplayName() const
{
	InterchangePipelineBase_eventScriptedGetPipelineDisplayName_Parms Parms;
	const_cast<UInterchangePipelineBase*>(this)->ProcessEvent(FindFunctionChecked(NAME_UInterchangePipelineBase_ScriptedGetPipelineDisplayName),&Parms);
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UInterchangePipelineBase_ScriptedGetPipelineDisplayName_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Pipeline" },
		{ "Comment", "/**\n\x09 * This function is call when we want to list pipeline in the import dialog. If not override the default behavior of this function will search if\n\x09 * the pipeline have a FString UPROPERTY named \"PipelineDisplayName\" and return the property value. If there is no FString UPROPERTY call \"PipelineDisplayName\" it will\n\x09 * return the name of the pipeline asset (UObject::GetName).\n\x09 * \n\x09 * When creating a pipeline (c++, python or blueprint) you can simply add a UPROPERTY name \"PipelineDisplayName\" to your pipeline, you do not need to override the function.\n\x09 * Use the same category has your other options and put it on the top.\n\x09 * The meta tag StandAlonePipelineProperty will hide your PROPERTY if your pipeline is a sub object of another pipeline when showing the import dialog.\n\x09 * The meta tag PipelineInternalEditionData make sure the property will be show only when we edit the pipeline object (hidden when showing the import dialog).\n\x09 * \n\x09 *\n\x09 * UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"Textures\", meta = (StandAlonePipelineProperty = \"True\", PipelineInternalEditionData = \"True\"))\n\x09 * FString PipelineDisplayName;\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangePipelineBase.h" },
		{ "ToolTip", "This function is call when we want to list pipeline in the import dialog. If not override the default behavior of this function will search if\nthe pipeline have a FString UPROPERTY named \"PipelineDisplayName\" and return the property value. If there is no FString UPROPERTY call \"PipelineDisplayName\" it will\nreturn the name of the pipeline asset (UObject::GetName).\n\nWhen creating a pipeline (c++, python or blueprint) you can simply add a UPROPERTY name \"PipelineDisplayName\" to your pipeline, you do not need to override the function.\nUse the same category has your other options and put it on the top.\nThe meta tag StandAlonePipelineProperty will hide your PROPERTY if your pipeline is a sub object of another pipeline when showing the import dialog.\nThe meta tag PipelineInternalEditionData make sure the property will be show only when we edit the pipeline object (hidden when showing the import dialog).\n\n\nUPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"Textures\", meta = (StandAlonePipelineProperty = \"True\", PipelineInternalEditionData = \"True\"))\nFString PipelineDisplayName;" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangePipelineBase_ScriptedGetPipelineDisplayName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangePipelineBase_eventScriptedGetPipelineDisplayName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangePipelineBase_ScriptedGetPipelineDisplayName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineBase_ScriptedGetPipelineDisplayName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineBase_ScriptedGetPipelineDisplayName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangePipelineBase_ScriptedGetPipelineDisplayName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangePipelineBase, nullptr, "ScriptedGetPipelineDisplayName", nullptr, nullptr, Z_Construct_UFunction_UInterchangePipelineBase_ScriptedGetPipelineDisplayName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineBase_ScriptedGetPipelineDisplayName_Statics::PropPointers), sizeof(InterchangePipelineBase_eventScriptedGetPipelineDisplayName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C02, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineBase_ScriptedGetPipelineDisplayName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangePipelineBase_ScriptedGetPipelineDisplayName_Statics::Function_MetaDataParams) };
static_assert(sizeof(InterchangePipelineBase_eventScriptedGetPipelineDisplayName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangePipelineBase_ScriptedGetPipelineDisplayName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangePipelineBase_ScriptedGetPipelineDisplayName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangePipelineBase::execScriptedGetPipelineDisplayName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->ScriptedGetPipelineDisplayName_Implementation();
	P_NATIVE_END;
}
// End Class UInterchangePipelineBase Function ScriptedGetPipelineDisplayName

// Begin Class UInterchangePipelineBase Function ScriptedSetReimportSourceIndex
struct InterchangePipelineBase_eventScriptedSetReimportSourceIndex_Parms
{
	UClass* ReimportObjectClass;
	int32 SourceFileIndex;
};
static FName NAME_UInterchangePipelineBase_ScriptedSetReimportSourceIndex = FName(TEXT("ScriptedSetReimportSourceIndex"));
void UInterchangePipelineBase::ScriptedSetReimportSourceIndex(UClass* ReimportObjectClass, const int32 SourceFileIndex)
{
	InterchangePipelineBase_eventScriptedSetReimportSourceIndex_Parms Parms;
	Parms.ReimportObjectClass=ReimportObjectClass;
	Parms.SourceFileIndex=SourceFileIndex;
	ProcessEvent(FindFunctionChecked(NAME_UInterchangePipelineBase_ScriptedSetReimportSourceIndex),&Parms);
}
struct Z_Construct_UFunction_UInterchangePipelineBase_ScriptedSetReimportSourceIndex_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Pipeline" },
		{ "Comment", "/**\n\x09 * Non-virtual helper that allows Blueprint to implement an event-based function.\n\x09 * the Interchange framework calls this function, not the virtual one that is called by the default implementation.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangePipelineBase.h" },
		{ "ToolTip", "Non-virtual helper that allows Blueprint to implement an event-based function.\nthe Interchange framework calls this function, not the virtual one that is called by the default implementation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceFileIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ReimportObjectClass;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SourceFileIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UInterchangePipelineBase_ScriptedSetReimportSourceIndex_Statics::NewProp_ReimportObjectClass = { "ReimportObjectClass", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangePipelineBase_eventScriptedSetReimportSourceIndex_Parms, ReimportObjectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangePipelineBase_ScriptedSetReimportSourceIndex_Statics::NewProp_SourceFileIndex = { "SourceFileIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangePipelineBase_eventScriptedSetReimportSourceIndex_Parms, SourceFileIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceFileIndex_MetaData), NewProp_SourceFileIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangePipelineBase_ScriptedSetReimportSourceIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineBase_ScriptedSetReimportSourceIndex_Statics::NewProp_ReimportObjectClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineBase_ScriptedSetReimportSourceIndex_Statics::NewProp_SourceFileIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineBase_ScriptedSetReimportSourceIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangePipelineBase_ScriptedSetReimportSourceIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangePipelineBase, nullptr, "ScriptedSetReimportSourceIndex", nullptr, nullptr, Z_Construct_UFunction_UInterchangePipelineBase_ScriptedSetReimportSourceIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineBase_ScriptedSetReimportSourceIndex_Statics::PropPointers), sizeof(InterchangePipelineBase_eventScriptedSetReimportSourceIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C02, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineBase_ScriptedSetReimportSourceIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangePipelineBase_ScriptedSetReimportSourceIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(InterchangePipelineBase_eventScriptedSetReimportSourceIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangePipelineBase_ScriptedSetReimportSourceIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangePipelineBase_ScriptedSetReimportSourceIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangePipelineBase::execScriptedSetReimportSourceIndex)
{
	P_GET_OBJECT(UClass,Z_Param_ReimportObjectClass);
	P_GET_PROPERTY(FIntProperty,Z_Param_SourceFileIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ScriptedSetReimportSourceIndex_Implementation(Z_Param_ReimportObjectClass,Z_Param_SourceFileIndex);
	P_NATIVE_END;
}
// End Class UInterchangePipelineBase Function ScriptedSetReimportSourceIndex

// Begin Class UInterchangePipelineBase
void UInterchangePipelineBase::StaticRegisterNativesUInterchangePipelineBase()
{
	UClass* Class = UInterchangePipelineBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DoesPropertyStatesExist", &UInterchangePipelineBase::execDoesPropertyStatesExist },
		{ "FindOrAddPropertyStates", &UInterchangePipelineBase::execFindOrAddPropertyStates },
		{ "ScriptedExecuteExportPipeline", &UInterchangePipelineBase::execScriptedExecuteExportPipeline },
		{ "ScriptedExecutePipeline", &UInterchangePipelineBase::execScriptedExecutePipeline },
		{ "ScriptedExecutePostFactoryPipeline", &UInterchangePipelineBase::execScriptedExecutePostFactoryPipeline },
		{ "ScriptedExecutePostImportPipeline", &UInterchangePipelineBase::execScriptedExecutePostImportPipeline },
		{ "ScriptedGetPipelineDisplayName", &UInterchangePipelineBase::execScriptedGetPipelineDisplayName },
		{ "ScriptedSetReimportSourceIndex", &UInterchangePipelineBase::execScriptedSetReimportSourceIndex },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangePipelineBase);
UClass* Z_Construct_UClass_UInterchangePipelineBase_NoRegister()
{
	return UInterchangePipelineBase::StaticClass();
}
struct Z_Construct_UClass_UInterchangePipelineBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "InterchangePipelineBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/InterchangePipelineBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Results_MetaData[] = {
		{ "ModuleRelativePath", "Public/InterchangePipelineBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PropertiesStates_MetaData[] = {
		{ "Comment", "/**\n\x09 * Map of property path and lock status. Any properties that have a true lock status will be readonly when showing the import dialog.\n\x09 * Use the API to Get and Set the properties states.\n\x09*/" },
		{ "ModuleRelativePath", "Public/InterchangePipelineBase.h" },
		{ "ToolTip", "Map of property path and lock status. Any properties that have a true lock status will be readonly when showing the import dialog.\nUse the API to Get and Set the properties states." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Results;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PropertiesStates_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PropertiesStates_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_PropertiesStates;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInterchangePipelineBase_DoesPropertyStatesExist, "DoesPropertyStatesExist" }, // 3490314655
		{ &Z_Construct_UFunction_UInterchangePipelineBase_FindOrAddPropertyStates, "FindOrAddPropertyStates" }, // 1504022778
		{ &Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecuteExportPipeline, "ScriptedExecuteExportPipeline" }, // 4216614983
		{ &Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePipeline, "ScriptedExecutePipeline" }, // 2736191775
		{ &Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePostFactoryPipeline, "ScriptedExecutePostFactoryPipeline" }, // 1022853829
		{ &Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePostImportPipeline, "ScriptedExecutePostImportPipeline" }, // 3732274332
		{ &Z_Construct_UFunction_UInterchangePipelineBase_ScriptedGetPipelineDisplayName, "ScriptedGetPipelineDisplayName" }, // 2269375539
		{ &Z_Construct_UFunction_UInterchangePipelineBase_ScriptedSetReimportSourceIndex, "ScriptedSetReimportSourceIndex" }, // 3000198650
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangePipelineBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInterchangePipelineBase_Statics::NewProp_Results = { "Results", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInterchangePipelineBase, Results), Z_Construct_UClass_UInterchangeResultsContainer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Results_MetaData), NewProp_Results_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInterchangePipelineBase_Statics::NewProp_PropertiesStates_ValueProp = { "PropertiesStates", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FInterchangePipelinePropertyStates, METADATA_PARAMS(0, nullptr) }; // 715341497
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UInterchangePipelineBase_Statics::NewProp_PropertiesStates_Key_KeyProp = { "PropertiesStates_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UInterchangePipelineBase_Statics::NewProp_PropertiesStates = { "PropertiesStates", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInterchangePipelineBase, PropertiesStates), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PropertiesStates_MetaData), NewProp_PropertiesStates_MetaData) }; // 715341497
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterchangePipelineBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangePipelineBase_Statics::NewProp_Results,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangePipelineBase_Statics::NewProp_PropertiesStates_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangePipelineBase_Statics::NewProp_PropertiesStates_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangePipelineBase_Statics::NewProp_PropertiesStates,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangePipelineBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInterchangePipelineBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangePipelineBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangePipelineBase_Statics::ClassParams = {
	&UInterchangePipelineBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UInterchangePipelineBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangePipelineBase_Statics::PropPointers),
	0,
	0x000810A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangePipelineBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangePipelineBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangePipelineBase()
{
	if (!Z_Registration_Info_UClass_UInterchangePipelineBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangePipelineBase.OuterSingleton, Z_Construct_UClass_UInterchangePipelineBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangePipelineBase.OuterSingleton;
}
template<> INTERCHANGECORE_API UClass* StaticClass<UInterchangePipelineBase>()
{
	return UInterchangePipelineBase::StaticClass();
}
UInterchangePipelineBase::UInterchangePipelineBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangePipelineBase);
UInterchangePipelineBase::~UInterchangePipelineBase() {}
// End Class UInterchangePipelineBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangePipelineBase_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EInterchangePipelineTask_StaticEnum, TEXT("EInterchangePipelineTask"), &Z_Registration_Info_UEnum_EInterchangePipelineTask, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3578482815U) },
		{ EInterchangePipelineContext_StaticEnum, TEXT("EInterchangePipelineContext"), &Z_Registration_Info_UEnum_EInterchangePipelineContext, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 53494093U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FInterchangePipelinePropertyStatePerContext::StaticStruct, Z_Construct_UScriptStruct_FInterchangePipelinePropertyStatePerContext_Statics::NewStructOps, TEXT("InterchangePipelinePropertyStatePerContext"), &Z_Registration_Info_UScriptStruct_InterchangePipelinePropertyStatePerContext, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInterchangePipelinePropertyStatePerContext), 2741613384U) },
		{ FInterchangePipelinePropertyStates::StaticStruct, Z_Construct_UScriptStruct_FInterchangePipelinePropertyStates_Statics::NewStructOps, TEXT("InterchangePipelinePropertyStates"), &Z_Registration_Info_UScriptStruct_InterchangePipelinePropertyStates, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInterchangePipelinePropertyStates), 715341497U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangePipelineBase, UInterchangePipelineBase::StaticClass, TEXT("UInterchangePipelineBase"), &Z_Registration_Info_UClass_UInterchangePipelineBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangePipelineBase), 414273199U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangePipelineBase_h_1837112449(TEXT("/Script/InterchangeCore"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangePipelineBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangePipelineBase_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangePipelineBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangePipelineBase_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangePipelineBase_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangePipelineBase_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
