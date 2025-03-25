// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Public/NiagaraSimStageExecutionData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraSimStageExecutionData() {}

// Begin Cross Module References
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraSimStageExecutionLoopData();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraSimStageExecutionLoopEditorData();
UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

// Begin ScriptStruct FNiagaraSimStageExecutionLoopEditorData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraSimStageExecutionLoopEditorData;
class UScriptStruct* FNiagaraSimStageExecutionLoopEditorData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraSimStageExecutionLoopEditorData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraSimStageExecutionLoopEditorData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraSimStageExecutionLoopEditorData, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraSimStageExecutionLoopEditorData"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraSimStageExecutionLoopEditorData.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraSimStageExecutionLoopEditorData>()
{
	return FNiagaraSimStageExecutionLoopEditorData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNiagaraSimStageExecutionLoopEditorData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraSimStageExecutionData.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[] = {
		{ "Category", "Stage Loop" },
		{ "ModuleRelativePath", "Public/NiagaraSimStageExecutionData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumLoopsBindingName_MetaData[] = {
		{ "Category", "Stage Loop" },
		{ "ModuleRelativePath", "Public/NiagaraSimStageExecutionData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumLoops_MetaData[] = {
		{ "Category", "Stage Loop" },
		{ "ModuleRelativePath", "Public/NiagaraSimStageExecutionData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StageNameStart_MetaData[] = {
		{ "Category", "Stage Loop" },
		{ "ModuleRelativePath", "Public/NiagaraSimStageExecutionData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StageNameEnd_MetaData[] = {
		{ "Category", "Stage Loop" },
		{ "ModuleRelativePath", "Public/NiagaraSimStageExecutionData.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FNamePropertyParams NewProp_NumLoopsBindingName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumLoops;
	static const UECodeGen_Private::FNamePropertyParams NewProp_StageNameStart;
	static const UECodeGen_Private::FNamePropertyParams NewProp_StageNameEnd;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraSimStageExecutionLoopEditorData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
#if WITH_EDITORONLY_DATA
void Z_Construct_UScriptStruct_FNiagaraSimStageExecutionLoopEditorData_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((FNiagaraSimStageExecutionLoopEditorData*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraSimStageExecutionLoopEditorData_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FNiagaraSimStageExecutionLoopEditorData), &Z_Construct_UScriptStruct_FNiagaraSimStageExecutionLoopEditorData_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnabled_MetaData), NewProp_bEnabled_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraSimStageExecutionLoopEditorData_Statics::NewProp_NumLoopsBindingName = { "NumLoopsBindingName", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraSimStageExecutionLoopEditorData, NumLoopsBindingName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumLoopsBindingName_MetaData), NewProp_NumLoopsBindingName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraSimStageExecutionLoopEditorData_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraSimStageExecutionLoopEditorData, NumLoops), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumLoops_MetaData), NewProp_NumLoops_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraSimStageExecutionLoopEditorData_Statics::NewProp_StageNameStart = { "StageNameStart", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraSimStageExecutionLoopEditorData, StageNameStart), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StageNameStart_MetaData), NewProp_StageNameStart_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraSimStageExecutionLoopEditorData_Statics::NewProp_StageNameEnd = { "StageNameEnd", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraSimStageExecutionLoopEditorData, StageNameEnd), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StageNameEnd_MetaData), NewProp_StageNameEnd_MetaData) };
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraSimStageExecutionLoopEditorData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSimStageExecutionLoopEditorData_Statics::NewProp_bEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSimStageExecutionLoopEditorData_Statics::NewProp_NumLoopsBindingName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSimStageExecutionLoopEditorData_Statics::NewProp_NumLoops,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSimStageExecutionLoopEditorData_Statics::NewProp_StageNameStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSimStageExecutionLoopEditorData_Statics::NewProp_StageNameEnd,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSimStageExecutionLoopEditorData_Statics::PropPointers) < 2048);
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraSimStageExecutionLoopEditorData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	&NewStructOps,
	"NiagaraSimStageExecutionLoopEditorData",
	IF_WITH_EDITORONLY_DATA(Z_Construct_UScriptStruct_FNiagaraSimStageExecutionLoopEditorData_Statics::PropPointers, nullptr),
	IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSimStageExecutionLoopEditorData_Statics::PropPointers), 0),
	sizeof(FNiagaraSimStageExecutionLoopEditorData),
	alignof(FNiagaraSimStageExecutionLoopEditorData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSimStageExecutionLoopEditorData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNiagaraSimStageExecutionLoopEditorData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNiagaraSimStageExecutionLoopEditorData()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraSimStageExecutionLoopEditorData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraSimStageExecutionLoopEditorData.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraSimStageExecutionLoopEditorData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NiagaraSimStageExecutionLoopEditorData.InnerSingleton;
}
// End ScriptStruct FNiagaraSimStageExecutionLoopEditorData

