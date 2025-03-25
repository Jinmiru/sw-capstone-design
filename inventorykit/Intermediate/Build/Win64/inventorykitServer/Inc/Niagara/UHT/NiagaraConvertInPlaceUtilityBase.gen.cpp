// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Public/NiagaraConvertInPlaceUtilityBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraConvertInPlaceUtilityBase() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraConvertInPlaceUtilityBase();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraConvertInPlaceUtilityBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

// Begin Class UNiagaraConvertInPlaceUtilityBase
void UNiagaraConvertInPlaceUtilityBase::StaticRegisterNativesUNiagaraConvertInPlaceUtilityBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraConvertInPlaceUtilityBase);
UClass* Z_Construct_UClass_UNiagaraConvertInPlaceUtilityBase_NoRegister()
{
	return UNiagaraConvertInPlaceUtilityBase::StaticClass();
}
struct Z_Construct_UClass_UNiagaraConvertInPlaceUtilityBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "NiagaraConvertInPlaceUtilityBase.h" },
		{ "ModuleRelativePath", "Public/NiagaraConvertInPlaceUtilityBase.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraConvertInPlaceUtilityBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNiagaraConvertInPlaceUtilityBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraConvertInPlaceUtilityBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraConvertInPlaceUtilityBase_Statics::ClassParams = {
	&UNiagaraConvertInPlaceUtilityBase::StaticClass,
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
	0x000800A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraConvertInPlaceUtilityBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraConvertInPlaceUtilityBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNiagaraConvertInPlaceUtilityBase()
{
	if (!Z_Registration_Info_UClass_UNiagaraConvertInPlaceUtilityBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraConvertInPlaceUtilityBase.OuterSingleton, Z_Construct_UClass_UNiagaraConvertInPlaceUtilityBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNiagaraConvertInPlaceUtilityBase.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<UNiagaraConvertInPlaceUtilityBase>()
{
	return UNiagaraConvertInPlaceUtilityBase::StaticClass();
}
UNiagaraConvertInPlaceUtilityBase::UNiagaraConvertInPlaceUtilityBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraConvertInPlaceUtilityBase);
UNiagaraConvertInPlaceUtilityBase::~UNiagaraConvertInPlaceUtilityBase() {}
// End Class UNiagaraConvertInPlaceUtilityBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraConvertInPlaceUtilityBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraConvertInPlaceUtilityBase, UNiagaraConvertInPlaceUtilityBase::StaticClass, TEXT("UNiagaraConvertInPlaceUtilityBase"), &Z_Registration_Info_UClass_UNiagaraConvertInPlaceUtilityBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraConvertInPlaceUtilityBase), 2775353145U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraConvertInPlaceUtilityBase_h_1223943226(TEXT("/Script/Niagara"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraConvertInPlaceUtilityBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraConvertInPlaceUtilityBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
