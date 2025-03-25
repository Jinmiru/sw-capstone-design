// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Private/DataInterface/NiagaraDataInterfaceUObjectPropertyReader.h"
#include "Niagara/Public/NiagaraCommon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceUObjectPropertyReader() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterface();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceUObjectPropertyReader();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceUObjectPropertyReader_NoRegister();
NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENDIObjectPropertyReaderSourceMode();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraUObjectPropertyReaderRemap();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraUserParameterBinding();
UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

// Begin Enum ENDIObjectPropertyReaderSourceMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENDIObjectPropertyReaderSourceMode;
static UEnum* ENDIObjectPropertyReaderSourceMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ENDIObjectPropertyReaderSourceMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ENDIObjectPropertyReaderSourceMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENDIObjectPropertyReaderSourceMode, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENDIObjectPropertyReaderSourceMode"));
	}
	return Z_Registration_Info_UEnum_ENDIObjectPropertyReaderSourceMode.OuterSingleton;
}
template<> NIAGARA_API UEnum* StaticEnum<ENDIObjectPropertyReaderSourceMode>()
{
	return ENDIObjectPropertyReaderSourceMode_StaticEnum();
}
struct Z_Construct_UEnum_Niagara_ENDIObjectPropertyReaderSourceMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AttachParentActor.Comment", "/** Source object is found use the attached parent actor. */" },
		{ "AttachParentActor.Name", "ENDIObjectPropertyReaderSourceMode::AttachParentActor" },
		{ "AttachParentActor.ToolTip", "Source object is found use the attached parent actor." },
		{ "Binding.Comment", "/** Source object is found in the order of object binding, source actor. */" },
		{ "Binding.Name", "ENDIObjectPropertyReaderSourceMode::Binding" },
		{ "Binding.ToolTip", "Source object is found in the order of object binding, source actor." },
		{ "BindingThenAttachParentActor.Comment", "/** Source object is found in the order of object binding, source actor, then attached parent actor. */" },
		{ "BindingThenAttachParentActor.Name", "ENDIObjectPropertyReaderSourceMode::BindingThenAttachParentActor" },
		{ "BindingThenAttachParentActor.ToolTip", "Source object is found in the order of object binding, source actor, then attached parent actor." },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceUObjectPropertyReader.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ENDIObjectPropertyReaderSourceMode::Binding", (int64)ENDIObjectPropertyReaderSourceMode::Binding },
		{ "ENDIObjectPropertyReaderSourceMode::AttachParentActor", (int64)ENDIObjectPropertyReaderSourceMode::AttachParentActor },
		{ "ENDIObjectPropertyReaderSourceMode::BindingThenAttachParentActor", (int64)ENDIObjectPropertyReaderSourceMode::BindingThenAttachParentActor },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENDIObjectPropertyReaderSourceMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	"ENDIObjectPropertyReaderSourceMode",
	"ENDIObjectPropertyReaderSourceMode",
	Z_Construct_UEnum_Niagara_ENDIObjectPropertyReaderSourceMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENDIObjectPropertyReaderSourceMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENDIObjectPropertyReaderSourceMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Niagara_ENDIObjectPropertyReaderSourceMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Niagara_ENDIObjectPropertyReaderSourceMode()
{
	if (!Z_Registration_Info_UEnum_ENDIObjectPropertyReaderSourceMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENDIObjectPropertyReaderSourceMode.InnerSingleton, Z_Construct_UEnum_Niagara_ENDIObjectPropertyReaderSourceMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ENDIObjectPropertyReaderSourceMode.InnerSingleton;
}
// End Enum ENDIObjectPropertyReaderSourceMode

// Begin ScriptStruct FNiagaraUObjectPropertyReaderRemap
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraUObjectPropertyReaderRemap;
class UScriptStruct* FNiagaraUObjectPropertyReaderRemap::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraUObjectPropertyReaderRemap.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraUObjectPropertyReaderRemap.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraUObjectPropertyReaderRemap, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraUObjectPropertyReaderRemap"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraUObjectPropertyReaderRemap.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraUObjectPropertyReaderRemap>()
{
	return FNiagaraUObjectPropertyReaderRemap::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNiagaraUObjectPropertyReaderRemap_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceUObjectPropertyReader.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GraphName_MetaData[] = {
		{ "Category", "Remap" },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceUObjectPropertyReader.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RemapName_MetaData[] = {
		{ "Category", "Remap" },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceUObjectPropertyReader.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_GraphName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_RemapName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraUObjectPropertyReaderRemap>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraUObjectPropertyReaderRemap_Statics::NewProp_GraphName = { "GraphName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraUObjectPropertyReaderRemap, GraphName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GraphName_MetaData), NewProp_GraphName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraUObjectPropertyReaderRemap_Statics::NewProp_RemapName = { "RemapName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraUObjectPropertyReaderRemap, RemapName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RemapName_MetaData), NewProp_RemapName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraUObjectPropertyReaderRemap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraUObjectPropertyReaderRemap_Statics::NewProp_GraphName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraUObjectPropertyReaderRemap_Statics::NewProp_RemapName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraUObjectPropertyReaderRemap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraUObjectPropertyReaderRemap_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	&NewStructOps,
	"NiagaraUObjectPropertyReaderRemap",
	Z_Construct_UScriptStruct_FNiagaraUObjectPropertyReaderRemap_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraUObjectPropertyReaderRemap_Statics::PropPointers),
	sizeof(FNiagaraUObjectPropertyReaderRemap),
	alignof(FNiagaraUObjectPropertyReaderRemap),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraUObjectPropertyReaderRemap_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNiagaraUObjectPropertyReaderRemap_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNiagaraUObjectPropertyReaderRemap()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraUObjectPropertyReaderRemap.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraUObjectPropertyReaderRemap.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraUObjectPropertyReaderRemap_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NiagaraUObjectPropertyReaderRemap.InnerSingleton;
}
// End ScriptStruct FNiagaraUObjectPropertyReaderRemap

// Begin Class UNiagaraDataInterfaceUObjectPropertyReader Function SetUObjectReaderPropertyRemap
struct Z_Construct_UFunction_UNiagaraDataInterfaceUObjectPropertyReader_SetUObjectReaderPropertyRemap_Statics
{
	struct NiagaraDataInterfaceUObjectPropertyReader_eventSetUObjectReaderPropertyRemap_Parms
	{
		UNiagaraComponent* NiagaraComponent;
		FName UserParameterName;
		FName GraphName;
		FName RemapName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Remaps a property reader, where the  */" },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceUObjectPropertyReader.h" },
		{ "ToolTip", "Remaps a property reader, where the" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraComponent;
	static const UECodeGen_Private::FNamePropertyParams NewProp_UserParameterName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_GraphName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_RemapName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceUObjectPropertyReader_SetUObjectReaderPropertyRemap_Statics::NewProp_NiagaraComponent = { "NiagaraComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataInterfaceUObjectPropertyReader_eventSetUObjectReaderPropertyRemap_Parms, NiagaraComponent), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NiagaraComponent_MetaData), NewProp_NiagaraComponent_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceUObjectPropertyReader_SetUObjectReaderPropertyRemap_Statics::NewProp_UserParameterName = { "UserParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataInterfaceUObjectPropertyReader_eventSetUObjectReaderPropertyRemap_Parms, UserParameterName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceUObjectPropertyReader_SetUObjectReaderPropertyRemap_Statics::NewProp_GraphName = { "GraphName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataInterfaceUObjectPropertyReader_eventSetUObjectReaderPropertyRemap_Parms, GraphName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceUObjectPropertyReader_SetUObjectReaderPropertyRemap_Statics::NewProp_RemapName = { "RemapName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataInterfaceUObjectPropertyReader_eventSetUObjectReaderPropertyRemap_Parms, RemapName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataInterfaceUObjectPropertyReader_SetUObjectReaderPropertyRemap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceUObjectPropertyReader_SetUObjectReaderPropertyRemap_Statics::NewProp_NiagaraComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceUObjectPropertyReader_SetUObjectReaderPropertyRemap_Statics::NewProp_UserParameterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceUObjectPropertyReader_SetUObjectReaderPropertyRemap_Statics::NewProp_GraphName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceUObjectPropertyReader_SetUObjectReaderPropertyRemap_Statics::NewProp_RemapName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceUObjectPropertyReader_SetUObjectReaderPropertyRemap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataInterfaceUObjectPropertyReader_SetUObjectReaderPropertyRemap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataInterfaceUObjectPropertyReader, nullptr, "SetUObjectReaderPropertyRemap", nullptr, nullptr, Z_Construct_UFunction_UNiagaraDataInterfaceUObjectPropertyReader_SetUObjectReaderPropertyRemap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceUObjectPropertyReader_SetUObjectReaderPropertyRemap_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNiagaraDataInterfaceUObjectPropertyReader_SetUObjectReaderPropertyRemap_Statics::NiagaraDataInterfaceUObjectPropertyReader_eventSetUObjectReaderPropertyRemap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceUObjectPropertyReader_SetUObjectReaderPropertyRemap_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNiagaraDataInterfaceUObjectPropertyReader_SetUObjectReaderPropertyRemap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNiagaraDataInterfaceUObjectPropertyReader_SetUObjectReaderPropertyRemap_Statics::NiagaraDataInterfaceUObjectPropertyReader_eventSetUObjectReaderPropertyRemap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNiagaraDataInterfaceUObjectPropertyReader_SetUObjectReaderPropertyRemap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraDataInterfaceUObjectPropertyReader_SetUObjectReaderPropertyRemap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNiagaraDataInterfaceUObjectPropertyReader::execSetUObjectReaderPropertyRemap)
{
	P_GET_OBJECT(UNiagaraComponent,Z_Param_NiagaraComponent);
	P_GET_PROPERTY(FNameProperty,Z_Param_UserParameterName);
	P_GET_PROPERTY(FNameProperty,Z_Param_GraphName);
	P_GET_PROPERTY(FNameProperty,Z_Param_RemapName);
	P_FINISH;
	P_NATIVE_BEGIN;
	UNiagaraDataInterfaceUObjectPropertyReader::SetUObjectReaderPropertyRemap(Z_Param_NiagaraComponent,Z_Param_UserParameterName,Z_Param_GraphName,Z_Param_RemapName);
	P_NATIVE_END;
}
// End Class UNiagaraDataInterfaceUObjectPropertyReader Function SetUObjectReaderPropertyRemap

// Begin Class UNiagaraDataInterfaceUObjectPropertyReader
void UNiagaraDataInterfaceUObjectPropertyReader::StaticRegisterNativesUNiagaraDataInterfaceUObjectPropertyReader()
{
	UClass* Class = UNiagaraDataInterfaceUObjectPropertyReader::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetUObjectReaderPropertyRemap", &UNiagaraDataInterfaceUObjectPropertyReader::execSetUObjectReaderPropertyRemap },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDataInterfaceUObjectPropertyReader);
UClass* Z_Construct_UClass_UNiagaraDataInterfaceUObjectPropertyReader_NoRegister()
{
	return UNiagaraDataInterfaceUObjectPropertyReader::StaticClass();
}
struct Z_Construct_UClass_UNiagaraDataInterfaceUObjectPropertyReader_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "DataInterface" },
		{ "Comment", "/**\nData interface to read properties from UObjects.\nRather than having BP tick functions that push data into Niagara this data interface will instead pull them.\n*/" },
		{ "DisplayName", "Object Reader" },
		{ "IncludePath", "DataInterface/NiagaraDataInterfaceUObjectPropertyReader.h" },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceUObjectPropertyReader.h" },
		{ "ToolTip", "Data interface to read properties from UObjects.\nRather than having BP tick functions that push data into Niagara this data interface will instead pull them." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceMode_MetaData[] = {
		{ "Category", "UObjectPropertyReader" },
		{ "Comment", "/** Determines how we should select the source object we read from. */" },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceUObjectPropertyReader.h" },
		{ "ToolTip", "Determines how we should select the source object we read from." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UObjectParameterBinding_MetaData[] = {
		{ "Category", "UObjectPropertyReader" },
		{ "Comment", "/** User parameter Object binding to read properties from. */" },
		{ "EditCondition", "SourceMode != ENDIObjectPropertyReaderSourceMode::AttachParentActor" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceUObjectPropertyReader.h" },
		{ "ToolTip", "User parameter Object binding to read properties from." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PropertyRemap_MetaData[] = {
		{ "Category", "UObjectPropertyReader" },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceUObjectPropertyReader.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceActor_MetaData[] = {
		{ "Category", "UObjectPropertyReader" },
		{ "Comment", "/** Optional source actor to use, if the user parameter binding is valid this will be ignored. */" },
		{ "EditCondition", "SourceMode != ENDIObjectPropertyReaderSourceMode::AttachParentActor" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceUObjectPropertyReader.h" },
		{ "ToolTip", "Optional source actor to use, if the user parameter binding is valid this will be ignored." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceActorComponentClass_MetaData[] = {
		{ "Category", "UObjectPropertyReader" },
		{ "Comment", "/**\n\x09When an actor is bound as the object we will also search for a component of this type to bind properties to.\n\x09""For example, setting this to a UPointLightComponent when binding properties we will first look at the actor\n\x09then look for a component of UPointLightComponent and look at properties on that also.\n\x09If no class is specified here we look at the RootComponent instead.\n\x09*/" },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceUObjectPropertyReader.h" },
		{ "ToolTip", "When an actor is bound as the object we will also search for a component of this type to bind properties to.\nFor example, setting this to a UPointLightComponent when binding properties we will first look at the actor\nthen look for a component of UPointLightComponent and look at properties on that also.\nIf no class is specified here we look at the RootComponent instead." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_SourceMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SourceMode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UObjectParameterBinding;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PropertyRemap_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PropertyRemap;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_SourceActor;
	static const UECodeGen_Private::FClassPropertyParams NewProp_SourceActorComponentClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNiagaraDataInterfaceUObjectPropertyReader_SetUObjectReaderPropertyRemap, "SetUObjectReaderPropertyRemap" }, // 1790886617
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfaceUObjectPropertyReader>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraDataInterfaceUObjectPropertyReader_Statics::NewProp_SourceMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceUObjectPropertyReader_Statics::NewProp_SourceMode = { "SourceMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceUObjectPropertyReader, SourceMode), Z_Construct_UEnum_Niagara_ENDIObjectPropertyReaderSourceMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceMode_MetaData), NewProp_SourceMode_MetaData) }; // 3910189553
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceUObjectPropertyReader_Statics::NewProp_UObjectParameterBinding = { "UObjectParameterBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceUObjectPropertyReader, UObjectParameterBinding), Z_Construct_UScriptStruct_FNiagaraUserParameterBinding, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UObjectParameterBinding_MetaData), NewProp_UObjectParameterBinding_MetaData) }; // 174428838
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceUObjectPropertyReader_Statics::NewProp_PropertyRemap_Inner = { "PropertyRemap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNiagaraUObjectPropertyReaderRemap, METADATA_PARAMS(0, nullptr) }; // 2013523131
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceUObjectPropertyReader_Statics::NewProp_PropertyRemap = { "PropertyRemap", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceUObjectPropertyReader, PropertyRemap), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PropertyRemap_MetaData), NewProp_PropertyRemap_MetaData) }; // 2013523131
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceUObjectPropertyReader_Statics::NewProp_SourceActor = { "SourceActor", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceUObjectPropertyReader, SourceActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceActor_MetaData), NewProp_SourceActor_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceUObjectPropertyReader_Statics::NewProp_SourceActorComponentClass = { "SourceActorComponentClass", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceUObjectPropertyReader, SourceActorComponentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceActorComponentClass_MetaData), NewProp_SourceActorComponentClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataInterfaceUObjectPropertyReader_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceUObjectPropertyReader_Statics::NewProp_SourceMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceUObjectPropertyReader_Statics::NewProp_SourceMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceUObjectPropertyReader_Statics::NewProp_UObjectParameterBinding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceUObjectPropertyReader_Statics::NewProp_PropertyRemap_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceUObjectPropertyReader_Statics::NewProp_PropertyRemap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceUObjectPropertyReader_Statics::NewProp_SourceActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceUObjectPropertyReader_Statics::NewProp_SourceActorComponentClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceUObjectPropertyReader_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNiagaraDataInterfaceUObjectPropertyReader_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceUObjectPropertyReader_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfaceUObjectPropertyReader_Statics::ClassParams = {
	&UNiagaraDataInterfaceUObjectPropertyReader::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNiagaraDataInterfaceUObjectPropertyReader_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceUObjectPropertyReader_Statics::PropPointers),
	0,
	0x000030A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceUObjectPropertyReader_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraDataInterfaceUObjectPropertyReader_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNiagaraDataInterfaceUObjectPropertyReader()
{
	if (!Z_Registration_Info_UClass_UNiagaraDataInterfaceUObjectPropertyReader.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataInterfaceUObjectPropertyReader.OuterSingleton, Z_Construct_UClass_UNiagaraDataInterfaceUObjectPropertyReader_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNiagaraDataInterfaceUObjectPropertyReader.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<UNiagaraDataInterfaceUObjectPropertyReader>()
{
	return UNiagaraDataInterfaceUObjectPropertyReader::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfaceUObjectPropertyReader);
UNiagaraDataInterfaceUObjectPropertyReader::~UNiagaraDataInterfaceUObjectPropertyReader() {}
// End Class UNiagaraDataInterfaceUObjectPropertyReader

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceUObjectPropertyReader_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ENDIObjectPropertyReaderSourceMode_StaticEnum, TEXT("ENDIObjectPropertyReaderSourceMode"), &Z_Registration_Info_UEnum_ENDIObjectPropertyReaderSourceMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3910189553U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FNiagaraUObjectPropertyReaderRemap::StaticStruct, Z_Construct_UScriptStruct_FNiagaraUObjectPropertyReaderRemap_Statics::NewStructOps, TEXT("NiagaraUObjectPropertyReaderRemap"), &Z_Registration_Info_UScriptStruct_NiagaraUObjectPropertyReaderRemap, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraUObjectPropertyReaderRemap), 2013523131U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraDataInterfaceUObjectPropertyReader, UNiagaraDataInterfaceUObjectPropertyReader::StaticClass, TEXT("UNiagaraDataInterfaceUObjectPropertyReader"), &Z_Registration_Info_UClass_UNiagaraDataInterfaceUObjectPropertyReader, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataInterfaceUObjectPropertyReader), 2171444230U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceUObjectPropertyReader_h_3542031337(TEXT("/Script/Niagara"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceUObjectPropertyReader_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceUObjectPropertyReader_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceUObjectPropertyReader_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceUObjectPropertyReader_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceUObjectPropertyReader_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceUObjectPropertyReader_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
