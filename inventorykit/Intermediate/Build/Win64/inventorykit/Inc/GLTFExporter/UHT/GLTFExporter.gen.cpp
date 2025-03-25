// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GLTFExporter/Public/Exporters/GLTFExporter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGLTFExporter() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UExporter();
GLTFEXPORTER_API UClass* Z_Construct_UClass_UGLTFExporter();
GLTFEXPORTER_API UClass* Z_Construct_UClass_UGLTFExporter_NoRegister();
GLTFEXPORTER_API UClass* Z_Construct_UClass_UGLTFExportOptions_NoRegister();
GLTFEXPORTER_API UScriptStruct* Z_Construct_UScriptStruct_FGLTFExportMessages();
UPackage* Z_Construct_UPackage__Script_GLTFExporter();
// End Cross Module References

// Begin ScriptStruct FGLTFExportMessages
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GLTFExportMessages;
class UScriptStruct* FGLTFExportMessages::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GLTFExportMessages.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GLTFExportMessages.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGLTFExportMessages, (UObject*)Z_Construct_UPackage__Script_GLTFExporter(), TEXT("GLTFExportMessages"));
	}
	return Z_Registration_Info_UScriptStruct_GLTFExportMessages.OuterSingleton;
}
template<> GLTFEXPORTER_API UScriptStruct* StaticStruct<FGLTFExportMessages>()
{
	return FGLTFExportMessages::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGLTFExportMessages_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Exporters/GLTFExporter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Suggestions_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/Exporters/GLTFExporter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Warnings_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/Exporters/GLTFExporter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Errors_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/Exporters/GLTFExporter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Suggestions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Suggestions;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Warnings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Warnings;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Errors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Errors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGLTFExportMessages>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGLTFExportMessages_Statics::NewProp_Suggestions_Inner = { "Suggestions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGLTFExportMessages_Statics::NewProp_Suggestions = { "Suggestions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGLTFExportMessages, Suggestions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Suggestions_MetaData), NewProp_Suggestions_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGLTFExportMessages_Statics::NewProp_Warnings_Inner = { "Warnings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGLTFExportMessages_Statics::NewProp_Warnings = { "Warnings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGLTFExportMessages, Warnings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Warnings_MetaData), NewProp_Warnings_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGLTFExportMessages_Statics::NewProp_Errors_Inner = { "Errors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGLTFExportMessages_Statics::NewProp_Errors = { "Errors", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGLTFExportMessages, Errors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Errors_MetaData), NewProp_Errors_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGLTFExportMessages_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGLTFExportMessages_Statics::NewProp_Suggestions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGLTFExportMessages_Statics::NewProp_Suggestions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGLTFExportMessages_Statics::NewProp_Warnings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGLTFExportMessages_Statics::NewProp_Warnings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGLTFExportMessages_Statics::NewProp_Errors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGLTFExportMessages_Statics::NewProp_Errors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGLTFExportMessages_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGLTFExportMessages_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GLTFExporter,
	nullptr,
	&NewStructOps,
	"GLTFExportMessages",
	Z_Construct_UScriptStruct_FGLTFExportMessages_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGLTFExportMessages_Statics::PropPointers),
	sizeof(FGLTFExportMessages),
	alignof(FGLTFExportMessages),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGLTFExportMessages_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGLTFExportMessages_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGLTFExportMessages()
{
	if (!Z_Registration_Info_UScriptStruct_GLTFExportMessages.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GLTFExportMessages.InnerSingleton, Z_Construct_UScriptStruct_FGLTFExportMessages_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GLTFExportMessages.InnerSingleton;
}
// End ScriptStruct FGLTFExportMessages

// Begin Class UGLTFExporter Function ExportToGLTF
struct Z_Construct_UFunction_UGLTFExporter_ExportToGLTF_Statics
{
	struct GLTFExporter_eventExportToGLTF_Parms
	{
		UObject* Object;
		FString FilePath;
		const UGLTFExportOptions* Options;
		TSet<AActor*> SelectedActors;
		FGLTFExportMessages OutMessages;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "SelectedActors" },
		{ "Category", "Miscellaneous" },
		{ "Comment", "/**\n\x09 * Export the specified object to a glTF file (.gltf or .glb)\n\x09 *\n\x09 * @param Object          The object to export (supported types are UMaterialInterface, UStaticMesh, USkeletalMesh, UWorld, UAnimSequence, ULevelSequence, ULevelVariantSets). Will default to the currently active world if null.\n\x09 * @param FilePath        The filename on disk to save as. Associated textures and binary files will be saved in the same folder, unless file extension is .glb - which results in a self-contained binary file.\n\x09 * @param Options         The various options to use during export. Will default to the project's user-specific editor settings if null.\n\x09 * @param SelectedActors  The set of actors to export, only applicable if the object to export is a UWorld. An empty set results in the export of all actors.\n\x09 * @param OutMessages     The resulting log messages from the export.\n\x09 *\n\x09 * @return true if the object was successfully exported\n\x09 */" },
		{ "ModuleRelativePath", "Public/Exporters/GLTFExporter.h" },
		{ "ToolTip", "Export the specified object to a glTF file (.gltf or .glb)\n\n@param Object          The object to export (supported types are UMaterialInterface, UStaticMesh, USkeletalMesh, UWorld, UAnimSequence, ULevelSequence, ULevelVariantSets). Will default to the currently active world if null.\n@param FilePath        The filename on disk to save as. Associated textures and binary files will be saved in the same folder, unless file extension is .glb - which results in a self-contained binary file.\n@param Options         The various options to use during export. Will default to the project's user-specific editor settings if null.\n@param SelectedActors  The set of actors to export, only applicable if the object to export is a UWorld. An empty set results in the export of all actors.\n@param OutMessages     The resulting log messages from the export.\n\n@return true if the object was successfully exported" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Options_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedActors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Options;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectedActors_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_SelectedActors;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutMessages;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGLTFExporter_ExportToGLTF_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GLTFExporter_eventExportToGLTF_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGLTFExporter_ExportToGLTF_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GLTFExporter_eventExportToGLTF_Parms, FilePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilePath_MetaData), NewProp_FilePath_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGLTFExporter_ExportToGLTF_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GLTFExporter_eventExportToGLTF_Parms, Options), Z_Construct_UClass_UGLTFExportOptions_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Options_MetaData), NewProp_Options_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGLTFExporter_ExportToGLTF_Statics::NewProp_SelectedActors_ElementProp = { "SelectedActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UGLTFExporter_ExportToGLTF_Statics::NewProp_SelectedActors = { "SelectedActors", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GLTFExporter_eventExportToGLTF_Parms, SelectedActors), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedActors_MetaData), NewProp_SelectedActors_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGLTFExporter_ExportToGLTF_Statics::NewProp_OutMessages = { "OutMessages", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GLTFExporter_eventExportToGLTF_Parms, OutMessages), Z_Construct_UScriptStruct_FGLTFExportMessages, METADATA_PARAMS(0, nullptr) }; // 411955686
void Z_Construct_UFunction_UGLTFExporter_ExportToGLTF_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GLTFExporter_eventExportToGLTF_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGLTFExporter_ExportToGLTF_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GLTFExporter_eventExportToGLTF_Parms), &Z_Construct_UFunction_UGLTFExporter_ExportToGLTF_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLTFExporter_ExportToGLTF_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLTFExporter_ExportToGLTF_Statics::NewProp_Object,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLTFExporter_ExportToGLTF_Statics::NewProp_FilePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLTFExporter_ExportToGLTF_Statics::NewProp_Options,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLTFExporter_ExportToGLTF_Statics::NewProp_SelectedActors_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLTFExporter_ExportToGLTF_Statics::NewProp_SelectedActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLTFExporter_ExportToGLTF_Statics::NewProp_OutMessages,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLTFExporter_ExportToGLTF_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLTFExporter_ExportToGLTF_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLTFExporter_ExportToGLTF_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLTFExporter, nullptr, "ExportToGLTF", nullptr, nullptr, Z_Construct_UFunction_UGLTFExporter_ExportToGLTF_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLTFExporter_ExportToGLTF_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGLTFExporter_ExportToGLTF_Statics::GLTFExporter_eventExportToGLTF_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGLTFExporter_ExportToGLTF_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGLTFExporter_ExportToGLTF_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGLTFExporter_ExportToGLTF_Statics::GLTFExporter_eventExportToGLTF_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGLTFExporter_ExportToGLTF()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLTFExporter_ExportToGLTF_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGLTFExporter::execExportToGLTF)
{
	P_GET_OBJECT(UObject,Z_Param_Object);
	P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
	P_GET_OBJECT(UGLTFExportOptions,Z_Param_Options);
	P_GET_TSET_REF(AActor*,Z_Param_Out_SelectedActors);
	P_GET_STRUCT_REF(FGLTFExportMessages,Z_Param_Out_OutMessages);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UGLTFExporter::ExportToGLTF(Z_Param_Object,Z_Param_FilePath,Z_Param_Options,Z_Param_Out_SelectedActors,Z_Param_Out_OutMessages);
	P_NATIVE_END;
}
// End Class UGLTFExporter Function ExportToGLTF

