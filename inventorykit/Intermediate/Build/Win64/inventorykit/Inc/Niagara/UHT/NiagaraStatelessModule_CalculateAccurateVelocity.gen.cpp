// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Internal/Stateless/Modules/NiagaraStatelessModule_CalculateAccurateVelocity.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraStatelessModule_CalculateAccurateVelocity() {}

// Begin Cross Module References
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraStatelessModule();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraStatelessModule_CalculateAccurateVelocity();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraStatelessModule_CalculateAccurateVelocity_NoRegister();
UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

// Begin Class UNiagaraStatelessModule_CalculateAccurateVelocity
void UNiagaraStatelessModule_CalculateAccurateVelocity::StaticRegisterNativesUNiagaraStatelessModule_CalculateAccurateVelocity()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraStatelessModule_CalculateAccurateVelocity);
UClass* Z_Construct_UClass_UNiagaraStatelessModule_CalculateAccurateVelocity_NoRegister()
{
	return UNiagaraStatelessModule_CalculateAccurateVelocity::StaticClass();
}
struct Z_Construct_UClass_UNiagaraStatelessModule_CalculateAccurateVelocity_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Rotate Around Point" },
		{ "IncludePath", "Stateless/Modules/NiagaraStatelessModule_CalculateAccurateVelocity.h" },
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_CalculateAccurateVelocity.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraStatelessModule_CalculateAccurateVelocity>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNiagaraStatelessModule_CalculateAccurateVelocity_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNiagaraStatelessModule,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStatelessModule_CalculateAccurateVelocity_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraStatelessModule_CalculateAccurateVelocity_Statics::ClassParams = {
	&UNiagaraStatelessModule_CalculateAccurateVelocity::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStatelessModule_CalculateAccurateVelocity_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraStatelessModule_CalculateAccurateVelocity_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNiagaraStatelessModule_CalculateAccurateVelocity()
{
	if (!Z_Registration_Info_UClass_UNiagaraStatelessModule_CalculateAccurateVelocity.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraStatelessModule_CalculateAccurateVelocity.OuterSingleton, Z_Construct_UClass_UNiagaraStatelessModule_CalculateAccurateVelocity_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNiagaraStatelessModule_CalculateAccurateVelocity.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<UNiagaraStatelessModule_CalculateAccurateVelocity>()
{
	return UNiagaraStatelessModule_CalculateAccurateVelocity::StaticClass();
}
UNiagaraStatelessModule_CalculateAccurateVelocity::UNiagaraStatelessModule_CalculateAccurateVelocity() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraStatelessModule_CalculateAccurateVelocity);
UNiagaraStatelessModule_CalculateAccurateVelocity::~UNiagaraStatelessModule_CalculateAccurateVelocity() {}
// End Class UNiagaraStatelessModule_CalculateAccurateVelocity

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_CalculateAccurateVelocity_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraStatelessModule_CalculateAccurateVelocity, UNiagaraStatelessModule_CalculateAccurateVelocity::StaticClass, TEXT("UNiagaraStatelessModule_CalculateAccurateVelocity"), &Z_Registration_Info_UClass_UNiagaraStatelessModule_CalculateAccurateVelocity, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraStatelessModule_CalculateAccurateVelocity), 3521850639U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_CalculateAccurateVelocity_h_3186082113(TEXT("/Script/Niagara"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_CalculateAccurateVelocity_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_CalculateAccurateVelocity_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
