// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NiagaraCore/Public/NiagaraMergeable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraMergeable() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
NIAGARACORE_API UClass* Z_Construct_UClass_UNiagaraMergeable();
NIAGARACORE_API UClass* Z_Construct_UClass_UNiagaraMergeable_NoRegister();
UPackage* Z_Construct_UPackage__Script_NiagaraCore();
// End Cross Module References

// Begin Class UNiagaraMergeable
void UNiagaraMergeable::StaticRegisterNativesUNiagaraMergeable()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraMergeable);
UClass* Z_Construct_UClass_UNiagaraMergeable_NoRegister()
{
	return UNiagaraMergeable::StaticClass();
}
struct Z_Construct_UClass_UNiagaraMergeable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "NiagaraMergeable.h" },
		{ "ModuleRelativePath", "Public/NiagaraMergeable.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MergeId_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraMergeable.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MergeId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraMergeable>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraMergeable_Statics::NewProp_MergeId = { "MergeId", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraMergeable, MergeId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MergeId_MetaData), NewProp_MergeId_MetaData) };
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraMergeable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMergeable_Statics::NewProp_MergeId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMergeable_Statics::PropPointers) < 2048);
#endif // WITH_EDITORONLY_DATA
UObject* (*const Z_Construct_UClass_UNiagaraMergeable_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_NiagaraCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMergeable_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraMergeable_Statics::ClassParams = {
	&UNiagaraMergeable::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UNiagaraMergeable_Statics::PropPointers, nullptr),
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMergeable_Statics::PropPointers), 0),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMergeable_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraMergeable_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNiagaraMergeable()
{
	if (!Z_Registration_Info_UClass_UNiagaraMergeable.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraMergeable.OuterSingleton, Z_Construct_UClass_UNiagaraMergeable_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNiagaraMergeable.OuterSingleton;
}
template<> NIAGARACORE_API UClass* StaticClass<UNiagaraMergeable>()
{
	return UNiagaraMergeable::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraMergeable);
UNiagaraMergeable::~UNiagaraMergeable() {}
// End Class UNiagaraMergeable

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraCore_Public_NiagaraMergeable_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraMergeable, UNiagaraMergeable::StaticClass, TEXT("UNiagaraMergeable"), &Z_Registration_Info_UClass_UNiagaraMergeable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraMergeable), 1379024012U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraCore_Public_NiagaraMergeable_h_2541421860(TEXT("/Script/NiagaraCore"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraCore_Public_NiagaraMergeable_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraCore_Public_NiagaraMergeable_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
