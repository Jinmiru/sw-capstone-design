// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Internal/Stateless/Modules/NiagaraStatelessModule_ScaleSpriteSizeBySpeed.h"
#include "Niagara/Internal/Stateless/NiagaraStatelessDistribution.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraStatelessModule_ScaleSpriteSizeBySpeed() {}

// Begin Cross Module References
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraStatelessModule();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraStatelessModule_ScaleSpriteSizeBySpeed();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraStatelessModule_ScaleSpriteSizeBySpeed_NoRegister();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDistributionVector2();
UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

// Begin Class UNiagaraStatelessModule_ScaleSpriteSizeBySpeed
void UNiagaraStatelessModule_ScaleSpriteSizeBySpeed::StaticRegisterNativesUNiagaraStatelessModule_ScaleSpriteSizeBySpeed()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraStatelessModule_ScaleSpriteSizeBySpeed);
UClass* Z_Construct_UClass_UNiagaraStatelessModule_ScaleSpriteSizeBySpeed_NoRegister()
{
	return UNiagaraStatelessModule_ScaleSpriteSizeBySpeed::StaticClass();
}
struct Z_Construct_UClass_UNiagaraStatelessModule_ScaleSpriteSizeBySpeed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Scale Sprite Size By Speed" },
		{ "IncludePath", "Stateless/Modules/NiagaraStatelessModule_ScaleSpriteSizeBySpeed.h" },
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_ScaleSpriteSizeBySpeed.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VelocityThreshold_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ClampMin", "0.01" },
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_ScaleSpriteSizeBySpeed.h" },
		{ "UIMin", "0.01" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScaleDistribution_MetaData[] = {
		{ "Category", "Parameters" },
		{ "DisableBindingDistribution", "" },
		{ "DisableRangeDistribution", "" },
		{ "DisplayName", "Scale" },
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_ScaleSpriteSizeBySpeed.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VelocityThreshold;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ScaleDistribution;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraStatelessModule_ScaleSpriteSizeBySpeed>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraStatelessModule_ScaleSpriteSizeBySpeed_Statics::NewProp_VelocityThreshold = { "VelocityThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraStatelessModule_ScaleSpriteSizeBySpeed, VelocityThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VelocityThreshold_MetaData), NewProp_VelocityThreshold_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraStatelessModule_ScaleSpriteSizeBySpeed_Statics::NewProp_ScaleDistribution = { "ScaleDistribution", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraStatelessModule_ScaleSpriteSizeBySpeed, ScaleDistribution), Z_Construct_UScriptStruct_FNiagaraDistributionVector2, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScaleDistribution_MetaData), NewProp_ScaleDistribution_MetaData) }; // 3321022569
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraStatelessModule_ScaleSpriteSizeBySpeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStatelessModule_ScaleSpriteSizeBySpeed_Statics::NewProp_VelocityThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStatelessModule_ScaleSpriteSizeBySpeed_Statics::NewProp_ScaleDistribution,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStatelessModule_ScaleSpriteSizeBySpeed_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNiagaraStatelessModule_ScaleSpriteSizeBySpeed_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNiagaraStatelessModule,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStatelessModule_ScaleSpriteSizeBySpeed_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraStatelessModule_ScaleSpriteSizeBySpeed_Statics::ClassParams = {
	&UNiagaraStatelessModule_ScaleSpriteSizeBySpeed::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNiagaraStatelessModule_ScaleSpriteSizeBySpeed_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStatelessModule_ScaleSpriteSizeBySpeed_Statics::PropPointers),
	0,
	0x000810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStatelessModule_ScaleSpriteSizeBySpeed_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraStatelessModule_ScaleSpriteSizeBySpeed_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNiagaraStatelessModule_ScaleSpriteSizeBySpeed()
{
	if (!Z_Registration_Info_UClass_UNiagaraStatelessModule_ScaleSpriteSizeBySpeed.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraStatelessModule_ScaleSpriteSizeBySpeed.OuterSingleton, Z_Construct_UClass_UNiagaraStatelessModule_ScaleSpriteSizeBySpeed_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNiagaraStatelessModule_ScaleSpriteSizeBySpeed.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<UNiagaraStatelessModule_ScaleSpriteSizeBySpeed>()
{
	return UNiagaraStatelessModule_ScaleSpriteSizeBySpeed::StaticClass();
}
UNiagaraStatelessModule_ScaleSpriteSizeBySpeed::UNiagaraStatelessModule_ScaleSpriteSizeBySpeed() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraStatelessModule_ScaleSpriteSizeBySpeed);
UNiagaraStatelessModule_ScaleSpriteSizeBySpeed::~UNiagaraStatelessModule_ScaleSpriteSizeBySpeed() {}
// End Class UNiagaraStatelessModule_ScaleSpriteSizeBySpeed

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_ScaleSpriteSizeBySpeed_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraStatelessModule_ScaleSpriteSizeBySpeed, UNiagaraStatelessModule_ScaleSpriteSizeBySpeed::StaticClass, TEXT("UNiagaraStatelessModule_ScaleSpriteSizeBySpeed"), &Z_Registration_Info_UClass_UNiagaraStatelessModule_ScaleSpriteSizeBySpeed, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraStatelessModule_ScaleSpriteSizeBySpeed), 2970455320U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_ScaleSpriteSizeBySpeed_h_4093957379(TEXT("/Script/Niagara"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_ScaleSpriteSizeBySpeed_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_ScaleSpriteSizeBySpeed_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
