// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Classes/NiagaraDataInterfaceOcclusion.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceOcclusion() {}

// Begin Cross Module References
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterface();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceOcclusion();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceOcclusion_NoRegister();
UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

// Begin Class UNiagaraDataInterfaceOcclusion
void UNiagaraDataInterfaceOcclusion::StaticRegisterNativesUNiagaraDataInterfaceOcclusion()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDataInterfaceOcclusion);
UClass* Z_Construct_UClass_UNiagaraDataInterfaceOcclusion_NoRegister()
{
	return UNiagaraDataInterfaceOcclusion::StaticClass();
}
struct Z_Construct_UClass_UNiagaraDataInterfaceOcclusion_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "DisplayName", "Occlusion Query" },
		{ "IncludePath", "NiagaraDataInterfaceOcclusion.h" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceOcclusion.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfaceOcclusion>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNiagaraDataInterfaceOcclusion_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceOcclusion_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfaceOcclusion_Statics::ClassParams = {
	&UNiagaraDataInterfaceOcclusion::StaticClass,
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
	0x000810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceOcclusion_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraDataInterfaceOcclusion_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNiagaraDataInterfaceOcclusion()
{
	if (!Z_Registration_Info_UClass_UNiagaraDataInterfaceOcclusion.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataInterfaceOcclusion.OuterSingleton, Z_Construct_UClass_UNiagaraDataInterfaceOcclusion_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNiagaraDataInterfaceOcclusion.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<UNiagaraDataInterfaceOcclusion>()
{
	return UNiagaraDataInterfaceOcclusion::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfaceOcclusion);
UNiagaraDataInterfaceOcclusion::~UNiagaraDataInterfaceOcclusion() {}
// End Class UNiagaraDataInterfaceOcclusion

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceOcclusion_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraDataInterfaceOcclusion, UNiagaraDataInterfaceOcclusion::StaticClass, TEXT("UNiagaraDataInterfaceOcclusion"), &Z_Registration_Info_UClass_UNiagaraDataInterfaceOcclusion, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataInterfaceOcclusion), 1918369413U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceOcclusion_h_2773924189(TEXT("/Script/Niagara"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceOcclusion_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceOcclusion_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