// Begin ScriptStruct FNiagaraSimStageExecutionLoopData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraSimStageExecutionLoopData;
class UScriptStruct* FNiagaraSimStageExecutionLoopData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraSimStageExecutionLoopData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraSimStageExecutionLoopData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraSimStageExecutionLoopData, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraSimStageExecutionLoopData"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraSimStageExecutionLoopData.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraSimStageExecutionLoopData>()
{
	return FNiagaraSimStageExecutionLoopData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNiagaraSimStageExecutionLoopData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraSimStageExecutionData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumLoopsBinding_MetaData[] = {
		{ "Category", "SimStageLoop" },
		{ "ModuleRelativePath", "Public/NiagaraSimStageExecutionData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumLoops_MetaData[] = {
		{ "Category", "SimStageLoop" },
		{ "ModuleRelativePath", "Public/NiagaraSimStageExecutionData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartStageIndex_MetaData[] = {
		{ "Category", "SimStageLoop" },
		{ "ModuleRelativePath", "Public/NiagaraSimStageExecutionData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndStageIndex_MetaData[] = {
		{ "Category", "SimStageLoop" },
		{ "ModuleRelativePath", "Public/NiagaraSimStageExecutionData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_NumLoopsBinding;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumLoops;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StartStageIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EndStageIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraSimStageExecutionLoopData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraSimStageExecutionLoopData_Statics::NewProp_NumLoopsBinding = { "NumLoopsBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraSimStageExecutionLoopData, NumLoopsBinding), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumLoopsBinding_MetaData), NewProp_NumLoopsBinding_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraSimStageExecutionLoopData_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraSimStageExecutionLoopData, NumLoops), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumLoops_MetaData), NewProp_NumLoops_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraSimStageExecutionLoopData_Statics::NewProp_StartStageIndex = { "StartStageIndex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraSimStageExecutionLoopData, StartStageIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartStageIndex_MetaData), NewProp_StartStageIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraSimStageExecutionLoopData_Statics::NewProp_EndStageIndex = { "EndStageIndex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraSimStageExecutionLoopData, EndStageIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndStageIndex_MetaData), NewProp_EndStageIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraSimStageExecutionLoopData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSimStageExecutionLoopData_Statics::NewProp_NumLoopsBinding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSimStageExecutionLoopData_Statics::NewProp_NumLoops,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSimStageExecutionLoopData_Statics::NewProp_StartStageIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSimStageExecutionLoopData_Statics::NewProp_EndStageIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSimStageExecutionLoopData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraSimStageExecutionLoopData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	&NewStructOps,
	"NiagaraSimStageExecutionLoopData",
	Z_Construct_UScriptStruct_FNiagaraSimStageExecutionLoopData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSimStageExecutionLoopData_Statics::PropPointers),
	sizeof(FNiagaraSimStageExecutionLoopData),
	alignof(FNiagaraSimStageExecutionLoopData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSimStageExecutionLoopData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNiagaraSimStageExecutionLoopData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNiagaraSimStageExecutionLoopData()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraSimStageExecutionLoopData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraSimStageExecutionLoopData.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraSimStageExecutionLoopData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NiagaraSimStageExecutionLoopData.InnerSingleton;
}
// End ScriptStruct FNiagaraSimStageExecutionLoopData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSimStageExecutionData_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FNiagaraSimStageExecutionLoopEditorData::StaticStruct, Z_Construct_UScriptStruct_FNiagaraSimStageExecutionLoopEditorData_Statics::NewStructOps, TEXT("NiagaraSimStageExecutionLoopEditorData"), &Z_Registration_Info_UScriptStruct_NiagaraSimStageExecutionLoopEditorData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraSimStageExecutionLoopEditorData), 567433148U) },
		{ FNiagaraSimStageExecutionLoopData::StaticStruct, Z_Construct_UScriptStruct_FNiagaraSimStageExecutionLoopData_Statics::NewStructOps, TEXT("NiagaraSimStageExecutionLoopData"), &Z_Registration_Info_UScriptStruct_NiagaraSimStageExecutionLoopData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraSimStageExecutionLoopData), 3118372453U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSimStageExecutionData_h_3127431276(TEXT("/Script/Niagara"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSimStageExecutionData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSimStageExecutionData_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
