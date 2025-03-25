// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NiagaraCore/Public/NiagaraDataInterfaceBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceBase() {}

// Begin Cross Module References
NIAGARACORE_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceBase();
NIAGARACORE_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceBase_NoRegister();
NIAGARACORE_API UClass* Z_Construct_UClass_UNiagaraMergeable();
UPackage* Z_Construct_UPackage__Script_NiagaraCore();
// End Cross Module References

// Begin Class UNiagaraDataInterfaceBase
void UNiagaraDataInterfaceBase::StaticRegisterNativesUNiagaraDataInterfaceBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDataInterfaceBase);
UClass* Z_Construct_UClass_UNiagaraDataInterfaceBase_NoRegister()
{
	return UNiagaraDataInterfaceBase::StaticClass();
}
struct Z_Construct_UClass_UNiagaraDataInterfaceBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** Base class for all Niagara data interfaces. */" },
		{ "IncludePath", "NiagaraDataInterfaceBase.h" },
		{ "ModuleRelativePath", "Public/NiagaraDataInterfaceBase.h" },
		{ "ToolTip", "Base class for all Niagara data interfaces." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfaceBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNiagaraDataInterfaceBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNiagaraMergeable,
	(UObject* (*)())Z_Construct_UPackage__Script_NiagaraCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfaceBase_Statics::ClassParams = {
	&UNiagaraDataInterfaceBase::StaticClass,
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
	0x000810A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraDataInterfaceBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNiagaraDataInterfaceBase()
{
	if (!Z_Registration_Info_UClass_UNiagaraDataInterfaceBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataInterfaceBase.OuterSingleton, Z_Construct_UClass_UNiagaraDataInterfaceBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNiagaraDataInterfaceBase.OuterSingleton;
}
template<> NIAGARACORE_API UClass* StaticClass<UNiagaraDataInterfaceBase>()
{
	return UNiagaraDataInterfaceBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfaceBase);
UNiagaraDataInterfaceBase::~UNiagaraDataInterfaceBase() {}
// End Class UNiagaraDataInterfaceBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraCore_Public_NiagaraDataInterfaceBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraDataInterfaceBase, UNiagaraDataInterfaceBase::StaticClass, TEXT("UNiagaraDataInterfaceBase"), &Z_Registration_Info_UClass_UNiagaraDataInterfaceBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataInterfaceBase), 3622651145U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraCore_Public_NiagaraDataInterfaceBase_h_683259173(TEXT("/Script/NiagaraCore"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraCore_Public_NiagaraDataInterfaceBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraCore_Public_NiagaraDataInterfaceBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
