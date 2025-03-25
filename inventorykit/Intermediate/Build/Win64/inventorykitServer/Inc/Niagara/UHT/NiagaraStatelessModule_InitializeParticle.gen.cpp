// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Internal/Stateless/Modules/NiagaraStatelessModule_InitializeParticle.h"
#include "Niagara/Internal/Stateless/NiagaraStatelessDistribution.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraStatelessModule_InitializeParticle() {}

// Begin Cross Module References
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraStatelessModule();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraStatelessModule_InitializeParticle();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraStatelessModule_InitializeParticle_NoRegister();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDistributionRangeColor();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDistributionRangeFloat();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDistributionRangeVector2();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDistributionRangeVector3();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDistributionVector3();
UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

// Begin Class UNiagaraStatelessModule_InitializeParticle
void UNiagaraStatelessModule_InitializeParticle::StaticRegisterNativesUNiagaraStatelessModule_InitializeParticle()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraStatelessModule_InitializeParticle);
UClass* Z_Construct_UClass_UNiagaraStatelessModule_InitializeParticle_NoRegister()
{
	return UNiagaraStatelessModule_InitializeParticle::StaticClass();
}
struct Z_Construct_UClass_UNiagaraStatelessModule_InitializeParticle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Initialize Particle" },
		{ "IncludePath", "Stateless/Modules/NiagaraStatelessModule_InitializeParticle.h" },
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_InitializeParticle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LifetimeDistribution_MetaData[] = {
		{ "Category", "Parameters" },
		{ "DisplayName", "Lifetime" },
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_InitializeParticle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorDistribution_MetaData[] = {
		{ "Category", "Parameters" },
		{ "DisableCurveDistribution", "" },
		{ "DisplayName", "Color" },
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_InitializeParticle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MassDistribution_MetaData[] = {
		{ "Category", "Parameters" },
		{ "DisplayName", "Mass" },
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_InitializeParticle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpriteSizeDistribution_MetaData[] = {
		{ "Category", "Parameters" },
		{ "DisplayName", "Sprite Size" },
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_InitializeParticle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpriteRotationDistribution_MetaData[] = {
		{ "Category", "Parameters" },
		{ "DisplayName", "Sprite Rotation" },
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_InitializeParticle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshScaleDistribution_MetaData[] = {
		{ "Category", "Parameters" },
		{ "DisplayName", "Mesh Scale" },
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_InitializeParticle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteRibbonWidth_MetaData[] = {
		{ "Category", "Parameters" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_InitializeParticle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RibbonWidthDistribution_MetaData[] = {
		{ "Category", "Parameters" },
		{ "DisplayName", "Ribbon Width" },
		{ "EditCondition", "bWriteRibbonWidth" },
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_InitializeParticle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialPosition_MetaData[] = {
		{ "Category", "Parameters" },
		{ "DisableCurveDistribution", "" },
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_InitializeParticle.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LifetimeDistribution;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ColorDistribution;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MassDistribution;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpriteSizeDistribution;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpriteRotationDistribution;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MeshScaleDistribution;
	static void NewProp_bWriteRibbonWidth_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteRibbonWidth;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RibbonWidthDistribution;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InitialPosition;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraStatelessModule_InitializeParticle>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraStatelessModule_InitializeParticle_Statics::NewProp_LifetimeDistribution = { "LifetimeDistribution", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraStatelessModule_InitializeParticle, LifetimeDistribution), Z_Construct_UScriptStruct_FNiagaraDistributionRangeFloat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LifetimeDistribution_MetaData), NewProp_LifetimeDistribution_MetaData) }; // 1814083401
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraStatelessModule_InitializeParticle_Statics::NewProp_ColorDistribution = { "ColorDistribution", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraStatelessModule_InitializeParticle, ColorDistribution), Z_Construct_UScriptStruct_FNiagaraDistributionRangeColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorDistribution_MetaData), NewProp_ColorDistribution_MetaData) }; // 3721855970
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraStatelessModule_InitializeParticle_Statics::NewProp_MassDistribution = { "MassDistribution", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraStatelessModule_InitializeParticle, MassDistribution), Z_Construct_UScriptStruct_FNiagaraDistributionRangeFloat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MassDistribution_MetaData), NewProp_MassDistribution_MetaData) }; // 1814083401
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraStatelessModule_InitializeParticle_Statics::NewProp_SpriteSizeDistribution = { "SpriteSizeDistribution", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraStatelessModule_InitializeParticle, SpriteSizeDistribution), Z_Construct_UScriptStruct_FNiagaraDistributionRangeVector2, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpriteSizeDistribution_MetaData), NewProp_SpriteSizeDistribution_MetaData) }; // 1029937019
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraStatelessModule_InitializeParticle_Statics::NewProp_SpriteRotationDistribution = { "SpriteRotationDistribution", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraStatelessModule_InitializeParticle, SpriteRotationDistribution), Z_Construct_UScriptStruct_FNiagaraDistributionRangeFloat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpriteRotationDistribution_MetaData), NewProp_SpriteRotationDistribution_MetaData) }; // 1814083401
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraStatelessModule_InitializeParticle_Statics::NewProp_MeshScaleDistribution = { "MeshScaleDistribution", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraStatelessModule_InitializeParticle, MeshScaleDistribution), Z_Construct_UScriptStruct_FNiagaraDistributionRangeVector3, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshScaleDistribution_MetaData), NewProp_MeshScaleDistribution_MetaData) }; // 196473061
void Z_Construct_UClass_UNiagaraStatelessModule_InitializeParticle_Statics::NewProp_bWriteRibbonWidth_SetBit(void* Obj)
{
	((UNiagaraStatelessModule_InitializeParticle*)Obj)->bWriteRibbonWidth = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraStatelessModule_InitializeParticle_Statics::NewProp_bWriteRibbonWidth = { "bWriteRibbonWidth", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNiagaraStatelessModule_InitializeParticle), &Z_Construct_UClass_UNiagaraStatelessModule_InitializeParticle_Statics::NewProp_bWriteRibbonWidth_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteRibbonWidth_MetaData), NewProp_bWriteRibbonWidth_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraStatelessModule_InitializeParticle_Statics::NewProp_RibbonWidthDistribution = { "RibbonWidthDistribution", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraStatelessModule_InitializeParticle, RibbonWidthDistribution), Z_Construct_UScriptStruct_FNiagaraDistributionRangeFloat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RibbonWidthDistribution_MetaData), NewProp_RibbonWidthDistribution_MetaData) }; // 1814083401
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraStatelessModule_InitializeParticle_Statics::NewProp_InitialPosition = { "InitialPosition", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraStatelessModule_InitializeParticle, InitialPosition), Z_Construct_UScriptStruct_FNiagaraDistributionVector3, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialPosition_MetaData), NewProp_InitialPosition_MetaData) }; // 274836187
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraStatelessModule_InitializeParticle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStatelessModule_InitializeParticle_Statics::NewProp_LifetimeDistribution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStatelessModule_InitializeParticle_Statics::NewProp_ColorDistribution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStatelessModule_InitializeParticle_Statics::NewProp_MassDistribution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStatelessModule_InitializeParticle_Statics::NewProp_SpriteSizeDistribution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStatelessModule_InitializeParticle_Statics::NewProp_SpriteRotationDistribution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStatelessModule_InitializeParticle_Statics::NewProp_MeshScaleDistribution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStatelessModule_InitializeParticle_Statics::NewProp_bWriteRibbonWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStatelessModule_InitializeParticle_Statics::NewProp_RibbonWidthDistribution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStatelessModule_InitializeParticle_Statics::NewProp_InitialPosition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStatelessModule_InitializeParticle_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNiagaraStatelessModule_InitializeParticle_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNiagaraStatelessModule,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStatelessModule_InitializeParticle_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraStatelessModule_InitializeParticle_Statics::ClassParams = {
	&UNiagaraStatelessModule_InitializeParticle::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNiagaraStatelessModule_InitializeParticle_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStatelessModule_InitializeParticle_Statics::PropPointers),
	0,
	0x000810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStatelessModule_InitializeParticle_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraStatelessModule_InitializeParticle_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNiagaraStatelessModule_InitializeParticle()
{
	if (!Z_Registration_Info_UClass_UNiagaraStatelessModule_InitializeParticle.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraStatelessModule_InitializeParticle.OuterSingleton, Z_Construct_UClass_UNiagaraStatelessModule_InitializeParticle_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNiagaraStatelessModule_InitializeParticle.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<UNiagaraStatelessModule_InitializeParticle>()
{
	return UNiagaraStatelessModule_InitializeParticle::StaticClass();
}
UNiagaraStatelessModule_InitializeParticle::UNiagaraStatelessModule_InitializeParticle() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraStatelessModule_InitializeParticle);
UNiagaraStatelessModule_InitializeParticle::~UNiagaraStatelessModule_InitializeParticle() {}
// End Class UNiagaraStatelessModule_InitializeParticle

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_InitializeParticle_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraStatelessModule_InitializeParticle, UNiagaraStatelessModule_InitializeParticle::StaticClass, TEXT("UNiagaraStatelessModule_InitializeParticle"), &Z_Registration_Info_UClass_UNiagaraStatelessModule_InitializeParticle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraStatelessModule_InitializeParticle), 732382815U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_InitializeParticle_h_1683823302(TEXT("/Script/Niagara"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_InitializeParticle_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_InitializeParticle_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
