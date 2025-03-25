// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Public/NiagaraMessageDataBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraMessageDataBase() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraMessageDataBase();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraMessageDataBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

// Begin Class UNiagaraMessageDataBase
void UNiagaraMessageDataBase::StaticRegisterNativesUNiagaraMessageDataBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraMessageDataBase);
UClass* Z_Construct_UClass_UNiagaraMessageDataBase_NoRegister()
{
	return UNiagaraMessageDataBase::StaticClass();
}
struct Z_Construct_UClass_UNiagaraMessageDataBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "NiagaraMessageDataBase.h" },
		{ "ModuleRelativePath", "Public/NiagaraMessageDataBase.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraMessageDataBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNiagaraMessageDataBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMessageDataBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraMessageDataBase_Statics::ClassParams = {
	&UNiagaraMessageDataBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMessageDataBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraMessageDataBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNiagaraMessageDataBase()
{
	if (!Z_Registration_Info_UClass_UNiagaraMessageDataBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraMessageDataBase.OuterSingleton, Z_Construct_UClass_UNiagaraMessageDataBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNiagaraMessageDataBase.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<UNiagaraMessageDataBase>()
{
	return UNiagaraMessageDataBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraMessageDataBase);
UNiagaraMessageDataBase::~UNiagaraMessageDataBase() {}
// End Class UNiagaraMessageDataBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraMessageDataBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraMessageDataBase, UNiagaraMessageDataBase::StaticClass, TEXT("UNiagaraMessageDataBase"), &Z_Registration_Info_UClass_UNiagaraMessageDataBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraMessageDataBase), 3579773477U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraMessageDataBase_h_1532187759(TEXT("/Script/Niagara"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraMessageDataBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraMessageDataBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
