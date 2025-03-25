// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChaosNiagara/Public/NiagaraDataInterfaceGeometryCollection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceGeometryCollection() {}

// Begin Cross Module References
CHAOSNIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceGeometryCollection();
CHAOSNIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceGeometryCollection_NoRegister();
GEOMETRYCOLLECTIONENGINE_API UClass* Z_Construct_UClass_AGeometryCollectionActor_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterface();
UPackage* Z_Construct_UPackage__Script_ChaosNiagara();
// End Cross Module References

// Begin Class UNiagaraDataInterfaceGeometryCollection
void UNiagaraDataInterfaceGeometryCollection::StaticRegisterNativesUNiagaraDataInterfaceGeometryCollection()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDataInterfaceGeometryCollection);
UClass* Z_Construct_UClass_UNiagaraDataInterfaceGeometryCollection_NoRegister()
{
	return UNiagaraDataInterfaceGeometryCollection::StaticClass();
}
struct Z_Construct_UClass_UNiagaraDataInterfaceGeometryCollection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Collision" },
		{ "Comment", "/** Data Interface for the Collisions */" },
		{ "DisplayName", "Geometry Collection" },
		{ "IncludePath", "NiagaraDataInterfaceGeometryCollection.h" },
		{ "ModuleRelativePath", "Public/NiagaraDataInterfaceGeometryCollection.h" },
		{ "ToolTip", "Data Interface for the Collisions" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeometryCollectionActor_MetaData[] = {
		{ "Category", "Geometry Collection" },
		{ "ModuleRelativePath", "Public/NiagaraDataInterfaceGeometryCollection.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GeometryCollectionActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfaceGeometryCollection>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceGeometryCollection_Statics::NewProp_GeometryCollectionActor = { "GeometryCollectionActor", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceGeometryCollection, GeometryCollectionActor), Z_Construct_UClass_AGeometryCollectionActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeometryCollectionActor_MetaData), NewProp_GeometryCollectionActor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataInterfaceGeometryCollection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceGeometryCollection_Statics::NewProp_GeometryCollectionActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceGeometryCollection_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNiagaraDataInterfaceGeometryCollection_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_ChaosNiagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceGeometryCollection_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfaceGeometryCollection_Statics::ClassParams = {
	&UNiagaraDataInterfaceGeometryCollection::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNiagaraDataInterfaceGeometryCollection_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceGeometryCollection_Statics::PropPointers),
	0,
	0x000010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceGeometryCollection_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraDataInterfaceGeometryCollection_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNiagaraDataInterfaceGeometryCollection()
{
	if (!Z_Registration_Info_UClass_UNiagaraDataInterfaceGeometryCollection.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataInterfaceGeometryCollection.OuterSingleton, Z_Construct_UClass_UNiagaraDataInterfaceGeometryCollection_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNiagaraDataInterfaceGeometryCollection.OuterSingleton;
}
template<> CHAOSNIAGARA_API UClass* StaticClass<UNiagaraDataInterfaceGeometryCollection>()
{
	return UNiagaraDataInterfaceGeometryCollection::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfaceGeometryCollection);
UNiagaraDataInterfaceGeometryCollection::~UNiagaraDataInterfaceGeometryCollection() {}
// End Class UNiagaraDataInterfaceGeometryCollection

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosNiagara_Source_ChaosNiagara_Public_NiagaraDataInterfaceGeometryCollection_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraDataInterfaceGeometryCollection, UNiagaraDataInterfaceGeometryCollection::StaticClass, TEXT("UNiagaraDataInterfaceGeometryCollection"), &Z_Registration_Info_UClass_UNiagaraDataInterfaceGeometryCollection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataInterfaceGeometryCollection), 2511102454U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosNiagara_Source_ChaosNiagara_Public_NiagaraDataInterfaceGeometryCollection_h_3989829607(TEXT("/Script/ChaosNiagara"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosNiagara_Source_ChaosNiagara_Public_NiagaraDataInterfaceGeometryCollection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosNiagara_Source_ChaosNiagara_Public_NiagaraDataInterfaceGeometryCollection_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
