// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Exporters/Exporter.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExporter() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAssetExportTask_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UExporter();
ENGINE_API UClass* Z_Construct_UClass_UExporter_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UExporter Function RunAssetExportTask
struct Z_Construct_UFunction_UExporter_RunAssetExportTask_Statics
{
	struct Exporter_eventRunAssetExportTask_Parms
	{
		UAssetExportTask* Task;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Miscellaneous" },
		{ "Comment", "/**\n\x09* Export the given object to file.  Child classes do not override this, but they do provide an Export() function\n\x09* to do the resource-specific export work.\n\x09*\n\x09* @param\x09Task\x09\x09The task to export.\n\x09*\n\x09* @return\x09true if the the object was successfully exported\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Exporters/Exporter.h" },
		{ "ToolTip", "Export the given object to file.  Child classes do not override this, but they do provide an Export() function\nto do the resource-specific export work.\n\n@param        Task            The task to export.\n\n@return       true if the the object was successfully exported" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Task;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UExporter_RunAssetExportTask_Statics::NewProp_Task = { "Task", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Exporter_eventRunAssetExportTask_Parms, Task), Z_Construct_UClass_UAssetExportTask_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UExporter_RunAssetExportTask_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Exporter_eventRunAssetExportTask_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UExporter_RunAssetExportTask_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Exporter_eventRunAssetExportTask_Parms), &Z_Construct_UFunction_UExporter_RunAssetExportTask_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExporter_RunAssetExportTask_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExporter_RunAssetExportTask_Statics::NewProp_Task,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExporter_RunAssetExportTask_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UExporter_RunAssetExportTask_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExporter_RunAssetExportTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExporter, nullptr, "RunAssetExportTask", nullptr, nullptr, Z_Construct_UFunction_UExporter_RunAssetExportTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExporter_RunAssetExportTask_Statics::PropPointers), sizeof(Z_Construct_UFunction_UExporter_RunAssetExportTask_Statics::Exporter_eventRunAssetExportTask_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UExporter_RunAssetExportTask_Statics::Function_MetaDataParams), Z_Construct_UFunction_UExporter_RunAssetExportTask_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UExporter_RunAssetExportTask_Statics::Exporter_eventRunAssetExportTask_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UExporter_RunAssetExportTask()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExporter_RunAssetExportTask_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UExporter::execRunAssetExportTask)
{
	P_GET_OBJECT(UAssetExportTask,Z_Param_Task);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UExporter::RunAssetExportTask(Z_Param_Task);
	P_NATIVE_END;
}
// End Class UExporter Function RunAssetExportTask

