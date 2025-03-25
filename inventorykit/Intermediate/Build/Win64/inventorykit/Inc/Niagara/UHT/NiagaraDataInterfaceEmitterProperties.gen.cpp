// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Private/DataInterface/NiagaraDataInterfaceEmitterProperties.h"
#include "Niagara/Public/NiagaraDataInterfaceEmitterBinding.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceEmitterProperties() {}

// Begin Cross Module References
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterface();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceEmitterProperties();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceEmitterProperties_NoRegister();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDataInterfaceEmitterBinding();
UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

// Begin Class UNiagaraDataInterfaceEmitterProperties
void UNiagaraDataInterfaceEmitterProperties::StaticRegisterNativesUNiagaraDataInterfaceEmitterProperties()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDataInterfaceEmitterProperties);
UClass* Z_Construct_UClass_UNiagaraDataInterfaceEmitterProperties_NoRegister()
{
	return UNiagaraDataInterfaceEmitterProperties::StaticClass();
}
struct Z_Construct_UClass_UNiagaraDataInterfaceEmitterProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "DataInterface" },
		{ "Comment", "/**\nAllows access to various emitter properties that are not part of the simulation data.\n*/" },
		{ "DisplayName", "Emitter Properties" },
		{ "IncludePath", "DataInterface/NiagaraDataInterfaceEmitterProperties.h" },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceEmitterProperties.h" },
		{ "ToolTip", "Allows access to various emitter properties that are not part of the simulation data." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EmitterBinding_MetaData[] = {
		{ "Category", "Emitter" },
		{ "Comment", "/** Selects which emitter the data interface will bind to, i.e the emitter we are contained within or a named emitter. */" },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceEmitterProperties.h" },
		{ "ToolTip", "Selects which emitter the data interface will bind to, i.e the emitter we are contained within or a named emitter." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EmitterBinding;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfaceEmitterProperties>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceEmitterProperties_Statics::NewProp_EmitterBinding = { "EmitterBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceEmitterProperties, EmitterBinding), Z_Construct_UScriptStruct_FNiagaraDataInterfaceEmitterBinding, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EmitterBinding_MetaData), NewProp_EmitterBinding_MetaData) }; // 3055691361
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataInterfaceEmitterProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceEmitterProperties_Statics::NewProp_EmitterBinding,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceEmitterProperties_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNiagaraDataInterfaceEmitterProperties_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceEmitterProperties_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfaceEmitterProperties_Statics::ClassParams = {
	&UNiagaraDataInterfaceEmitterProperties::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNiagaraDataInterfaceEmitterProperties_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceEmitterProperties_Statics::PropPointers),
	0,
	0x000030A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceEmitterProperties_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraDataInterfaceEmitterProperties_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNiagaraDataInterfaceEmitterProperties()
{
	if (!Z_Registration_Info_UClass_UNiagaraDataInterfaceEmitterProperties.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataInterfaceEmitterProperties.OuterSingleton, Z_Construct_UClass_UNiagaraDataInterfaceEmitterProperties_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNiagaraDataInterfaceEmitterProperties.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<UNiagaraDataInterfaceEmitterProperties>()
{
	return UNiagaraDataInterfaceEmitterProperties::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfaceEmitterProperties);
UNiagaraDataInterfaceEmitterProperties::~UNiagaraDataInterfaceEmitterProperties() {}
// End Class UNiagaraDataInterfaceEmitterProperties

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceEmitterProperties_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraDataInterfaceEmitterProperties, UNiagaraDataInterfaceEmitterProperties::StaticClass, TEXT("UNiagaraDataInterfaceEmitterProperties"), &Z_Registration_Info_UClass_UNiagaraDataInterfaceEmitterProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataInterfaceEmitterProperties), 1751451336U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceEmitterProperties_h_2315929210(TEXT("/Script/Niagara"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceEmitterProperties_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceEmitterProperties_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
