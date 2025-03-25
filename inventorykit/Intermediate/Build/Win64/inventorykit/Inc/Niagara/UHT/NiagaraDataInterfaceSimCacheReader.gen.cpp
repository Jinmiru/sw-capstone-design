// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Private/DataInterface/NiagaraDataInterfaceSimCacheReader.h"
#include "Niagara/Public/NiagaraCommon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceSimCacheReader() {}

// Begin Cross Module References
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterface();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceSimCacheReader();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceSimCacheReader_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSimCache_NoRegister();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraUserParameterBinding();
UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

// Begin Class UNiagaraDataInterfaceSimCacheReader
void UNiagaraDataInterfaceSimCacheReader::StaticRegisterNativesUNiagaraDataInterfaceSimCacheReader()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDataInterfaceSimCacheReader);
UClass* Z_Construct_UClass_UNiagaraDataInterfaceSimCacheReader_NoRegister()
{
	return UNiagaraDataInterfaceSimCacheReader::StaticClass();
}
struct Z_Construct_UClass_UNiagaraDataInterfaceSimCacheReader_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "DataInterface" },
		{ "Comment", "/**\nData interface to read properties from a Niagara Simulation Cache\n*/" },
		{ "DisplayName", "SimCache Reader" },
		{ "Experimental", "" },
		{ "IncludePath", "DataInterface/NiagaraDataInterfaceSimCacheReader.h" },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceSimCacheReader.h" },
		{ "ToolTip", "Data interface to read properties from a Niagara Simulation Cache" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SimCacheBinding_MetaData[] = {
		{ "Category", "SimCacheReader" },
		{ "Comment", "/** User parameter Object binding if this is not a valid sim cache the default one will be used instead. */" },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceSimCacheReader.h" },
		{ "ToolTip", "User parameter Object binding if this is not a valid sim cache the default one will be used instead." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SimCache_MetaData[] = {
		{ "Category", "SimCacheReader" },
		{ "Comment", "/** Optional source SimCache to use, if the user parameter binding is valid this will be ignored. */" },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceSimCacheReader.h" },
		{ "ToolTip", "Optional source SimCache to use, if the user parameter binding is valid this will be ignored." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EmitterBinding_MetaData[] = {
		{ "Category", "Emitter" },
		{ "Comment", "/** Which Emitter we should read from within the SimCache. */" },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceSimCacheReader.h" },
		{ "ToolTip", "Which Emitter we should read from within the SimCache." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SimCacheBinding;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SimCache;
	static const UECodeGen_Private::FNamePropertyParams NewProp_EmitterBinding;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfaceSimCacheReader>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSimCacheReader_Statics::NewProp_SimCacheBinding = { "SimCacheBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceSimCacheReader, SimCacheBinding), Z_Construct_UScriptStruct_FNiagaraUserParameterBinding, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SimCacheBinding_MetaData), NewProp_SimCacheBinding_MetaData) }; // 174428838
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSimCacheReader_Statics::NewProp_SimCache = { "SimCache", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceSimCacheReader, SimCache), Z_Construct_UClass_UNiagaraSimCache_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SimCache_MetaData), NewProp_SimCache_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSimCacheReader_Statics::NewProp_EmitterBinding = { "EmitterBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceSimCacheReader, EmitterBinding), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EmitterBinding_MetaData), NewProp_EmitterBinding_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataInterfaceSimCacheReader_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSimCacheReader_Statics::NewProp_SimCacheBinding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSimCacheReader_Statics::NewProp_SimCache,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSimCacheReader_Statics::NewProp_EmitterBinding,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceSimCacheReader_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNiagaraDataInterfaceSimCacheReader_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceSimCacheReader_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfaceSimCacheReader_Statics::ClassParams = {
	&UNiagaraDataInterfaceSimCacheReader::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNiagaraDataInterfaceSimCacheReader_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceSimCacheReader_Statics::PropPointers),
	0,
	0x000030A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceSimCacheReader_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraDataInterfaceSimCacheReader_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNiagaraDataInterfaceSimCacheReader()
{
	if (!Z_Registration_Info_UClass_UNiagaraDataInterfaceSimCacheReader.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataInterfaceSimCacheReader.OuterSingleton, Z_Construct_UClass_UNiagaraDataInterfaceSimCacheReader_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNiagaraDataInterfaceSimCacheReader.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<UNiagaraDataInterfaceSimCacheReader>()
{
	return UNiagaraDataInterfaceSimCacheReader::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfaceSimCacheReader);
UNiagaraDataInterfaceSimCacheReader::~UNiagaraDataInterfaceSimCacheReader() {}
// End Class UNiagaraDataInterfaceSimCacheReader

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceSimCacheReader_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraDataInterfaceSimCacheReader, UNiagaraDataInterfaceSimCacheReader::StaticClass, TEXT("UNiagaraDataInterfaceSimCacheReader"), &Z_Registration_Info_UClass_UNiagaraDataInterfaceSimCacheReader, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataInterfaceSimCacheReader), 260178022U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceSimCacheReader_h_2954534612(TEXT("/Script/Niagara"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceSimCacheReader_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceSimCacheReader_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
