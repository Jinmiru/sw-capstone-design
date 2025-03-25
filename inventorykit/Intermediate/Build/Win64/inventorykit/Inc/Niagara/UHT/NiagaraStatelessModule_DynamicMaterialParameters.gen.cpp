// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Internal/Stateless/Modules/NiagaraStatelessModule_DynamicMaterialParameters.h"
#include "Niagara/Internal/Stateless/NiagaraStatelessDistribution.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraStatelessModule_DynamicMaterialParameters() {}

// Begin Cross Module References
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraStatelessModule();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraStatelessModule_DynamicMaterialParameters();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraStatelessModule_DynamicMaterialParameters_NoRegister();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDistributionFloat();
UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

// Begin Class UNiagaraStatelessModule_DynamicMaterialParameters
void UNiagaraStatelessModule_DynamicMaterialParameters::StaticRegisterNativesUNiagaraStatelessModule_DynamicMaterialParameters()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraStatelessModule_DynamicMaterialParameters);
UClass* Z_Construct_UClass_UNiagaraStatelessModule_DynamicMaterialParameters_NoRegister()
{
	return UNiagaraStatelessModule_DynamicMaterialParameters::StaticClass();
}
struct Z_Construct_UClass_UNiagaraStatelessModule_DynamicMaterialParameters_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Dynamic Material Parameters" },
		{ "IncludePath", "Stateless/Modules/NiagaraStatelessModule_DynamicMaterialParameters.h" },
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_DynamicMaterialParameters.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bParameter0XEnabled_MetaData[] = {
		{ "Category", "Parameters" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_DynamicMaterialParameters.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bParameter0YEnabled_MetaData[] = {
		{ "Category", "Parameters" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_DynamicMaterialParameters.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bParameter0ZEnabled_MetaData[] = {
		{ "Category", "Parameters" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_DynamicMaterialParameters.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bParameter0WEnabled_MetaData[] = {
		{ "Category", "Parameters" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_DynamicMaterialParameters.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parameter0XDistribution_MetaData[] = {
		{ "Category", "Parameters" },
		{ "DisplayName", "Parameter0.X" },
		{ "EditCondition", "bParameter0XEnabled" },
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_DynamicMaterialParameters.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parameter0YDistribution_MetaData[] = {
		{ "Category", "Parameters" },
		{ "DisplayName", "Parameter0.Y" },
		{ "EditCondition", "bParameter0YEnabled" },
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_DynamicMaterialParameters.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parameter0ZDistribution_MetaData[] = {
		{ "Category", "Parameters" },
		{ "DisplayName", "Parameter0.Z" },
		{ "EditCondition", "bParameter0ZEnabled" },
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_DynamicMaterialParameters.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parameter0WDistribution_MetaData[] = {
		{ "Category", "Parameters" },
		{ "DisplayName", "Parameter0.W" },
		{ "EditCondition", "bParameter0WEnabled" },
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_DynamicMaterialParameters.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bParameter0XEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bParameter0XEnabled;
	static void NewProp_bParameter0YEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bParameter0YEnabled;
	static void NewProp_bParameter0ZEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bParameter0ZEnabled;
	static void NewProp_bParameter0WEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bParameter0WEnabled;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Parameter0XDistribution;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Parameter0YDistribution;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Parameter0ZDistribution;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Parameter0WDistribution;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraStatelessModule_DynamicMaterialParameters>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UNiagaraStatelessModule_DynamicMaterialParameters_Statics::NewProp_bParameter0XEnabled_SetBit(void* Obj)
{
	((UNiagaraStatelessModule_DynamicMaterialParameters*)Obj)->bParameter0XEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraStatelessModule_DynamicMaterialParameters_Statics::NewProp_bParameter0XEnabled = { "bParameter0XEnabled", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UNiagaraStatelessModule_DynamicMaterialParameters), &Z_Construct_UClass_UNiagaraStatelessModule_DynamicMaterialParameters_Statics::NewProp_bParameter0XEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bParameter0XEnabled_MetaData), NewProp_bParameter0XEnabled_MetaData) };
void Z_Construct_UClass_UNiagaraStatelessModule_DynamicMaterialParameters_Statics::NewProp_bParameter0YEnabled_SetBit(void* Obj)
{
	((UNiagaraStatelessModule_DynamicMaterialParameters*)Obj)->bParameter0YEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraStatelessModule_DynamicMaterialParameters_Statics::NewProp_bParameter0YEnabled = { "bParameter0YEnabled", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UNiagaraStatelessModule_DynamicMaterialParameters), &Z_Construct_UClass_UNiagaraStatelessModule_DynamicMaterialParameters_Statics::NewProp_bParameter0YEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bParameter0YEnabled_MetaData), NewProp_bParameter0YEnabled_MetaData) };
void Z_Construct_UClass_UNiagaraStatelessModule_DynamicMaterialParameters_Statics::NewProp_bParameter0ZEnabled_SetBit(void* Obj)
{
	((UNiagaraStatelessModule_DynamicMaterialParameters*)Obj)->bParameter0ZEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraStatelessModule_DynamicMaterialParameters_Statics::NewProp_bParameter0ZEnabled = { "bParameter0ZEnabled", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UNiagaraStatelessModule_DynamicMaterialParameters), &Z_Construct_UClass_UNiagaraStatelessModule_DynamicMaterialParameters_Statics::NewProp_bParameter0ZEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bParameter0ZEnabled_MetaData), NewProp_bParameter0ZEnabled_MetaData) };
void Z_Construct_UClass_UNiagaraStatelessModule_DynamicMaterialParameters_Statics::NewProp_bParameter0WEnabled_SetBit(void* Obj)
{
	((UNiagaraStatelessModule_DynamicMaterialParameters*)Obj)->bParameter0WEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraStatelessModule_DynamicMaterialParameters_Statics::NewProp_bParameter0WEnabled = { "bParameter0WEnabled", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UNiagaraStatelessModule_DynamicMaterialParameters), &Z_Construct_UClass_UNiagaraStatelessModule_DynamicMaterialParameters_Statics::NewProp_bParameter0WEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bParameter0WEnabled_MetaData), NewProp_bParameter0WEnabled_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraStatelessModule_DynamicMaterialParameters_Statics::NewProp_Parameter0XDistribution = { "Parameter0XDistribution", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraStatelessModule_DynamicMaterialParameters, Parameter0XDistribution), Z_Construct_UScriptStruct_FNiagaraDistributionFloat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parameter0XDistribution_MetaData), NewProp_Parameter0XDistribution_MetaData) }; // 1780836428
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraStatelessModule_DynamicMaterialParameters_Statics::NewProp_Parameter0YDistribution = { "Parameter0YDistribution", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraStatelessModule_DynamicMaterialParameters, Parameter0YDistribution), Z_Construct_UScriptStruct_FNiagaraDistributionFloat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parameter0YDistribution_MetaData), NewProp_Parameter0YDistribution_MetaData) }; // 1780836428
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraStatelessModule_DynamicMaterialParameters_Statics::NewProp_Parameter0ZDistribution = { "Parameter0ZDistribution", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraStatelessModule_DynamicMaterialParameters, Parameter0ZDistribution), Z_Construct_UScriptStruct_FNiagaraDistributionFloat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parameter0ZDistribution_MetaData), NewProp_Parameter0ZDistribution_MetaData) }; // 1780836428
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraStatelessModule_DynamicMaterialParameters_Statics::NewProp_Parameter0WDistribution = { "Parameter0WDistribution", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraStatelessModule_DynamicMaterialParameters, Parameter0WDistribution), Z_Construct_UScriptStruct_FNiagaraDistributionFloat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parameter0WDistribution_MetaData), NewProp_Parameter0WDistribution_MetaData) }; // 1780836428
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraStatelessModule_DynamicMaterialParameters_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStatelessModule_DynamicMaterialParameters_Statics::NewProp_bParameter0XEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStatelessModule_DynamicMaterialParameters_Statics::NewProp_bParameter0YEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStatelessModule_DynamicMaterialParameters_Statics::NewProp_bParameter0ZEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStatelessModule_DynamicMaterialParameters_Statics::NewProp_bParameter0WEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStatelessModule_DynamicMaterialParameters_Statics::NewProp_Parameter0XDistribution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStatelessModule_DynamicMaterialParameters_Statics::NewProp_Parameter0YDistribution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStatelessModule_DynamicMaterialParameters_Statics::NewProp_Parameter0ZDistribution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStatelessModule_DynamicMaterialParameters_Statics::NewProp_Parameter0WDistribution,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStatelessModule_DynamicMaterialParameters_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNiagaraStatelessModule_DynamicMaterialParameters_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNiagaraStatelessModule,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStatelessModule_DynamicMaterialParameters_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraStatelessModule_DynamicMaterialParameters_Statics::ClassParams = {
	&UNiagaraStatelessModule_DynamicMaterialParameters::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNiagaraStatelessModule_DynamicMaterialParameters_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStatelessModule_DynamicMaterialParameters_Statics::PropPointers),
	0,
	0x000810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStatelessModule_DynamicMaterialParameters_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraStatelessModule_DynamicMaterialParameters_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNiagaraStatelessModule_DynamicMaterialParameters()
{
	if (!Z_Registration_Info_UClass_UNiagaraStatelessModule_DynamicMaterialParameters.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraStatelessModule_DynamicMaterialParameters.OuterSingleton, Z_Construct_UClass_UNiagaraStatelessModule_DynamicMaterialParameters_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNiagaraStatelessModule_DynamicMaterialParameters.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<UNiagaraStatelessModule_DynamicMaterialParameters>()
{
	return UNiagaraStatelessModule_DynamicMaterialParameters::StaticClass();
}
UNiagaraStatelessModule_DynamicMaterialParameters::UNiagaraStatelessModule_DynamicMaterialParameters() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraStatelessModule_DynamicMaterialParameters);
UNiagaraStatelessModule_DynamicMaterialParameters::~UNiagaraStatelessModule_DynamicMaterialParameters() {}
// End Class UNiagaraStatelessModule_DynamicMaterialParameters

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_DynamicMaterialParameters_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraStatelessModule_DynamicMaterialParameters, UNiagaraStatelessModule_DynamicMaterialParameters::StaticClass, TEXT("UNiagaraStatelessModule_DynamicMaterialParameters"), &Z_Registration_Info_UClass_UNiagaraStatelessModule_DynamicMaterialParameters, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraStatelessModule_DynamicMaterialParameters), 2142379586U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_DynamicMaterialParameters_h_3498109541(TEXT("/Script/Niagara"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_DynamicMaterialParameters_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_DynamicMaterialParameters_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
