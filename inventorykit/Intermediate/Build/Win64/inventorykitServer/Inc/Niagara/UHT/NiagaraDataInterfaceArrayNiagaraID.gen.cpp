// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Classes/NiagaraDataInterfaceArrayNiagaraID.h"
#include "Niagara/Public/NiagaraTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceArrayNiagaraID() {}

// Begin Cross Module References
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceArray();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceArrayNiagaraID();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceArrayNiagaraID_NoRegister();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraID();
UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

// Begin Class UNiagaraDataInterfaceArrayNiagaraID
void UNiagaraDataInterfaceArrayNiagaraID::StaticRegisterNativesUNiagaraDataInterfaceArrayNiagaraID()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDataInterfaceArrayNiagaraID);
UClass* Z_Construct_UClass_UNiagaraDataInterfaceArrayNiagaraID_NoRegister()
{
	return UNiagaraDataInterfaceArrayNiagaraID::StaticClass();
}
struct Z_Construct_UClass_UNiagaraDataInterfaceArrayNiagaraID_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Array" },
		{ "DisplayName", "NiagaraID Array" },
		{ "Experimental", "" },
		{ "IncludePath", "NiagaraDataInterfaceArrayNiagaraID.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceArrayNiagaraID.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntData_MetaData[] = {
		{ "Category", "Array" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceArrayNiagaraID.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_IntData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_IntData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfaceArrayNiagaraID>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceArrayNiagaraID_Statics::NewProp_IntData_Inner = { "IntData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNiagaraID, METADATA_PARAMS(0, nullptr) }; // 978329198
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceArrayNiagaraID_Statics::NewProp_IntData = { "IntData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceArrayNiagaraID, IntData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntData_MetaData), NewProp_IntData_MetaData) }; // 978329198
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataInterfaceArrayNiagaraID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceArrayNiagaraID_Statics::NewProp_IntData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceArrayNiagaraID_Statics::NewProp_IntData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceArrayNiagaraID_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNiagaraDataInterfaceArrayNiagaraID_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterfaceArray,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceArrayNiagaraID_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfaceArrayNiagaraID_Statics::ClassParams = {
	&UNiagaraDataInterfaceArrayNiagaraID::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNiagaraDataInterfaceArrayNiagaraID_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceArrayNiagaraID_Statics::PropPointers),
	0,
	0x000810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceArrayNiagaraID_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraDataInterfaceArrayNiagaraID_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNiagaraDataInterfaceArrayNiagaraID()
{
	if (!Z_Registration_Info_UClass_UNiagaraDataInterfaceArrayNiagaraID.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataInterfaceArrayNiagaraID.OuterSingleton, Z_Construct_UClass_UNiagaraDataInterfaceArrayNiagaraID_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNiagaraDataInterfaceArrayNiagaraID.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<UNiagaraDataInterfaceArrayNiagaraID>()
{
	return UNiagaraDataInterfaceArrayNiagaraID::StaticClass();
}
UNiagaraDataInterfaceArrayNiagaraID::UNiagaraDataInterfaceArrayNiagaraID() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfaceArrayNiagaraID);
UNiagaraDataInterfaceArrayNiagaraID::~UNiagaraDataInterfaceArrayNiagaraID() {}
// End Class UNiagaraDataInterfaceArrayNiagaraID

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceArrayNiagaraID_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraDataInterfaceArrayNiagaraID, UNiagaraDataInterfaceArrayNiagaraID::StaticClass, TEXT("UNiagaraDataInterfaceArrayNiagaraID"), &Z_Registration_Info_UClass_UNiagaraDataInterfaceArrayNiagaraID, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataInterfaceArrayNiagaraID), 2658503938U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceArrayNiagaraID_h_2644815918(TEXT("/Script/Niagara"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceArrayNiagaraID_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceArrayNiagaraID_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