// Begin Class UExporter Function RunAssetExportTasks
struct Z_Construct_UFunction_UExporter_RunAssetExportTasks_Statics
{
	struct Exporter_eventRunAssetExportTasks_Parms
	{
		TArray<UAssetExportTask*> ExportTasks;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Miscellaneous" },
		{ "Comment", "/**\n\x09 * Export the given objects to files.  Child classes do not override this, but they do provide an Export() function\n\x09 * to do the resource-specific export work.\n\x09 * \n\x09 * @param\x09""ExportTasks\x09\x09The array of tasks to export.\n\x09 *\n\x09 * @return\x09true if all tasks ran without error\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Exporters/Exporter.h" },
		{ "ToolTip", "Export the given objects to files.  Child classes do not override this, but they do provide an Export() function\nto do the resource-specific export work.\n\n@param       ExportTasks             The array of tasks to export.\n\n@return      true if all tasks ran without error" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExportTasks_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ExportTasks_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ExportTasks;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UExporter_RunAssetExportTasks_Statics::NewProp_ExportTasks_Inner = { "ExportTasks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAssetExportTask_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UExporter_RunAssetExportTasks_Statics::NewProp_ExportTasks = { "ExportTasks", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Exporter_eventRunAssetExportTasks_Parms, ExportTasks), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExportTasks_MetaData), NewProp_ExportTasks_MetaData) };
void Z_Construct_UFunction_UExporter_RunAssetExportTasks_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Exporter_eventRunAssetExportTasks_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UExporter_RunAssetExportTasks_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Exporter_eventRunAssetExportTasks_Parms), &Z_Construct_UFunction_UExporter_RunAssetExportTasks_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExporter_RunAssetExportTasks_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExporter_RunAssetExportTasks_Statics::NewProp_ExportTasks_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExporter_RunAssetExportTasks_Statics::NewProp_ExportTasks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExporter_RunAssetExportTasks_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UExporter_RunAssetExportTasks_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExporter_RunAssetExportTasks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExporter, nullptr, "RunAssetExportTasks", nullptr, nullptr, Z_Construct_UFunction_UExporter_RunAssetExportTasks_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExporter_RunAssetExportTasks_Statics::PropPointers), sizeof(Z_Construct_UFunction_UExporter_RunAssetExportTasks_Statics::Exporter_eventRunAssetExportTasks_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UExporter_RunAssetExportTasks_Statics::Function_MetaDataParams), Z_Construct_UFunction_UExporter_RunAssetExportTasks_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UExporter_RunAssetExportTasks_Statics::Exporter_eventRunAssetExportTasks_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UExporter_RunAssetExportTasks()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExporter_RunAssetExportTasks_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UExporter::execRunAssetExportTasks)
{
	P_GET_TARRAY_REF(UAssetExportTask*,Z_Param_Out_ExportTasks);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UExporter::RunAssetExportTasks(Z_Param_Out_ExportTasks);
	P_NATIVE_END;
}
// End Class UExporter Function RunAssetExportTasks

// Begin Class UExporter Function ScriptRunAssetExportTask
struct Exporter_eventScriptRunAssetExportTask_Parms
{
	UAssetExportTask* Task;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	Exporter_eventScriptRunAssetExportTask_Parms()
		: ReturnValue(false)
	{
	}
};
static FName NAME_UExporter_ScriptRunAssetExportTask = FName(TEXT("ScriptRunAssetExportTask"));
bool UExporter::ScriptRunAssetExportTask(UAssetExportTask* Task)
{
	Exporter_eventScriptRunAssetExportTask_Parms Parms;
	Parms.Task=Task;
	ProcessEvent(FindFunctionChecked(NAME_UExporter_ScriptRunAssetExportTask),&Parms);
	return !!Parms.ReturnValue;
}
struct Z_Construct_UFunction_UExporter_ScriptRunAssetExportTask_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Miscellaneous" },
		{ "Comment", "/**\n\x09* Export the given object to file.  Overridden by script based exporters.\n\x09*\n\x09* @param\x09Task\x09\x09The task to export.\n\x09*\n\x09* @return\x09true if overridden by script exporter.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Exporters/Exporter.h" },
		{ "ToolTip", "Export the given object to file.  Overridden by script based exporters.\n\n@param        Task            The task to export.\n\n@return       true if overridden by script exporter." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Task;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UExporter_ScriptRunAssetExportTask_Statics::NewProp_Task = { "Task", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Exporter_eventScriptRunAssetExportTask_Parms, Task), Z_Construct_UClass_UAssetExportTask_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UExporter_ScriptRunAssetExportTask_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Exporter_eventScriptRunAssetExportTask_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UExporter_ScriptRunAssetExportTask_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Exporter_eventScriptRunAssetExportTask_Parms), &Z_Construct_UFunction_UExporter_ScriptRunAssetExportTask_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExporter_ScriptRunAssetExportTask_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExporter_ScriptRunAssetExportTask_Statics::NewProp_Task,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExporter_ScriptRunAssetExportTask_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UExporter_ScriptRunAssetExportTask_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExporter_ScriptRunAssetExportTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExporter, nullptr, "ScriptRunAssetExportTask", nullptr, nullptr, Z_Construct_UFunction_UExporter_ScriptRunAssetExportTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExporter_ScriptRunAssetExportTask_Statics::PropPointers), sizeof(Exporter_eventScriptRunAssetExportTask_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UExporter_ScriptRunAssetExportTask_Statics::Function_MetaDataParams), Z_Construct_UFunction_UExporter_ScriptRunAssetExportTask_Statics::Function_MetaDataParams) };
