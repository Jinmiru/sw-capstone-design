// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Classes/NiagaraEmitterHandle.h"
#include "Niagara/Public/NiagaraTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraEmitterHandle() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraEmitter_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraStatelessEmitter_NoRegister();
NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraEmitterMode();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraEmitterHandle();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FVersionedNiagaraEmitter();
UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

// Begin Enum ENiagaraEmitterMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraEmitterMode;
static UEnum* ENiagaraEmitterMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ENiagaraEmitterMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ENiagaraEmitterMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraEmitterMode, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraEmitterMode"));
	}
	return Z_Registration_Info_UEnum_ENiagaraEmitterMode.OuterSingleton;
}
template<> NIAGARA_API UEnum* StaticEnum<ENiagaraEmitterMode>()
{
	return ENiagaraEmitterMode_StaticEnum();
}
struct Z_Construct_UEnum_Niagara_ENiagaraEmitterMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/NiagaraEmitterHandle.h" },
		{ "Standard.Name", "ENiagaraEmitterMode::Standard" },
		{ "Stateless.Name", "ENiagaraEmitterMode::Stateless" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ENiagaraEmitterMode::Standard", (int64)ENiagaraEmitterMode::Standard },
		{ "ENiagaraEmitterMode::Stateless", (int64)ENiagaraEmitterMode::Stateless },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENiagaraEmitterMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	"ENiagaraEmitterMode",
	"ENiagaraEmitterMode",
	Z_Construct_UEnum_Niagara_ENiagaraEmitterMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraEmitterMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraEmitterMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Niagara_ENiagaraEmitterMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Niagara_ENiagaraEmitterMode()
{
	if (!Z_Registration_Info_UEnum_ENiagaraEmitterMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraEmitterMode.InnerSingleton, Z_Construct_UEnum_Niagara_ENiagaraEmitterMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ENiagaraEmitterMode.InnerSingleton;
}
// End Enum ENiagaraEmitterMode

// Begin ScriptStruct FNiagaraEmitterHandle
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraEmitterHandle;
class UScriptStruct* FNiagaraEmitterHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraEmitterHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraEmitterHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraEmitterHandle, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraEmitterHandle"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraEmitterHandle.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraEmitterHandle>()
{
	return FNiagaraEmitterHandle::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** \n * Stores emitter information within the context of a System.\n */" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitterHandle.h" },
		{ "ToolTip", "Stores emitter information within the context of a System." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Comment", "/** The display name for this emitter in the System. */" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitterHandle.h" },
		{ "ToolTip", "The display name for this emitter in the System." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[] = {
		{ "Category", "Emitter ID" },
		{ "Comment", "/** The id of this emitter handle. */" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitterHandle.h" },
		{ "ToolTip", "The id of this emitter handle." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IdName_MetaData[] = {
		{ "Category", "Emitter ID" },
		{ "Comment", "// HACK!  Data sets used to use the emitter name, but this isn't guaranteed to be unique.  This is a temporary hack\n// to allow the data sets to continue work with using names, but that code needs to be refactored to use the id defined here.\n" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitterHandle.h" },
		{ "ToolTip", "HACK!  Data sets used to use the emitter name, but this isn't guaranteed to be unique.  This is a temporary hack\nto allow the data sets to continue work with using names, but that code needs to be refactored to use the id defined here." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsEnabled_MetaData[] = {
		{ "Comment", "/** Whether or not this emitter is enabled within the System.  Disabled emitters aren't simulated. */" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitterHandle.h" },
		{ "ToolTip", "Whether or not this emitter is enabled within the System.  Disabled emitters aren't simulated." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[] = {
		{ "Comment", "/** The source emitter this emitter handle was built from. */" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitterHandle.h" },
		{ "ToolTip", "The source emitter this emitter handle was built from." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastMergedSource_MetaData[] = {
		{ "Comment", "/** An unmodified copy of the emitter this handle references for use when merging change from the source emitter. */" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitterHandle.h" },
		{ "ToolTip", "An unmodified copy of the emitter this handle references for use when merging change from the source emitter." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsolated_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraEmitterHandle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Instance_MetaData[] = {
		{ "Comment", "/** The copied instance of the emitter this handle references. */" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitterHandle.h" },
		{ "ToolTip", "The copied instance of the emitter this handle references." },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VersionedInstance_MetaData[] = {
		{ "Comment", "/** The copied instance of the emitter this handle references. */" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitterHandle.h" },
		{ "ToolTip", "The copied instance of the emitter this handle references." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatelessEmitter_MetaData[] = {
		{ "Comment", "//-TODO:Stateless: Should we return a bass class here / have a factory method to generate the runtime instance?\n" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitterHandle.h" },
		{ "ToolTip", "-TODO:Stateless: Should we return a bass class here / have a factory method to generate the runtime instance?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EmitterMode_MetaData[] = {
		{ "Comment", "//-TODO:Stateless: Should we return a bass class here / have a factory method to generate the runtime instance?\n" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitterHandle.h" },
		{ "ToolTip", "-TODO:Stateless: Should we return a bass class here / have a factory method to generate the runtime instance?" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Id;
	static const UECodeGen_Private::FNamePropertyParams NewProp_IdName;
	static void NewProp_bIsEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEnabled;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Source;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LastMergedSource;
	static void NewProp_bIsolated_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsolated;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instance;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_VersionedInstance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StatelessEmitter;
	static const UECodeGen_Private::FBytePropertyParams NewProp_EmitterMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_EmitterMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraEmitterHandle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraEmitterHandle, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraEmitterHandle, Id), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Id_MetaData), NewProp_Id_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::NewProp_IdName = { "IdName", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraEmitterHandle, IdName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IdName_MetaData), NewProp_IdName_MetaData) };
void Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::NewProp_bIsEnabled_SetBit(void* Obj)
{
	((FNiagaraEmitterHandle*)Obj)->bIsEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::NewProp_bIsEnabled = { "bIsEnabled", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FNiagaraEmitterHandle), &Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::NewProp_bIsEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsEnabled_MetaData), NewProp_bIsEnabled_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0144000820000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraEmitterHandle, Source_DEPRECATED), Z_Construct_UClass_UNiagaraEmitter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Source_MetaData), NewProp_Source_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::NewProp_LastMergedSource = { "LastMergedSource", nullptr, (EPropertyFlags)0x0144000820000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraEmitterHandle, LastMergedSource_DEPRECATED), Z_Construct_UClass_UNiagaraEmitter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastMergedSource_MetaData), NewProp_LastMergedSource_MetaData) };
void Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::NewProp_bIsolated_SetBit(void* Obj)
{
	((FNiagaraEmitterHandle*)Obj)->bIsolated = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::NewProp_bIsolated = { "bIsolated", nullptr, (EPropertyFlags)0x0040000800002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FNiagaraEmitterHandle), &Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::NewProp_bIsolated_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsolated_MetaData), NewProp_bIsolated_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::NewProp_Instance = { "Instance", nullptr, (EPropertyFlags)0x0144000820000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraEmitterHandle, Instance_DEPRECATED), Z_Construct_UClass_UNiagaraEmitter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Instance_MetaData), NewProp_Instance_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::NewProp_VersionedInstance = { "VersionedInstance", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraEmitterHandle, VersionedInstance), Z_Construct_UScriptStruct_FVersionedNiagaraEmitter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VersionedInstance_MetaData), NewProp_VersionedInstance_MetaData) }; // 1570330652
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::NewProp_StatelessEmitter = { "StatelessEmitter", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraEmitterHandle, StatelessEmitter), Z_Construct_UClass_UNiagaraStatelessEmitter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatelessEmitter_MetaData), NewProp_StatelessEmitter_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::NewProp_EmitterMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::NewProp_EmitterMode = { "EmitterMode", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraEmitterHandle, EmitterMode), Z_Construct_UEnum_Niagara_ENiagaraEmitterMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EmitterMode_MetaData), NewProp_EmitterMode_MetaData) }; // 2904958751
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::NewProp_Id,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::NewProp_IdName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::NewProp_bIsEnabled,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::NewProp_Source,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::NewProp_LastMergedSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::NewProp_bIsolated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::NewProp_Instance,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::NewProp_VersionedInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::NewProp_StatelessEmitter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::NewProp_EmitterMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::NewProp_EmitterMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	&NewStructOps,
	"NiagaraEmitterHandle",
	Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::PropPointers),
	sizeof(FNiagaraEmitterHandle),
	alignof(FNiagaraEmitterHandle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNiagaraEmitterHandle()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraEmitterHandle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraEmitterHandle.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NiagaraEmitterHandle.InnerSingleton;
}
// End ScriptStruct FNiagaraEmitterHandle

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEmitterHandle_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ENiagaraEmitterMode_StaticEnum, TEXT("ENiagaraEmitterMode"), &Z_Registration_Info_UEnum_ENiagaraEmitterMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2904958751U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FNiagaraEmitterHandle::StaticStruct, Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::NewStructOps, TEXT("NiagaraEmitterHandle"), &Z_Registration_Info_UScriptStruct_NiagaraEmitterHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraEmitterHandle), 2060940165U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEmitterHandle_h_3797551980(TEXT("/Script/Niagara"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEmitterHandle_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEmitterHandle_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEmitterHandle_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEmitterHandle_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
