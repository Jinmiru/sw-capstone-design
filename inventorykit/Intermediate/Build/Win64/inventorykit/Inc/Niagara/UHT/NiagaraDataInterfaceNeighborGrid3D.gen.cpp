// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Classes/NiagaraDataInterfaceNeighborGrid3D.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceNeighborGrid3D() {}

// Begin Cross Module References
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceGrid3D();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceNeighborGrid3D();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceNeighborGrid3D_NoRegister();
UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

// Begin Class UNiagaraDataInterfaceNeighborGrid3D
void UNiagaraDataInterfaceNeighborGrid3D::StaticRegisterNativesUNiagaraDataInterfaceNeighborGrid3D()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDataInterfaceNeighborGrid3D);
UClass* Z_Construct_UClass_UNiagaraDataInterfaceNeighborGrid3D_NoRegister()
{
	return UNiagaraDataInterfaceNeighborGrid3D::StaticClass();
}
struct Z_Construct_UClass_UNiagaraDataInterfaceNeighborGrid3D_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "DisplayName", "Neighbor Grid3D" },
		{ "IncludePath", "NiagaraDataInterfaceNeighborGrid3D.h" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceNeighborGrid3D.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxNeighborsPerCell_MetaData[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceNeighborGrid3D.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_MaxNeighborsPerCell;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfaceNeighborGrid3D>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UNiagaraDataInterfaceNeighborGrid3D_Statics::NewProp_MaxNeighborsPerCell = { "MaxNeighborsPerCell", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceNeighborGrid3D, MaxNeighborsPerCell), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxNeighborsPerCell_MetaData), NewProp_MaxNeighborsPerCell_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataInterfaceNeighborGrid3D_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceNeighborGrid3D_Statics::NewProp_MaxNeighborsPerCell,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceNeighborGrid3D_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNiagaraDataInterfaceNeighborGrid3D_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterfaceGrid3D,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceNeighborGrid3D_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfaceNeighborGrid3D_Statics::ClassParams = {
	&UNiagaraDataInterfaceNeighborGrid3D::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNiagaraDataInterfaceNeighborGrid3D_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceNeighborGrid3D_Statics::PropPointers),
	0,
	0x000830A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceNeighborGrid3D_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraDataInterfaceNeighborGrid3D_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNiagaraDataInterfaceNeighborGrid3D()
{
	if (!Z_Registration_Info_UClass_UNiagaraDataInterfaceNeighborGrid3D.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataInterfaceNeighborGrid3D.OuterSingleton, Z_Construct_UClass_UNiagaraDataInterfaceNeighborGrid3D_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNiagaraDataInterfaceNeighborGrid3D.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<UNiagaraDataInterfaceNeighborGrid3D>()
{
	return UNiagaraDataInterfaceNeighborGrid3D::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfaceNeighborGrid3D);
UNiagaraDataInterfaceNeighborGrid3D::~UNiagaraDataInterfaceNeighborGrid3D() {}
// End Class UNiagaraDataInterfaceNeighborGrid3D

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceNeighborGrid3D_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraDataInterfaceNeighborGrid3D, UNiagaraDataInterfaceNeighborGrid3D::StaticClass, TEXT("UNiagaraDataInterfaceNeighborGrid3D"), &Z_Registration_Info_UClass_UNiagaraDataInterfaceNeighborGrid3D, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataInterfaceNeighborGrid3D), 3515965621U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceNeighborGrid3D_h_3736995821(TEXT("/Script/Niagara"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceNeighborGrid3D_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceNeighborGrid3D_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
