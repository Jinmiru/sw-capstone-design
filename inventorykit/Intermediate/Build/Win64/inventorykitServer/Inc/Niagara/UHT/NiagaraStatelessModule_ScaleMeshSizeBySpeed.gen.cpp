// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Internal/Stateless/Modules/NiagaraStatelessModule_ScaleMeshSizeBySpeed.h"
#include "Niagara/Internal/Stateless/NiagaraStatelessDistribution.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraStatelessModule_ScaleMeshSizeBySpeed() {}

// Begin Cross Module References
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraStatelessModule();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraStatelessModule_ScaleMeshSizeBySpeed();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraStatelessModule_ScaleMeshSizeBySpeed_NoRegister();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDistributionVector3();
UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

// Begin Class UNiagaraStatelessModule_ScaleMeshSizeBySpeed
void UNiagaraStatelessModule_ScaleMeshSizeBySpeed::StaticRegisterNativesUNiagaraStatelessModule_ScaleMeshSizeBySpeed()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraStatelessModule_ScaleMeshSizeBySpeed);
UClass* Z_Construct_UClass_UNiagaraStatelessModule_ScaleMeshSizeBySpeed_NoRegister()
{
	return UNiagaraStatelessModule_ScaleMeshSizeBySpeed::StaticClass();
}
struct Z_Construct_UClass_UNiagaraStatelessModule_ScaleMeshSizeBySpeed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Scale Mesh Size By Speed" },
		{ "IncludePath", "Stateless/Modules/NiagaraStatelessModule_ScaleMeshSizeBySpeed.h" },
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_ScaleMeshSizeBySpeed.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VelocityThreshold_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ClampMin", "0.01" },
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_ScaleMeshSizeBySpeed.h" },
		{ "UIMin", "0.01" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScaleDistribution_MetaData[] = {
		{ "Category", "Parameters" },
		{ "DisableBindingDistribution", "" },
		{ "DisableRangeDistribution", "" },
		{ "DisplayName", "Scale" },
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_ScaleMeshSizeBySpeed.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VelocityThreshold;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ScaleDistribution;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraStatelessModule_ScaleMeshSizeBySpeed>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraStatelessModule_ScaleMeshSizeBySpeed_Statics::NewProp_VelocityThreshold = { "VelocityThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraStatelessModule_ScaleMeshSizeBySpeed, VelocityThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VelocityThreshold_MetaData), NewProp_VelocityThreshold_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraStatelessModule_ScaleMeshSizeBySpeed_Statics::NewProp_ScaleDistribution = { "ScaleDistribution", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraStatelessModule_ScaleMeshSizeBySpeed, ScaleDistribution), Z_Construct_UScriptStruct_FNiagaraDistributionVector3, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScaleDistribution_MetaData), NewProp_ScaleDistribution_MetaData) }; // 274836187
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraStatelessModule_ScaleMeshSizeBySpeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStatelessModule_ScaleMeshSizeBySpeed_Statics::NewProp_VelocityThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStatelessModule_ScaleMeshSizeBySpeed_Statics::NewProp_ScaleDistribution,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStatelessModule_ScaleMeshSizeBySpeed_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNiagaraStatelessModule_ScaleMeshSizeBySpeed_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNiagaraStatelessModule,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStatelessModule_ScaleMeshSizeBySpeed_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraStatelessModule_ScaleMeshSizeBySpeed_Statics::ClassParams = {
	&UNiagaraStatelessModule_ScaleMeshSizeBySpeed::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNiagaraStatelessModule_ScaleMeshSizeBySpeed_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStatelessModule_ScaleMeshSizeBySpeed_Statics::PropPointers),
	0,
	0x000810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStatelessModule_ScaleMeshSizeBySpeed_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraStatelessModule_ScaleMeshSizeBySpeed_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNiagaraStatelessModule_ScaleMeshSizeBySpeed()
{
	if (!Z_Registration_Info_UClass_UNiagaraStatelessModule_ScaleMeshSizeBySpeed.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraStatelessModule_ScaleMeshSizeBySpeed.OuterSingleton, Z_Construct_UClass_UNiagaraStatelessModule_ScaleMeshSizeBySpeed_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNiagaraStatelessModule_ScaleMeshSizeBySpeed.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<UNiagaraStatelessModule_ScaleMeshSizeBySpeed>()
{
	return UNiagaraStatelessModule_ScaleMeshSizeBySpeed::StaticClass();
}
UNiagaraStatelessModule_ScaleMeshSizeBySpeed::UNiagaraStatelessModule_ScaleMeshSizeBySpeed() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraStatelessModule_ScaleMeshSizeBySpeed);
UNiagaraStatelessModule_ScaleMeshSizeBySpeed::~UNiagaraStatelessModule_ScaleMeshSizeBySpeed() {}
// End Class UNiagaraStatelessModule_ScaleMeshSizeBySpeed

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_ScaleMeshSizeBySpeed_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraStatelessModule_ScaleMeshSizeBySpeed, UNiagaraStatelessModule_ScaleMeshSizeBySpeed::StaticClass, TEXT("UNiagaraStatelessModule_ScaleMeshSizeBySpeed"), &Z_Registration_Info_UClass_UNiagaraStatelessModule_ScaleMeshSizeBySpeed, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraStatelessModule_ScaleMeshSizeBySpeed), 2086028988U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_ScaleMeshSizeBySpeed_h_2932094412(TEXT("/Script/Niagara"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_ScaleMeshSizeBySpeed_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_ScaleMeshSizeBySpeed_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