// Begin Class UGLTFExporter
void UGLTFExporter::StaticRegisterNativesUGLTFExporter()
{
	UClass* Class = UGLTFExporter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ExportToGLTF", &UGLTFExporter::execExportToGLTF },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGLTFExporter);
UClass* Z_Construct_UClass_UGLTFExporter_NoRegister()
{
	return UGLTFExporter::StaticClass();
}
struct Z_Construct_UClass_UGLTFExporter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Exporters/GLTFExporter.h" },
		{ "ModuleRelativePath", "Public/Exporters/GLTFExporter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGLTFExporter_ExportToGLTF, "ExportToGLTF" }, // 3153713925
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGLTFExporter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGLTFExporter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UExporter,
	(UObject* (*)())Z_Construct_UPackage__Script_GLTFExporter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGLTFExporter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGLTFExporter_Statics::ClassParams = {
	&UGLTFExporter::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A9u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGLTFExporter_Statics::Class_MetaDataParams), Z_Construct_UClass_UGLTFExporter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGLTFExporter()
{
	if (!Z_Registration_Info_UClass_UGLTFExporter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGLTFExporter.OuterSingleton, Z_Construct_UClass_UGLTFExporter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGLTFExporter.OuterSingleton;
}
template<> GLTFEXPORTER_API UClass* StaticClass<UGLTFExporter>()
{
	return UGLTFExporter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGLTFExporter);
UGLTFExporter::~UGLTFExporter() {}
// End Class UGLTFExporter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Exporters_GLTFExporter_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGLTFExportMessages::StaticStruct, Z_Construct_UScriptStruct_FGLTFExportMessages_Statics::NewStructOps, TEXT("GLTFExportMessages"), &Z_Registration_Info_UScriptStruct_GLTFExportMessages, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGLTFExportMessages), 411955686U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGLTFExporter, UGLTFExporter::StaticClass, TEXT("UGLTFExporter"), &Z_Registration_Info_UClass_UGLTFExporter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGLTFExporter), 2979549328U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Exporters_GLTFExporter_h_1238916016(TEXT("/Script/GLTFExporter"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Exporters_GLTFExporter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Exporters_GLTFExporter_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Exporters_GLTFExporter_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Exporters_GLTFExporter_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
