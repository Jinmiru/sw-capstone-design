// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Public/NiagaraRenderableMeshInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraRenderableMeshInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraRenderableMeshInterface();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraRenderableMeshInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

// Begin Interface UNiagaraRenderableMeshInterface
void UNiagaraRenderableMeshInterface::StaticRegisterNativesUNiagaraRenderableMeshInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraRenderableMeshInterface);
UClass* Z_Construct_UClass_UNiagaraRenderableMeshInterface_NoRegister()
{
	return UNiagaraRenderableMeshInterface::StaticClass();
}
struct Z_Construct_UClass_UNiagaraRenderableMeshInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraRenderableMeshInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<INiagaraRenderableMeshInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNiagaraRenderableMeshInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraRenderableMeshInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraRenderableMeshInterface_Statics::ClassParams = {
	&UNiagaraRenderableMeshInterface::StaticClass,
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
	0x000040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraRenderableMeshInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraRenderableMeshInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNiagaraRenderableMeshInterface()
{
	if (!Z_Registration_Info_UClass_UNiagaraRenderableMeshInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraRenderableMeshInterface.OuterSingleton, Z_Construct_UClass_UNiagaraRenderableMeshInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNiagaraRenderableMeshInterface.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<UNiagaraRenderableMeshInterface>()
{
	return UNiagaraRenderableMeshInterface::StaticClass();
}
UNiagaraRenderableMeshInterface::UNiagaraRenderableMeshInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraRenderableMeshInterface);
UNiagaraRenderableMeshInterface::~UNiagaraRenderableMeshInterface() {}
// End Interface UNiagaraRenderableMeshInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraRenderableMeshInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraRenderableMeshInterface, UNiagaraRenderableMeshInterface::StaticClass, TEXT("UNiagaraRenderableMeshInterface"), &Z_Registration_Info_UClass_UNiagaraRenderableMeshInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraRenderableMeshInterface), 2046717313U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraRenderableMeshInterface_h_2321290755(TEXT("/Script/Niagara"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraRenderableMeshInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraRenderableMeshInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
