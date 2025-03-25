// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Public/NiagaraDataInterfaceEmitterBinding.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceEmitterBinding() {}

// Begin Cross Module References
NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraDataInterfaceEmitterBindingMode();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDataInterfaceEmitterBinding();
UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

// Begin Enum ENiagaraDataInterfaceEmitterBindingMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraDataInterfaceEmitterBindingMode;
static UEnum* ENiagaraDataInterfaceEmitterBindingMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ENiagaraDataInterfaceEmitterBindingMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ENiagaraDataInterfaceEmitterBindingMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraDataInterfaceEmitterBindingMode, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraDataInterfaceEmitterBindingMode"));
	}
	return Z_Registration_Info_UEnum_ENiagaraDataInterfaceEmitterBindingMode.OuterSingleton;
}
template<> NIAGARA_API UEnum* StaticEnum<ENiagaraDataInterfaceEmitterBindingMode>()
{
	return ENiagaraDataInterfaceEmitterBindingMode_StaticEnum();
}
struct Z_Construct_UEnum_Niagara_ENiagaraDataInterfaceEmitterBindingMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraDataInterfaceEmitterBinding.h" },
		{ "Other.Comment", "/** Attempt to bind to an emitter using it's name. */" },
		{ "Other.Name", "ENiagaraDataInterfaceEmitterBindingMode::Other" },
		{ "Other.ToolTip", "Attempt to bind to an emitter using it's name." },
		{ "Self.Comment", "/** Attempt to bind to the emitter the data interface is used with, this may not be possible in all situations (i.e. user parameter). */" },
		{ "Self.Name", "ENiagaraDataInterfaceEmitterBindingMode::Self" },
		{ "Self.ToolTip", "Attempt to bind to the emitter the data interface is used with, this may not be possible in all situations (i.e. user parameter)." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ENiagaraDataInterfaceEmitterBindingMode::Self", (int64)ENiagaraDataInterfaceEmitterBindingMode::Self },
		{ "ENiagaraDataInterfaceEmitterBindingMode::Other", (int64)ENiagaraDataInterfaceEmitterBindingMode::Other },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENiagaraDataInterfaceEmitterBindingMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	"ENiagaraDataInterfaceEmitterBindingMode",
	"ENiagaraDataInterfaceEmitterBindingMode",
	Z_Construct_UEnum_Niagara_ENiagaraDataInterfaceEmitterBindingMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraDataInterfaceEmitterBindingMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraDataInterfaceEmitterBindingMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Niagara_ENiagaraDataInterfaceEmitterBindingMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Niagara_ENiagaraDataInterfaceEmitterBindingMode()
{
	if (!Z_Registration_Info_UEnum_ENiagaraDataInterfaceEmitterBindingMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraDataInterfaceEmitterBindingMode.InnerSingleton, Z_Construct_UEnum_Niagara_ENiagaraDataInterfaceEmitterBindingMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ENiagaraDataInterfaceEmitterBindingMode.InnerSingleton;
}
// End Enum ENiagaraDataInterfaceEmitterBindingMode

// Begin ScriptStruct FNiagaraDataInterfaceEmitterBinding
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraDataInterfaceEmitterBinding;
class UScriptStruct* FNiagaraDataInterfaceEmitterBinding::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraDataInterfaceEmitterBinding.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraDataInterfaceEmitterBinding.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraDataInterfaceEmitterBinding, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraDataInterfaceEmitterBinding"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraDataInterfaceEmitterBinding.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraDataInterfaceEmitterBinding>()
{
	return FNiagaraDataInterfaceEmitterBinding::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNiagaraDataInterfaceEmitterBinding_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraDataInterfaceEmitterBinding.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BindingMode_MetaData[] = {
		{ "Category", "Binding" },
		{ "ModuleRelativePath", "Public/NiagaraDataInterfaceEmitterBinding.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EmitterName_MetaData[] = {
		{ "Category", "Binding" },
		{ "ModuleRelativePath", "Public/NiagaraDataInterfaceEmitterBinding.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_BindingMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BindingMode;
	static const UECodeGen_Private::FNamePropertyParams NewProp_EmitterName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraDataInterfaceEmitterBinding>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraDataInterfaceEmitterBinding_Statics::NewProp_BindingMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNiagaraDataInterfaceEmitterBinding_Statics::NewProp_BindingMode = { "BindingMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraDataInterfaceEmitterBinding, BindingMode), Z_Construct_UEnum_Niagara_ENiagaraDataInterfaceEmitterBindingMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BindingMode_MetaData), NewProp_BindingMode_MetaData) }; // 3015557810
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraDataInterfaceEmitterBinding_Statics::NewProp_EmitterName = { "EmitterName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraDataInterfaceEmitterBinding, EmitterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EmitterName_MetaData), NewProp_EmitterName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraDataInterfaceEmitterBinding_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDataInterfaceEmitterBinding_Statics::NewProp_BindingMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDataInterfaceEmitterBinding_Statics::NewProp_BindingMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDataInterfaceEmitterBinding_Statics::NewProp_EmitterName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDataInterfaceEmitterBinding_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraDataInterfaceEmitterBinding_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	&NewStructOps,
	"NiagaraDataInterfaceEmitterBinding",
	Z_Construct_UScriptStruct_FNiagaraDataInterfaceEmitterBinding_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDataInterfaceEmitterBinding_Statics::PropPointers),
	sizeof(FNiagaraDataInterfaceEmitterBinding),
	alignof(FNiagaraDataInterfaceEmitterBinding),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDataInterfaceEmitterBinding_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNiagaraDataInterfaceEmitterBinding_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDataInterfaceEmitterBinding()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraDataInterfaceEmitterBinding.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraDataInterfaceEmitterBinding.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraDataInterfaceEmitterBinding_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NiagaraDataInterfaceEmitterBinding.InnerSingleton;
}
// End ScriptStruct FNiagaraDataInterfaceEmitterBinding

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataInterfaceEmitterBinding_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ENiagaraDataInterfaceEmitterBindingMode_StaticEnum, TEXT("ENiagaraDataInterfaceEmitterBindingMode"), &Z_Registration_Info_UEnum_ENiagaraDataInterfaceEmitterBindingMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3015557810U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FNiagaraDataInterfaceEmitterBinding::StaticStruct, Z_Construct_UScriptStruct_FNiagaraDataInterfaceEmitterBinding_Statics::NewStructOps, TEXT("NiagaraDataInterfaceEmitterBinding"), &Z_Registration_Info_UScriptStruct_NiagaraDataInterfaceEmitterBinding, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraDataInterfaceEmitterBinding), 3055691361U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataInterfaceEmitterBinding_h_3757254681(TEXT("/Script/Niagara"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataInterfaceEmitterBinding_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataInterfaceEmitterBinding_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataInterfaceEmitterBinding_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataInterfaceEmitterBinding_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
