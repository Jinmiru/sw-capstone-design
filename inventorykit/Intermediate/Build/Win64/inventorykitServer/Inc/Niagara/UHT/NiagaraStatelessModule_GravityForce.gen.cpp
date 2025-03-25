// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Internal/Stateless/Modules/NiagaraStatelessModule_GravityForce.h"
#include "Niagara/Internal/Stateless/NiagaraStatelessDistribution.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraStatelessModule_GravityForce() {}

// Begin Cross Module References
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraStatelessModule();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraStatelessModule_GravityForce();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraStatelessModule_GravityForce_NoRegister();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDistributionRangeVector3();
UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

// Begin Class UNiagaraStatelessModule_GravityForce
void UNiagaraStatelessModule_GravityForce::StaticRegisterNativesUNiagaraStatelessModule_GravityForce()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraStatelessModule_GravityForce);
UClass* Z_Construct_UClass_UNiagaraStatelessModule_GravityForce_NoRegister()
{
	return UNiagaraStatelessModule_GravityForce::StaticClass();
}
struct Z_Construct_UClass_UNiagaraStatelessModule_GravityForce_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Gravity Force" },
		{ "IncludePath", "Stateless/Modules/NiagaraStatelessModule_GravityForce.h" },
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_GravityForce.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GravityDistribution_MetaData[] = {
		{ "Category", "Parameters" },
		{ "DisableBindingDistribution", "" },
		{ "DisableUniformDistribution", "" },
		{ "DisplayName", "Gravity" },
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_GravityForce.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GravityDistribution;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraStatelessModule_GravityForce>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraStatelessModule_GravityForce_Statics::NewProp_GravityDistribution = { "GravityDistribution", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraStatelessModule_GravityForce, GravityDistribution), Z_Construct_UScriptStruct_FNiagaraDistributionRangeVector3, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GravityDistribution_MetaData), NewProp_GravityDistribution_MetaData) }; // 196473061
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraStatelessModule_GravityForce_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStatelessModule_GravityForce_Statics::NewProp_GravityDistribution,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStatelessModule_GravityForce_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNiagaraStatelessModule_GravityForce_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNiagaraStatelessModule,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStatelessModule_GravityForce_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraStatelessModule_GravityForce_Statics::ClassParams = {
	&UNiagaraStatelessModule_GravityForce::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNiagaraStatelessModule_GravityForce_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStatelessModule_GravityForce_Statics::PropPointers),
	0,
	0x000810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStatelessModule_GravityForce_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraStatelessModule_GravityForce_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNiagaraStatelessModule_GravityForce()
{
	if (!Z_Registration_Info_UClass_UNiagaraStatelessModule_GravityForce.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraStatelessModule_GravityForce.OuterSingleton, Z_Construct_UClass_UNiagaraStatelessModule_GravityForce_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNiagaraStatelessModule_GravityForce.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<UNiagaraStatelessModule_GravityForce>()
{
	return UNiagaraStatelessModule_GravityForce::StaticClass();
}
UNiagaraStatelessModule_GravityForce::UNiagaraStatelessModule_GravityForce() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraStatelessModule_GravityForce);
UNiagaraStatelessModule_GravityForce::~UNiagaraStatelessModule_GravityForce() {}
// End Class UNiagaraStatelessModule_GravityForce

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_GravityForce_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraStatelessModule_GravityForce, UNiagaraStatelessModule_GravityForce::StaticClass, TEXT("UNiagaraStatelessModule_GravityForce"), &Z_Registration_Info_UClass_UNiagaraStatelessModule_GravityForce, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraStatelessModule_GravityForce), 2433465122U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_GravityForce_h_3766416610(TEXT("/Script/Niagara"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_GravityForce_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_GravityForce_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
