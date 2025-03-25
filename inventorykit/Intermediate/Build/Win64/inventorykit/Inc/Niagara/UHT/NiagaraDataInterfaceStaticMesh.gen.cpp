// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Internal/DataInterface/NiagaraDataInterfaceStaticMesh.h"
#include "Niagara/Public/NiagaraCommon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceStaticMesh() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EEndPlayReason();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterface();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_NoRegister();
NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENDIStaticMesh_SourceMode();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNDIStaticMeshSectionFilter();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraUserParameterBinding();
UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

// Begin Enum ENDIStaticMesh_SourceMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENDIStaticMesh_SourceMode;
static UEnum* ENDIStaticMesh_SourceMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ENDIStaticMesh_SourceMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ENDIStaticMesh_SourceMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENDIStaticMesh_SourceMode, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENDIStaticMesh_SourceMode"));
	}
	return Z_Registration_Info_UEnum_ENDIStaticMesh_SourceMode.OuterSingleton;
}
template<> NIAGARA_API UEnum* StaticEnum<ENDIStaticMesh_SourceMode>()
{
	return ENDIStaticMesh_SourceMode_StaticEnum();
}
struct Z_Construct_UEnum_Niagara_ENDIStaticMesh_SourceMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AttachParent.Comment", "/**\x09Only use the parent actor or component the system is attached to. */" },
		{ "AttachParent.Name", "ENDIStaticMesh_SourceMode::AttachParent" },
		{ "AttachParent.ToolTip", "Only use the parent actor or component the system is attached to." },
		{ "Default.Comment", "/**\n\x09""Default behavior follows the order of.\n\x09- Use \"Source\" when specified (either set explicitly or via blueprint with Set Niagara Static Mesh Component).\n\x09- Use Mesh Parameter Binding if valid\n\x09- Find Static Mesh Component, Attached Actor, Attached Component\n\x09- Falls back to 'Default Mesh' specified on the data interface\n\x09*/" },
		{ "Default.Name", "ENDIStaticMesh_SourceMode::Default" },
		{ "Default.ToolTip", "Default behavior follows the order of.\n- Use \"Source\" when specified (either set explicitly or via blueprint with Set Niagara Static Mesh Component).\n- Use Mesh Parameter Binding if valid\n- Find Static Mesh Component, Attached Actor, Attached Component\n- Falls back to 'Default Mesh' specified on the data interface" },
		{ "DefaultMeshOnly.Comment", "/** Only use the \"Default Mesh\" specified. */" },
		{ "DefaultMeshOnly.Name", "ENDIStaticMesh_SourceMode::DefaultMeshOnly" },
		{ "DefaultMeshOnly.ToolTip", "Only use the \"Default Mesh\" specified." },
		{ "MeshParameterBinding.Comment", "/** Only use the mesh parameter binding. */" },
		{ "MeshParameterBinding.Name", "ENDIStaticMesh_SourceMode::MeshParameterBinding" },
		{ "MeshParameterBinding.ToolTip", "Only use the mesh parameter binding." },
		{ "ModuleRelativePath", "Internal/DataInterface/NiagaraDataInterfaceStaticMesh.h" },
		{ "Source.Comment", "/**\x09Only use \"Source\" (either set explicitly or via blueprint with Set Niagara Static Mesh Component). */" },
		{ "Source.Name", "ENDIStaticMesh_SourceMode::Source" },
		{ "Source.ToolTip", "Only use \"Source\" (either set explicitly or via blueprint with Set Niagara Static Mesh Component)." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ENDIStaticMesh_SourceMode::Default", (int64)ENDIStaticMesh_SourceMode::Default },
		{ "ENDIStaticMesh_SourceMode::Source", (int64)ENDIStaticMesh_SourceMode::Source },
		{ "ENDIStaticMesh_SourceMode::AttachParent", (int64)ENDIStaticMesh_SourceMode::AttachParent },
		{ "ENDIStaticMesh_SourceMode::DefaultMeshOnly", (int64)ENDIStaticMesh_SourceMode::DefaultMeshOnly },
		{ "ENDIStaticMesh_SourceMode::MeshParameterBinding", (int64)ENDIStaticMesh_SourceMode::MeshParameterBinding },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENDIStaticMesh_SourceMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	"ENDIStaticMesh_SourceMode",
	"ENDIStaticMesh_SourceMode",
	Z_Construct_UEnum_Niagara_ENDIStaticMesh_SourceMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENDIStaticMesh_SourceMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENDIStaticMesh_SourceMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Niagara_ENDIStaticMesh_SourceMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Niagara_ENDIStaticMesh_SourceMode()
{
	if (!Z_Registration_Info_UEnum_ENDIStaticMesh_SourceMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENDIStaticMesh_SourceMode.InnerSingleton, Z_Construct_UEnum_Niagara_ENDIStaticMesh_SourceMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ENDIStaticMesh_SourceMode.InnerSingleton;
}
// End Enum ENDIStaticMesh_SourceMode

// Begin ScriptStruct FNDIStaticMeshSectionFilter
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NDIStaticMeshSectionFilter;
class UScriptStruct* FNDIStaticMeshSectionFilter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NDIStaticMeshSectionFilter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NDIStaticMeshSectionFilter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNDIStaticMeshSectionFilter, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NDIStaticMeshSectionFilter"));
	}
	return Z_Registration_Info_UScriptStruct_NDIStaticMeshSectionFilter.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNDIStaticMeshSectionFilter>()
{
	return FNDIStaticMeshSectionFilter::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNDIStaticMeshSectionFilter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Internal/DataInterface/NiagaraDataInterfaceStaticMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllowedMaterialSlots_MetaData[] = {
		{ "Category", "Section Filter" },
		{ "Comment", "/** Only allow sections these material slots. */" },
		{ "ModuleRelativePath", "Internal/DataInterface/NiagaraDataInterfaceStaticMesh.h" },
		{ "ToolTip", "Only allow sections these material slots." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_AllowedMaterialSlots_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AllowedMaterialSlots;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNDIStaticMeshSectionFilter>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNDIStaticMeshSectionFilter_Statics::NewProp_AllowedMaterialSlots_Inner = { "AllowedMaterialSlots", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNDIStaticMeshSectionFilter_Statics::NewProp_AllowedMaterialSlots = { "AllowedMaterialSlots", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNDIStaticMeshSectionFilter, AllowedMaterialSlots), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllowedMaterialSlots_MetaData), NewProp_AllowedMaterialSlots_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNDIStaticMeshSectionFilter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNDIStaticMeshSectionFilter_Statics::NewProp_AllowedMaterialSlots_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNDIStaticMeshSectionFilter_Statics::NewProp_AllowedMaterialSlots,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNDIStaticMeshSectionFilter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNDIStaticMeshSectionFilter_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	&NewStructOps,
	"NDIStaticMeshSectionFilter",
	Z_Construct_UScriptStruct_FNDIStaticMeshSectionFilter_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNDIStaticMeshSectionFilter_Statics::PropPointers),
	sizeof(FNDIStaticMeshSectionFilter),
	alignof(FNDIStaticMeshSectionFilter),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNDIStaticMeshSectionFilter_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNDIStaticMeshSectionFilter_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNDIStaticMeshSectionFilter()
{
	if (!Z_Registration_Info_UScriptStruct_NDIStaticMeshSectionFilter.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NDIStaticMeshSectionFilter.InnerSingleton, Z_Construct_UScriptStruct_FNDIStaticMeshSectionFilter_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NDIStaticMeshSectionFilter.InnerSingleton;
}
// End ScriptStruct FNDIStaticMeshSectionFilter

// Begin Class UNiagaraDataInterfaceStaticMesh Function OnSourceEndPlay
struct Z_Construct_UFunction_UNiagaraDataInterfaceStaticMesh_OnSourceEndPlay_Statics
{
	struct NiagaraDataInterfaceStaticMesh_eventOnSourceEndPlay_Parms
	{
		AActor* InSource;
		TEnumAsByte<EEndPlayReason::Type> Reason;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Internal/DataInterface/NiagaraDataInterfaceStaticMesh.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InSource;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Reason;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceStaticMesh_OnSourceEndPlay_Statics::NewProp_InSource = { "InSource", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataInterfaceStaticMesh_eventOnSourceEndPlay_Parms, InSource), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceStaticMesh_OnSourceEndPlay_Statics::NewProp_Reason = { "Reason", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataInterfaceStaticMesh_eventOnSourceEndPlay_Parms, Reason), Z_Construct_UEnum_Engine_EEndPlayReason, METADATA_PARAMS(0, nullptr) }; // 2448981352
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataInterfaceStaticMesh_OnSourceEndPlay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceStaticMesh_OnSourceEndPlay_Statics::NewProp_InSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceStaticMesh_OnSourceEndPlay_Statics::NewProp_Reason,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceStaticMesh_OnSourceEndPlay_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataInterfaceStaticMesh_OnSourceEndPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh, nullptr, "OnSourceEndPlay", nullptr, nullptr, Z_Construct_UFunction_UNiagaraDataInterfaceStaticMesh_OnSourceEndPlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceStaticMesh_OnSourceEndPlay_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNiagaraDataInterfaceStaticMesh_OnSourceEndPlay_Statics::NiagaraDataInterfaceStaticMesh_eventOnSourceEndPlay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceStaticMesh_OnSourceEndPlay_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNiagaraDataInterfaceStaticMesh_OnSourceEndPlay_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNiagaraDataInterfaceStaticMesh_OnSourceEndPlay_Statics::NiagaraDataInterfaceStaticMesh_eventOnSourceEndPlay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNiagaraDataInterfaceStaticMesh_OnSourceEndPlay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraDataInterfaceStaticMesh_OnSourceEndPlay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNiagaraDataInterfaceStaticMesh::execOnSourceEndPlay)
{
	P_GET_OBJECT(AActor,Z_Param_InSource);
	P_GET_PROPERTY(FByteProperty,Z_Param_Reason);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnSourceEndPlay(Z_Param_InSource,EEndPlayReason::Type(Z_Param_Reason));
	P_NATIVE_END;
}
// End Class UNiagaraDataInterfaceStaticMesh Function OnSourceEndPlay

// Begin Class UNiagaraDataInterfaceStaticMesh Function SetNiagaraStaticMeshDIInstanceIndex
struct Z_Construct_UFunction_UNiagaraDataInterfaceStaticMesh_SetNiagaraStaticMeshDIInstanceIndex_Statics
{
	struct NiagaraDataInterfaceStaticMesh_eventSetNiagaraStaticMeshDIInstanceIndex_Parms
	{
		UNiagaraComponent* NiagaraSystem;
		FName UserParameterName;
		int32 NewInstanceIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "DisplayName", "Set Niagara Static Mesh DI Instance Index" },
		{ "ModuleRelativePath", "Internal/DataInterface/NiagaraDataInterfaceStaticMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraSystem_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserParameterName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraSystem;
	static const UECodeGen_Private::FNamePropertyParams NewProp_UserParameterName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewInstanceIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceStaticMesh_SetNiagaraStaticMeshDIInstanceIndex_Statics::NewProp_NiagaraSystem = { "NiagaraSystem", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataInterfaceStaticMesh_eventSetNiagaraStaticMeshDIInstanceIndex_Parms, NiagaraSystem), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NiagaraSystem_MetaData), NewProp_NiagaraSystem_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceStaticMesh_SetNiagaraStaticMeshDIInstanceIndex_Statics::NewProp_UserParameterName = { "UserParameterName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataInterfaceStaticMesh_eventSetNiagaraStaticMeshDIInstanceIndex_Parms, UserParameterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserParameterName_MetaData), NewProp_UserParameterName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceStaticMesh_SetNiagaraStaticMeshDIInstanceIndex_Statics::NewProp_NewInstanceIndex = { "NewInstanceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataInterfaceStaticMesh_eventSetNiagaraStaticMeshDIInstanceIndex_Parms, NewInstanceIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataInterfaceStaticMesh_SetNiagaraStaticMeshDIInstanceIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceStaticMesh_SetNiagaraStaticMeshDIInstanceIndex_Statics::NewProp_NiagaraSystem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceStaticMesh_SetNiagaraStaticMeshDIInstanceIndex_Statics::NewProp_UserParameterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceStaticMesh_SetNiagaraStaticMeshDIInstanceIndex_Statics::NewProp_NewInstanceIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceStaticMesh_SetNiagaraStaticMeshDIInstanceIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataInterfaceStaticMesh_SetNiagaraStaticMeshDIInstanceIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh, nullptr, "SetNiagaraStaticMeshDIInstanceIndex", nullptr, nullptr, Z_Construct_UFunction_UNiagaraDataInterfaceStaticMesh_SetNiagaraStaticMeshDIInstanceIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceStaticMesh_SetNiagaraStaticMeshDIInstanceIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNiagaraDataInterfaceStaticMesh_SetNiagaraStaticMeshDIInstanceIndex_Statics::NiagaraDataInterfaceStaticMesh_eventSetNiagaraStaticMeshDIInstanceIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceStaticMesh_SetNiagaraStaticMeshDIInstanceIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNiagaraDataInterfaceStaticMesh_SetNiagaraStaticMeshDIInstanceIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNiagaraDataInterfaceStaticMesh_SetNiagaraStaticMeshDIInstanceIndex_Statics::NiagaraDataInterfaceStaticMesh_eventSetNiagaraStaticMeshDIInstanceIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNiagaraDataInterfaceStaticMesh_SetNiagaraStaticMeshDIInstanceIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraDataInterfaceStaticMesh_SetNiagaraStaticMeshDIInstanceIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNiagaraDataInterfaceStaticMesh::execSetNiagaraStaticMeshDIInstanceIndex)
{
	P_GET_OBJECT(UNiagaraComponent,Z_Param_NiagaraSystem);
	P_GET_PROPERTY(FNameProperty,Z_Param_UserParameterName);
	P_GET_PROPERTY(FIntProperty,Z_Param_NewInstanceIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	UNiagaraDataInterfaceStaticMesh::SetNiagaraStaticMeshDIInstanceIndex(Z_Param_NiagaraSystem,Z_Param_UserParameterName,Z_Param_NewInstanceIndex);
	P_NATIVE_END;
}
// End Class UNiagaraDataInterfaceStaticMesh Function SetNiagaraStaticMeshDIInstanceIndex

// Begin Class UNiagaraDataInterfaceStaticMesh
void UNiagaraDataInterfaceStaticMesh::StaticRegisterNativesUNiagaraDataInterfaceStaticMesh()
{
	UClass* Class = UNiagaraDataInterfaceStaticMesh::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnSourceEndPlay", &UNiagaraDataInterfaceStaticMesh::execOnSourceEndPlay },
		{ "SetNiagaraStaticMeshDIInstanceIndex", &UNiagaraDataInterfaceStaticMesh::execSetNiagaraStaticMeshDIInstanceIndex },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDataInterfaceStaticMesh);
UClass* Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_NoRegister()
{
	return UNiagaraDataInterfaceStaticMesh::StaticClass();
}
struct Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Meshes" },
		{ "Comment", "/** Data Interface allowing sampling of static meshes. */" },
		{ "DisplayName", "Static Mesh" },
		{ "IncludePath", "DataInterface/NiagaraDataInterfaceStaticMesh.h" },
		{ "ModuleRelativePath", "Internal/DataInterface/NiagaraDataInterfaceStaticMesh.h" },
		{ "ToolTip", "Data Interface allowing sampling of static meshes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceMode_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Controls how to retrieve the Static Mesh Component to attach to. */" },
		{ "ModuleRelativePath", "Internal/DataInterface/NiagaraDataInterfaceStaticMesh.h" },
		{ "ToolTip", "Controls how to retrieve the Static Mesh Component to attach to." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewMesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Mesh used to sample from when not overridden by a source actor from the scene. Only available in editor for previewing. This is removed in cooked builds. */" },
		{ "ModuleRelativePath", "Internal/DataInterface/NiagaraDataInterfaceStaticMesh.h" },
		{ "ToolTip", "Mesh used to sample from when not overridden by a source actor from the scene. Only available in editor for previewing. This is removed in cooked builds." },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Mesh used to sample from when not overridden by a source actor from the scene. This mesh is NOT removed from cooked builds. */" },
		{ "ModuleRelativePath", "Internal/DataInterface/NiagaraDataInterfaceStaticMesh.h" },
		{ "ToolTip", "Mesh used to sample from when not overridden by a source actor from the scene. This mesh is NOT removed from cooked builds." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoftSourceActor_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** The source actor from which to sample. Takes precedence over the direct mesh. Note that this can only be set when used as a user variable on a component in the world. */" },
		{ "DisplayName", "Source Actor" },
		{ "ModuleRelativePath", "Internal/DataInterface/NiagaraDataInterfaceStaticMesh.h" },
		{ "ToolTip", "The source actor from which to sample. Takes precedence over the direct mesh. Note that this can only be set when used as a user variable on a component in the world." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[] = {
		{ "ModuleRelativePath", "Internal/DataInterface/NiagaraDataInterfaceStaticMesh.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceComponent_MetaData[] = {
		{ "Comment", "/** The source component from which to sample. Takes precedence over the direct mesh. Not exposed to the user, only indirectly accessible from blueprints. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Internal/DataInterface/NiagaraDataInterfaceStaticMesh.h" },
		{ "ToolTip", "The source component from which to sample. Takes precedence over the direct mesh. Not exposed to the user, only indirectly accessible from blueprints." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SectionFilter_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Array of filters the can be used to limit sampling to certain sections of the mesh. */" },
		{ "ModuleRelativePath", "Internal/DataInterface/NiagaraDataInterfaceStaticMesh.h" },
		{ "ToolTip", "Array of filters the can be used to limit sampling to certain sections of the mesh." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCaptureTransformsPerFrame_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** If true we capture the transforms from the mesh component each frame. */" },
		{ "ModuleRelativePath", "Internal/DataInterface/NiagaraDataInterfaceStaticMesh.h" },
		{ "ToolTip", "If true we capture the transforms from the mesh component each frame." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUsePhysicsBodyVelocity_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** If true then the mesh velocity is taken from the mesh component's physics data. Otherwise it will be calculated by diffing the component transforms between ticks, which is more reliable but won't work on the first frame. */" },
		{ "ModuleRelativePath", "Internal/DataInterface/NiagaraDataInterfaceStaticMesh.h" },
		{ "ToolTip", "If true then the mesh velocity is taken from the mesh component's physics data. Otherwise it will be calculated by diffing the component transforms between ticks, which is more reliable but won't work on the first frame." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowSamplingFromStreamingLODs_MetaData[] = {
		{ "Category", "LOD" },
		{ "Comment", "/** When true, we allow this DI to sample from streaming LODs. Selectively overriding the CVar fx.Niagara.NDIStaticMesh.UseInlineLODsOnly. */" },
		{ "ModuleRelativePath", "Internal/DataInterface/NiagaraDataInterfaceStaticMesh.h" },
		{ "ToolTip", "When true, we allow this DI to sample from streaming LODs. Selectively overriding the CVar fx.Niagara.NDIStaticMesh.UseInlineLODsOnly." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LODIndex_MetaData[] = {
		{ "Category", "LOD" },
		{ "Comment", "/** \n\x09Static Mesh LOD to sample.\n\x09When the desired LOD is not available, the next available LOD is used.\n\x09When LOD Index is negative, Desired LOD = Num LODs - LOD Index.\n\x09*/" },
		{ "ModuleRelativePath", "Internal/DataInterface/NiagaraDataInterfaceStaticMesh.h" },
		{ "ToolTip", "Static Mesh LOD to sample.\nWhen the desired LOD is not available, the next available LOD is used.\nWhen LOD Index is negative, Desired LOD = Num LODs - LOD Index." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LODIndexUserParameter_MetaData[] = {
		{ "Category", "LOD" },
		{ "Comment", "/** Reference to a user parameter if we're reading one. */" },
		{ "ModuleRelativePath", "Internal/DataInterface/NiagaraDataInterfaceStaticMesh.h" },
		{ "ToolTip", "Reference to a user parameter if we're reading one." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshParameterBinding_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Mesh parameter binding can be either an Actor (in which case we find the component), static mesh component or a static mesh. */" },
		{ "ModuleRelativePath", "Internal/DataInterface/NiagaraDataInterfaceStaticMesh.h" },
		{ "ToolTip", "Mesh parameter binding can be either an Actor (in which case we find the component), static mesh component or a static mesh." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstanceIndex_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** When attached to an Instanced Static Mesh, which instance should be read from. */" },
		{ "ModuleRelativePath", "Internal/DataInterface/NiagaraDataInterfaceStaticMesh.h" },
		{ "ToolTip", "When attached to an Instanced Static Mesh, which instance should be read from." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilteredSockets_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** List of filtered sockets to use. */" },
		{ "ModuleRelativePath", "Internal/DataInterface/NiagaraDataInterfaceStaticMesh.h" },
		{ "ToolTip", "List of filtered sockets to use." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_SourceMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SourceMode;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_PreviewMesh;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMesh;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_SoftSourceActor;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Source;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceComponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SectionFilter;
	static void NewProp_bCaptureTransformsPerFrame_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCaptureTransformsPerFrame;
	static void NewProp_bUsePhysicsBodyVelocity_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsePhysicsBodyVelocity;
	static void NewProp_bAllowSamplingFromStreamingLODs_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowSamplingFromStreamingLODs;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LODIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LODIndexUserParameter;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MeshParameterBinding;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InstanceIndex;
	static const UECodeGen_Private::FNamePropertyParams NewProp_FilteredSockets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FilteredSockets;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNiagaraDataInterfaceStaticMesh_OnSourceEndPlay, "OnSourceEndPlay" }, // 395327928
		{ &Z_Construct_UFunction_UNiagaraDataInterfaceStaticMesh_SetNiagaraStaticMeshDIInstanceIndex, "SetNiagaraStaticMeshDIInstanceIndex" }, // 3127648065
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfaceStaticMesh>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_SourceMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_SourceMode = { "SourceMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceStaticMesh, SourceMode), Z_Construct_UEnum_Niagara_ENDIStaticMesh_SourceMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceMode_MetaData), NewProp_SourceMode_MetaData) }; // 2578680226
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_PreviewMesh = { "PreviewMesh", nullptr, (EPropertyFlags)0x0014000800000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceStaticMesh, PreviewMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewMesh_MetaData), NewProp_PreviewMesh_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_DefaultMesh = { "DefaultMesh", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceStaticMesh, DefaultMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMesh_MetaData), NewProp_DefaultMesh_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_SoftSourceActor = { "SoftSourceActor", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceStaticMesh, SoftSourceActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoftSourceActor_MetaData), NewProp_SoftSourceActor_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0124080820000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceStaticMesh, Source_DEPRECATED), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Source_MetaData), NewProp_Source_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_SourceComponent = { "SourceComponent", nullptr, (EPropertyFlags)0x0124080000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceStaticMesh, SourceComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceComponent_MetaData), NewProp_SourceComponent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_SectionFilter = { "SectionFilter", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceStaticMesh, SectionFilter), Z_Construct_UScriptStruct_FNDIStaticMeshSectionFilter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SectionFilter_MetaData), NewProp_SectionFilter_MetaData) }; // 2009105093
void Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_bCaptureTransformsPerFrame_SetBit(void* Obj)
{
	((UNiagaraDataInterfaceStaticMesh*)Obj)->bCaptureTransformsPerFrame = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_bCaptureTransformsPerFrame = { "bCaptureTransformsPerFrame", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNiagaraDataInterfaceStaticMesh), &Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_bCaptureTransformsPerFrame_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCaptureTransformsPerFrame_MetaData), NewProp_bCaptureTransformsPerFrame_MetaData) };
void Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_bUsePhysicsBodyVelocity_SetBit(void* Obj)
{
	((UNiagaraDataInterfaceStaticMesh*)Obj)->bUsePhysicsBodyVelocity = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_bUsePhysicsBodyVelocity = { "bUsePhysicsBodyVelocity", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNiagaraDataInterfaceStaticMesh), &Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_bUsePhysicsBodyVelocity_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUsePhysicsBodyVelocity_MetaData), NewProp_bUsePhysicsBodyVelocity_MetaData) };
void Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_bAllowSamplingFromStreamingLODs_SetBit(void* Obj)
{
	((UNiagaraDataInterfaceStaticMesh*)Obj)->bAllowSamplingFromStreamingLODs = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_bAllowSamplingFromStreamingLODs = { "bAllowSamplingFromStreamingLODs", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNiagaraDataInterfaceStaticMesh), &Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_bAllowSamplingFromStreamingLODs_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowSamplingFromStreamingLODs_MetaData), NewProp_bAllowSamplingFromStreamingLODs_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceStaticMesh, LODIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LODIndex_MetaData), NewProp_LODIndex_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_LODIndexUserParameter = { "LODIndexUserParameter", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceStaticMesh, LODIndexUserParameter), Z_Construct_UScriptStruct_FNiagaraUserParameterBinding, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LODIndexUserParameter_MetaData), NewProp_LODIndexUserParameter_MetaData) }; // 174428838
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_MeshParameterBinding = { "MeshParameterBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceStaticMesh, MeshParameterBinding), Z_Construct_UScriptStruct_FNiagaraUserParameterBinding, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshParameterBinding_MetaData), NewProp_MeshParameterBinding_MetaData) }; // 174428838
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_InstanceIndex = { "InstanceIndex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceStaticMesh, InstanceIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstanceIndex_MetaData), NewProp_InstanceIndex_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_FilteredSockets_Inner = { "FilteredSockets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_FilteredSockets = { "FilteredSockets", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceStaticMesh, FilteredSockets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilteredSockets_MetaData), NewProp_FilteredSockets_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_SourceMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_SourceMode,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_PreviewMesh,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_DefaultMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_SoftSourceActor,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_Source,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_SourceComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_SectionFilter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_bCaptureTransformsPerFrame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_bUsePhysicsBodyVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_bAllowSamplingFromStreamingLODs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_LODIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_LODIndexUserParameter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_MeshParameterBinding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_InstanceIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_FilteredSockets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_FilteredSockets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::ClassParams = {
	&UNiagaraDataInterfaceStaticMesh::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::PropPointers),
	0,
	0x008810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh()
{
	if (!Z_Registration_Info_UClass_UNiagaraDataInterfaceStaticMesh.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataInterfaceStaticMesh.OuterSingleton, Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNiagaraDataInterfaceStaticMesh.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<UNiagaraDataInterfaceStaticMesh>()
{
	return UNiagaraDataInterfaceStaticMesh::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfaceStaticMesh);
UNiagaraDataInterfaceStaticMesh::~UNiagaraDataInterfaceStaticMesh() {}
// End Class UNiagaraDataInterfaceStaticMesh

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceStaticMesh_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ENDIStaticMesh_SourceMode_StaticEnum, TEXT("ENDIStaticMesh_SourceMode"), &Z_Registration_Info_UEnum_ENDIStaticMesh_SourceMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2578680226U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FNDIStaticMeshSectionFilter::StaticStruct, Z_Construct_UScriptStruct_FNDIStaticMeshSectionFilter_Statics::NewStructOps, TEXT("NDIStaticMeshSectionFilter"), &Z_Registration_Info_UScriptStruct_NDIStaticMeshSectionFilter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNDIStaticMeshSectionFilter), 2009105093U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh, UNiagaraDataInterfaceStaticMesh::StaticClass, TEXT("UNiagaraDataInterfaceStaticMesh"), &Z_Registration_Info_UClass_UNiagaraDataInterfaceStaticMesh, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataInterfaceStaticMesh), 1413948253U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceStaticMesh_h_2377278251(TEXT("/Script/Niagara"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceStaticMesh_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceStaticMesh_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceStaticMesh_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceStaticMesh_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceStaticMesh_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceStaticMesh_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
