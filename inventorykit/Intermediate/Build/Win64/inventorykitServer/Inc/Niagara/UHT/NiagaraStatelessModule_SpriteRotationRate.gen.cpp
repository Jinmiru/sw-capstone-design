// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Internal/Stateless/Modules/NiagaraStatelessModule_SpriteRotationRate.h"
#include "Niagara/Internal/Stateless/NiagaraStatelessDistribution.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraStatelessModule_SpriteRotationRate() {}

// Begin Cross Module References
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraStatelessModule();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraStatelessModule_SpriteRotationRate();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraStatelessModule_SpriteRotationRate_NoRegister();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDistributionRangeFloat();
UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

// Begin Class UNiagaraStatelessModule_SpriteRotationRate
void UNiagaraStatelessModule_SpriteRotationRate::StaticRegisterNativesUNiagaraStatelessModule_SpriteRotationRate()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraStatelessModule_SpriteRotationRate);
UClass* Z_Construct_UClass_UNiagaraStatelessModule_SpriteRotationRate_NoRegister()
{
	return UNiagaraStatelessModule_SpriteRotationRate::StaticClass();
}
struct Z_Construct_UClass_UNiagaraStatelessModule_SpriteRotationRate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Sprite Rotation Rate" },
		{ "IncludePath", "Stateless/Modules/NiagaraStatelessModule_SpriteRotationRate.h" },
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_SpriteRotationRate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationRateDistribution_MetaData[] = {
		{ "Category", "Parameters" },
		{ "DisplayName", "Rotation Rate" },
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_SpriteRotationRate.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_RotationRateDistribution;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraStatelessModule_SpriteRotationRate>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraStatelessModule_SpriteRotationRate_Statics::NewProp_RotationRateDistribution = { "RotationRateDistribution", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraStatelessModule_SpriteRotationRate, RotationRateDistribution), Z_Construct_UScriptStruct_FNiagaraDistributionRangeFloat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationRateDistribution_MetaData), NewProp_RotationRateDistribution_MetaData) }; // 1814083401
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraStatelessModule_SpriteRotationRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStatelessModule_SpriteRotationRate_Statics::NewProp_RotationRateDistribution,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStatelessModule_SpriteRotationRate_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNiagaraStatelessModule_SpriteRotationRate_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNiagaraStatelessModule,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStatelessModule_SpriteRotationRate_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraStatelessModule_SpriteRotationRate_Statics::ClassParams = {
	&UNiagaraStatelessModule_SpriteRotationRate::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNiagaraStatelessModule_SpriteRotationRate_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStatelessModule_SpriteRotationRate_Statics::PropPointers),
	0,
	0x000810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStatelessModule_SpriteRotationRate_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraStatelessModule_SpriteRotationRate_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNiagaraStatelessModule_SpriteRotationRate()
{
	if (!Z_Registration_Info_UClass_UNiagaraStatelessModule_SpriteRotationRate.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraStatelessModule_SpriteRotationRate.OuterSingleton, Z_Construct_UClass_UNiagaraStatelessModule_SpriteRotationRate_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNiagaraStatelessModule_SpriteRotationRate.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<UNiagaraStatelessModule_SpriteRotationRate>()
{
	return UNiagaraStatelessModule_SpriteRotationRate::StaticClass();
}
UNiagaraStatelessModule_SpriteRotationRate::UNiagaraStatelessModule_SpriteRotationRate() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraStatelessModule_SpriteRotationRate);
UNiagaraStatelessModule_SpriteRotationRate::~UNiagaraStatelessModule_SpriteRotationRate() {}
// End Class UNiagaraStatelessModule_SpriteRotationRate

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_SpriteRotationRate_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraStatelessModule_SpriteRotationRate, UNiagaraStatelessModule_SpriteRotationRate::StaticClass, TEXT("UNiagaraStatelessModule_SpriteRotationRate"), &Z_Registration_Info_UClass_UNiagaraStatelessModule_SpriteRotationRate, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraStatelessModule_SpriteRotationRate), 1592094494U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_SpriteRotationRate_h_844212721(TEXT("/Script/Niagara"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_SpriteRotationRate_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_SpriteRotationRate_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
