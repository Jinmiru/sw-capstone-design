// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NiagaraCore/Public/NiagaraCore.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraCore() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
NIAGARACORE_API UEnum* Z_Construct_UEnum_NiagaraCore_ENiagaraIterationSource();
NIAGARACORE_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariableCommonReference();
UPackage* Z_Construct_UPackage__Script_NiagaraCore();
// End Cross Module References

// Begin Enum ENiagaraIterationSource
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraIterationSource;
static UEnum* ENiagaraIterationSource_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ENiagaraIterationSource.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ENiagaraIterationSource.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NiagaraCore_ENiagaraIterationSource, (UObject*)Z_Construct_UPackage__Script_NiagaraCore(), TEXT("ENiagaraIterationSource"));
	}
	return Z_Registration_Info_UEnum_ENiagaraIterationSource.OuterSingleton;
}
template<> NIAGARACORE_API UEnum* StaticEnum<ENiagaraIterationSource>()
{
	return ENiagaraIterationSource_StaticEnum();
}
struct Z_Construct_UEnum_NiagaraCore_ENiagaraIterationSource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "DataInterface.Comment", "/** Iterate over all elements in the data interface. */" },
		{ "DataInterface.Name", "ENiagaraIterationSource::DataInterface" },
		{ "DataInterface.ToolTip", "Iterate over all elements in the data interface." },
		{ "DirectSet.Comment", "/** Iterate over a user provided number of elements. */" },
		{ "DirectSet.Name", "ENiagaraIterationSource::DirectSet" },
		{ "DirectSet.ToolTip", "Iterate over a user provided number of elements." },
		{ "ModuleRelativePath", "Public/NiagaraCore.h" },
		{ "Particles.Comment", "/** Iterate over all active particles. */" },
		{ "Particles.Name", "ENiagaraIterationSource::Particles" },
		{ "Particles.ToolTip", "Iterate over all active particles." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ENiagaraIterationSource::Particles", (int64)ENiagaraIterationSource::Particles },
		{ "ENiagaraIterationSource::DataInterface", (int64)ENiagaraIterationSource::DataInterface },
		{ "ENiagaraIterationSource::DirectSet", (int64)ENiagaraIterationSource::DirectSet },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NiagaraCore_ENiagaraIterationSource_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_NiagaraCore,
	nullptr,
	"ENiagaraIterationSource",
	"ENiagaraIterationSource",
	Z_Construct_UEnum_NiagaraCore_ENiagaraIterationSource_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_NiagaraCore_ENiagaraIterationSource_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_NiagaraCore_ENiagaraIterationSource_Statics::Enum_MetaDataParams), Z_Construct_UEnum_NiagaraCore_ENiagaraIterationSource_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_NiagaraCore_ENiagaraIterationSource()
{
	if (!Z_Registration_Info_UEnum_ENiagaraIterationSource.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraIterationSource.InnerSingleton, Z_Construct_UEnum_NiagaraCore_ENiagaraIterationSource_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ENiagaraIterationSource.InnerSingleton;
}
// End Enum ENiagaraIterationSource

// Begin ScriptStruct FNiagaraVariableCommonReference
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraVariableCommonReference;
class UScriptStruct* FNiagaraVariableCommonReference::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraVariableCommonReference.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraVariableCommonReference.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraVariableCommonReference, (UObject*)Z_Construct_UPackage__Script_NiagaraCore(), TEXT("NiagaraVariableCommonReference"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraVariableCommonReference.OuterSingleton;
}
template<> NIAGARACORE_API UScriptStruct* StaticStruct<FNiagaraVariableCommonReference>()
{
	return FNiagaraVariableCommonReference::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNiagaraVariableCommonReference_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** A utility class allowing for references to FNiagaraVariableBase outside of the Niagara module. */" },
		{ "ModuleRelativePath", "Public/NiagaraCore.h" },
		{ "ToolTip", "A utility class allowing for references to FNiagaraVariableBase outside of the Niagara module." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnderlyingType_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraCore.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UnderlyingType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraVariableCommonReference>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraVariableCommonReference_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraVariableCommonReference, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FNiagaraVariableCommonReference_Statics::NewProp_UnderlyingType = { "UnderlyingType", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraVariableCommonReference, UnderlyingType), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnderlyingType_MetaData), NewProp_UnderlyingType_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraVariableCommonReference_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableCommonReference_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableCommonReference_Statics::NewProp_UnderlyingType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableCommonReference_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraVariableCommonReference_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NiagaraCore,
	nullptr,
	&NewStructOps,
	"NiagaraVariableCommonReference",
	Z_Construct_UScriptStruct_FNiagaraVariableCommonReference_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableCommonReference_Statics::PropPointers),
	sizeof(FNiagaraVariableCommonReference),
	alignof(FNiagaraVariableCommonReference),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableCommonReference_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNiagaraVariableCommonReference_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariableCommonReference()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraVariableCommonReference.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraVariableCommonReference.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraVariableCommonReference_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NiagaraVariableCommonReference.InnerSingleton;
}
// End ScriptStruct FNiagaraVariableCommonReference

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraCore_Public_NiagaraCore_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ENiagaraIterationSource_StaticEnum, TEXT("ENiagaraIterationSource"), &Z_Registration_Info_UEnum_ENiagaraIterationSource, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3785126126U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FNiagaraVariableCommonReference::StaticStruct, Z_Construct_UScriptStruct_FNiagaraVariableCommonReference_Statics::NewStructOps, TEXT("NiagaraVariableCommonReference"), &Z_Registration_Info_UScriptStruct_NiagaraVariableCommonReference, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraVariableCommonReference), 1550866104U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraCore_Public_NiagaraCore_h_3048223272(TEXT("/Script/NiagaraCore"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraCore_Public_NiagaraCore_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraCore_Public_NiagaraCore_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraCore_Public_NiagaraCore_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraCore_Public_NiagaraCore_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
