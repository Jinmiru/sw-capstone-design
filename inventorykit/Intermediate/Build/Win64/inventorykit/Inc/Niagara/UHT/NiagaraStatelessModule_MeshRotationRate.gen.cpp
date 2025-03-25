// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Internal/Stateless/Modules/NiagaraStatelessModule_MeshRotationRate.h"
#include "Niagara/Internal/Stateless/NiagaraStatelessDistribution.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraStatelessModule_MeshRotationRate() {}

// Begin Cross Module References
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraStatelessModule();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraStatelessModule_MeshRotationRate();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraStatelessModule_MeshRotationRate_NoRegister();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDistributionRangeVector3();
UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

// Begin Class UNiagaraStatelessModule_MeshRotationRate
void UNiagaraStatelessModule_MeshRotationRate::StaticRegisterNativesUNiagaraStatelessModule_MeshRotationRate()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraStatelessModule_MeshRotationRate);
UClass* Z_Construct_UClass_UNiagaraStatelessModule_MeshRotationRate_NoRegister()
{
	return UNiagaraStatelessModule_MeshRotationRate::StaticClass();
}
struct Z_Construct_UClass_UNiagaraStatelessModule_MeshRotationRate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Mesh Rotation Rate" },
		{ "IncludePath", "Stateless/Modules/NiagaraStatelessModule_MeshRotationRate.h" },
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_MeshRotationRate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationRateDistribution_MetaData[] = {
		{ "Category", "Parameters" },
		{ "DisplayName", "Rotation Rate" },
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_MeshRotationRate.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_RotationRateDistribution;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraStatelessModule_MeshRotationRate>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraStatelessModule_MeshRotationRate_Statics::NewProp_RotationRateDistribution = { "RotationRateDistribution", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraStatelessModule_MeshRotationRate, RotationRateDistribution), Z_Construct_UScriptStruct_FNiagaraDistributionRangeVector3, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationRateDistribution_MetaData), NewProp_RotationRateDistribution_MetaData) }; // 196473061
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraStatelessModule_MeshRotationRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStatelessModule_MeshRotationRate_Statics::NewProp_RotationRateDistribution,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStatelessModule_MeshRotationRate_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNiagaraStatelessModule_MeshRotationRate_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNiagaraStatelessModule,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStatelessModule_MeshRotationRate_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraStatelessModule_MeshRotationRate_Statics::ClassParams = {
	&UNiagaraStatelessModule_MeshRotationRate::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNiagaraStatelessModule_MeshRotationRate_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStatelessModule_MeshRotationRate_Statics::PropPointers),
	0,
	0x000810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStatelessModule_MeshRotationRate_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraStatelessModule_MeshRotationRate_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNiagaraStatelessModule_MeshRotationRate()
{
	if (!Z_Registration_Info_UClass_UNiagaraStatelessModule_MeshRotationRate.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraStatelessModule_MeshRotationRate.OuterSingleton, Z_Construct_UClass_UNiagaraStatelessModule_MeshRotationRate_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNiagaraStatelessModule_MeshRotationRate.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<UNiagaraStatelessModule_MeshRotationRate>()
{
	return UNiagaraStatelessModule_MeshRotationRate::StaticClass();
}
UNiagaraStatelessModule_MeshRotationRate::UNiagaraStatelessModule_MeshRotationRate() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraStatelessModule_MeshRotationRate);
UNiagaraStatelessModule_MeshRotationRate::~UNiagaraStatelessModule_MeshRotationRate() {}
// End Class UNiagaraStatelessModule_MeshRotationRate

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_MeshRotationRate_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraStatelessModule_MeshRotationRate, UNiagaraStatelessModule_MeshRotationRate::StaticClass, TEXT("UNiagaraStatelessModule_MeshRotationRate"), &Z_Registration_Info_UClass_UNiagaraStatelessModule_MeshRotationRate, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraStatelessModule_MeshRotationRate), 3839874633U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_MeshRotationRate_h_2469871264(TEXT("/Script/Niagara"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_MeshRotationRate_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_MeshRotationRate_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
