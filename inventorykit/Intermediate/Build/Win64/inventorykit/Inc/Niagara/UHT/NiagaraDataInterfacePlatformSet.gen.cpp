// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Classes/NiagaraDataInterfacePlatformSet.h"
#include "Niagara/Classes/NiagaraPlatformSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfacePlatformSet() {}

// Begin Cross Module References
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterface();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfacePlatformSet();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfacePlatformSet_NoRegister();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraPlatformSet();
UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

// Begin Class UNiagaraDataInterfacePlatformSet
void UNiagaraDataInterfacePlatformSet::StaticRegisterNativesUNiagaraDataInterfacePlatformSet()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDataInterfacePlatformSet);
UClass* Z_Construct_UClass_UNiagaraDataInterfacePlatformSet_NoRegister()
{
	return UNiagaraDataInterfacePlatformSet::StaticClass();
}
struct Z_Construct_UClass_UNiagaraDataInterfacePlatformSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Scalability" },
		{ "Comment", "/** Data Interface allowing querying of the current platform set. */" },
		{ "DisplayName", "Platform Set" },
		{ "IncludePath", "NiagaraDataInterfacePlatformSet.h" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfacePlatformSet.h" },
		{ "ToolTip", "Data Interface allowing querying of the current platform set." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Platforms_MetaData[] = {
		{ "Category", "Platform Set" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfacePlatformSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Platforms;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfacePlatformSet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataInterfacePlatformSet_Statics::NewProp_Platforms = { "Platforms", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfacePlatformSet, Platforms), Z_Construct_UScriptStruct_FNiagaraPlatformSet, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Platforms_MetaData), NewProp_Platforms_MetaData) }; // 1338504544
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataInterfacePlatformSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfacePlatformSet_Statics::NewProp_Platforms,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfacePlatformSet_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNiagaraDataInterfacePlatformSet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfacePlatformSet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfacePlatformSet_Statics::ClassParams = {
	&UNiagaraDataInterfacePlatformSet::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNiagaraDataInterfacePlatformSet_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfacePlatformSet_Statics::PropPointers),
	0,
	0x000830A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfacePlatformSet_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraDataInterfacePlatformSet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNiagaraDataInterfacePlatformSet()
{
	if (!Z_Registration_Info_UClass_UNiagaraDataInterfacePlatformSet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataInterfacePlatformSet.OuterSingleton, Z_Construct_UClass_UNiagaraDataInterfacePlatformSet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNiagaraDataInterfacePlatformSet.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<UNiagaraDataInterfacePlatformSet>()
{
	return UNiagaraDataInterfacePlatformSet::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfacePlatformSet);
UNiagaraDataInterfacePlatformSet::~UNiagaraDataInterfacePlatformSet() {}
// End Class UNiagaraDataInterfacePlatformSet

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfacePlatformSet_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraDataInterfacePlatformSet, UNiagaraDataInterfacePlatformSet::StaticClass, TEXT("UNiagaraDataInterfacePlatformSet"), &Z_Registration_Info_UClass_UNiagaraDataInterfacePlatformSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataInterfacePlatformSet), 2729839466U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfacePlatformSet_h_1651365620(TEXT("/Script/Niagara"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfacePlatformSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfacePlatformSet_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
