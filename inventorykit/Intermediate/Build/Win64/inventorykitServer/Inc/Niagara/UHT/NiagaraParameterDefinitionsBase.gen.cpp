// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Classes/NiagaraParameterDefinitionsBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraParameterDefinitionsBase() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraParameterDefinitionsBase();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraParameterDefinitionsBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

// Begin Class UNiagaraParameterDefinitionsBase
void UNiagaraParameterDefinitionsBase::StaticRegisterNativesUNiagaraParameterDefinitionsBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraParameterDefinitionsBase);
UClass* Z_Construct_UClass_UNiagaraParameterDefinitionsBase_NoRegister()
{
	return UNiagaraParameterDefinitionsBase::StaticClass();
}
struct Z_Construct_UClass_UNiagaraParameterDefinitionsBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** Stub class. Collection of UNiagaraScriptVariables to synchronize between UNiagaraScripts. */" },
		{ "IncludePath", "NiagaraParameterDefinitionsBase.h" },
		{ "ModuleRelativePath", "Classes/NiagaraParameterDefinitionsBase.h" },
		{ "ToolTip", "Stub class. Collection of UNiagaraScriptVariables to synchronize between UNiagaraScripts." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UniqueId_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraParameterDefinitionsBase.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_UniqueId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraParameterDefinitionsBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraParameterDefinitionsBase_Statics::NewProp_UniqueId = { "UniqueId", nullptr, (EPropertyFlags)0x0020080800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraParameterDefinitionsBase, UniqueId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UniqueId_MetaData), NewProp_UniqueId_MetaData) };
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraParameterDefinitionsBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraParameterDefinitionsBase_Statics::NewProp_UniqueId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraParameterDefinitionsBase_Statics::PropPointers) < 2048);
#endif // WITH_EDITORONLY_DATA
UObject* (*const Z_Construct_UClass_UNiagaraParameterDefinitionsBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraParameterDefinitionsBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraParameterDefinitionsBase_Statics::ClassParams = {
	&UNiagaraParameterDefinitionsBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UNiagaraParameterDefinitionsBase_Statics::PropPointers, nullptr),
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraParameterDefinitionsBase_Statics::PropPointers), 0),
	0,
	0x000800A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraParameterDefinitionsBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraParameterDefinitionsBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNiagaraParameterDefinitionsBase()
{
	if (!Z_Registration_Info_UClass_UNiagaraParameterDefinitionsBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraParameterDefinitionsBase.OuterSingleton, Z_Construct_UClass_UNiagaraParameterDefinitionsBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNiagaraParameterDefinitionsBase.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<UNiagaraParameterDefinitionsBase>()
{
	return UNiagaraParameterDefinitionsBase::StaticClass();
}
UNiagaraParameterDefinitionsBase::UNiagaraParameterDefinitionsBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraParameterDefinitionsBase);
UNiagaraParameterDefinitionsBase::~UNiagaraParameterDefinitionsBase() {}
// End Class UNiagaraParameterDefinitionsBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraParameterDefinitionsBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraParameterDefinitionsBase, UNiagaraParameterDefinitionsBase::StaticClass, TEXT("UNiagaraParameterDefinitionsBase"), &Z_Registration_Info_UClass_UNiagaraParameterDefinitionsBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraParameterDefinitionsBase), 2141155975U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraParameterDefinitionsBase_h_3162972531(TEXT("/Script/Niagara"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraParameterDefinitionsBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraParameterDefinitionsBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