static_assert(sizeof(Exporter_eventScriptRunAssetExportTask_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UExporter_ScriptRunAssetExportTask()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExporter_ScriptRunAssetExportTask_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UExporter Function ScriptRunAssetExportTask

// Begin Class UExporter
void UExporter::StaticRegisterNativesUExporter()
{
	UClass* Class = UExporter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "RunAssetExportTask", &UExporter::execRunAssetExportTask },
		{ "RunAssetExportTasks", &UExporter::execRunAssetExportTasks },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UExporter);
UClass* Z_Construct_UClass_UExporter_NoRegister()
{
	return UExporter::StaticClass();
}
struct Z_Construct_UClass_UExporter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Exporters/Exporter.h" },
		{ "ModuleRelativePath", "Classes/Exporters/Exporter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SupportedClass_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "/** Supported class of this exporter */" },
		{ "ModuleRelativePath", "Classes/Exporters/Exporter.h" },
		{ "ToolTip", "Supported class of this exporter" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExportRootScope_MetaData[] = {
		{ "Comment", "/**\n\x09 * The root scope of objects to be exported, only used if PPF_ExportsNotFullyQualfied is set\n\x09 * Objects being exported that are contained within ExportRootScope will use just their name instead of a full path\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Exporters/Exporter.h" },
		{ "ToolTip", "The root scope of objects to be exported, only used if PPF_ExportsNotFullyQualfied is set\nObjects being exported that are contained within ExportRootScope will use just their name instead of a full path" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FormatExtension_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "/** File extension to use for this exporter */" },
		{ "ModuleRelativePath", "Classes/Exporters/Exporter.h" },
		{ "ToolTip", "File extension to use for this exporter" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FormatDescription_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "/** Descriptiong of the export format */" },
		{ "ModuleRelativePath", "Classes/Exporters/Exporter.h" },
		{ "ToolTip", "Descriptiong of the export format" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreferredFormatIndex_MetaData[] = {
		{ "Comment", "/** Index into FormatExtension/FormatDescription of the preferred export format. */" },
		{ "ModuleRelativePath", "Classes/Exporters/Exporter.h" },
		{ "ToolTip", "Index into FormatExtension/FormatDescription of the preferred export format." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextIndent_MetaData[] = {
		{ "Comment", "/** Current indentation of spaces of the exported text */" },
		{ "ModuleRelativePath", "Classes/Exporters/Exporter.h" },
		{ "ToolTip", "Current indentation of spaces of the exported text" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bText_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "/** If true, this will export the data as text */" },
		{ "ModuleRelativePath", "Classes/Exporters/Exporter.h" },
		{ "ToolTip", "If true, this will export the data as text" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSelectedOnly_MetaData[] = {
		{ "Comment", "/** If true, this will export only the selected objects */" },
		{ "ModuleRelativePath", "Classes/Exporters/Exporter.h" },
		{ "ToolTip", "If true, this will export only the selected objects" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bForceFileOperations_MetaData[] = {
		{ "Comment", "/** If true, this will force the exporter code to create a file-based Ar (this can keep large output files from taking too much memory) */" },
		{ "ModuleRelativePath", "Classes/Exporters/Exporter.h" },
		{ "ToolTip", "If true, this will force the exporter code to create a file-based Ar (this can keep large output files from taking too much memory)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExportTask_MetaData[] = {
		{ "Category", "Misc" },
		{ "ModuleRelativePath", "Classes/Exporters/Exporter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_SupportedClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ExportRootScope;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FormatExtension_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FormatExtension;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FormatDescription_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FormatDescription;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PreferredFormatIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TextIndent;
	static void NewProp_bText_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bText;
	static void NewProp_bSelectedOnly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSelectedOnly;
	static void NewProp_bForceFileOperations_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceFileOperations;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ExportTask;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UExporter_RunAssetExportTask, "RunAssetExportTask" }, // 3052925232
		{ &Z_Construct_UFunction_UExporter_RunAssetExportTasks, "RunAssetExportTasks" }, // 747180170
		{ &Z_Construct_UFunction_UExporter_ScriptRunAssetExportTask, "ScriptRunAssetExportTask" }, // 698769279
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UExporter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UExporter_Statics::NewProp_SupportedClass = { "SupportedClass", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UExporter, SupportedClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SupportedClass_MetaData), NewProp_SupportedClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UExporter_Statics::NewProp_ExportRootScope = { "ExportRootScope", nullptr, (EPropertyFlags)0x0114000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UExporter, ExportRootScope), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExportRootScope_MetaData), NewProp_ExportRootScope_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UExporter_Statics::NewProp_FormatExtension_Inner = { "FormatExtension", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UExporter_Statics::NewProp_FormatExtension = { "FormatExtension", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UExporter, FormatExtension), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FormatExtension_MetaData), NewProp_FormatExtension_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UExporter_Statics::NewProp_FormatDescription_Inner = { "FormatDescription", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UExporter_Statics::NewProp_FormatDescription = { "FormatDescription", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UExporter, FormatDescription), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FormatDescription_MetaData), NewProp_FormatDescription_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UExporter_Statics::NewProp_PreferredFormatIndex = { "PreferredFormatIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UExporter, PreferredFormatIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreferredFormatIndex_MetaData), NewProp_PreferredFormatIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UExporter_Statics::NewProp_TextIndent = { "TextIndent", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UExporter, TextIndent), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextIndent_MetaData), NewProp_TextIndent_MetaData) };
void Z_Construct_UClass_UExporter_Statics::NewProp_bText_SetBit(void* Obj)
{
	((UExporter*)Obj)->bText = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UExporter_Statics::NewProp_bText = { "bText", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UExporter), &Z_Construct_UClass_UExporter_Statics::NewProp_bText_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bText_MetaData), NewProp_bText_MetaData) };
void Z_Construct_UClass_UExporter_Statics::NewProp_bSelectedOnly_SetBit(void* Obj)
{
	((UExporter*)Obj)->bSelectedOnly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UExporter_Statics::NewProp_bSelectedOnly = { "bSelectedOnly", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UExporter), &Z_Construct_UClass_UExporter_Statics::NewProp_bSelectedOnly_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSelectedOnly_MetaData), NewProp_bSelectedOnly_MetaData) };
void Z_Construct_UClass_UExporter_Statics::NewProp_bForceFileOperations_SetBit(void* Obj)
{
	((UExporter*)Obj)->bForceFileOperations = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UExporter_Statics::NewProp_bForceFileOperations = { "bForceFileOperations", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UExporter), &Z_Construct_UClass_UExporter_Statics::NewProp_bForceFileOperations_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bForceFileOperations_MetaData), NewProp_bForceFileOperations_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UExporter_Statics::NewProp_ExportTask = { "ExportTask", nullptr, (EPropertyFlags)0x0114000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UExporter, ExportTask), Z_Construct_UClass_UAssetExportTask_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExportTask_MetaData), NewProp_ExportTask_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UExporter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExporter_Statics::NewProp_SupportedClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExporter_Statics::NewProp_ExportRootScope,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExporter_Statics::NewProp_FormatExtension_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExporter_Statics::NewProp_FormatExtension,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExporter_Statics::NewProp_FormatDescription_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExporter_Statics::NewProp_FormatDescription,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExporter_Statics::NewProp_PreferredFormatIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExporter_Statics::NewProp_TextIndent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExporter_Statics::NewProp_bText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExporter_Statics::NewProp_bSelectedOnly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExporter_Statics::NewProp_bForceFileOperations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExporter_Statics::NewProp_ExportTask,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UExporter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UExporter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UExporter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UExporter_Statics::ClassParams = {
	&UExporter::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UExporter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UExporter_Statics::PropPointers),
	0,
	0x000800A9u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UExporter_Statics::Class_MetaDataParams), Z_Construct_UClass_UExporter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UExporter()
{
	if (!Z_Registration_Info_UClass_UExporter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UExporter.OuterSingleton, Z_Construct_UClass_UExporter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UExporter.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UExporter>()
{
	return UExporter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UExporter);
UExporter::~UExporter() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UExporter)
// End Class UExporter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Exporters_Exporter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UExporter, UExporter::StaticClass, TEXT("UExporter"), &Z_Registration_Info_UClass_UExporter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UExporter), 2992209411U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Exporters_Exporter_h_35944083(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Exporters_Exporter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Exporters_Exporter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
