// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Classes/NiagaraDataInterfaceCollisionQuery.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceCollisionQuery() {}

// Begin Cross Module References
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterface();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceCollisionQuery();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceCollisionQuery_NoRegister();
UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

// Begin Class UNiagaraDataInterfaceCollisionQuery
void UNiagaraDataInterfaceCollisionQuery::StaticRegisterNativesUNiagaraDataInterfaceCollisionQuery()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDataInterfaceCollisionQuery);
UClass* Z_Construct_UClass_UNiagaraDataInterfaceCollisionQuery_NoRegister()
{
	return UNiagaraDataInterfaceCollisionQuery::StaticClass();
}
struct Z_Construct_UClass_UNiagaraDataInterfaceCollisionQuery_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Collision" },
		{ "Comment", "/** Data Interface that can be used to query collision related data, like geometry traces or sampling the depth buffer. */" },
		{ "DisplayName", "Collision Query" },
		{ "IncludePath", "NiagaraDataInterfaceCollisionQuery.h" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceCollisionQuery.h" },
		{ "ToolTip", "Data Interface that can be used to query collision related data, like geometry traces or sampling the depth buffer." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfaceCollisionQuery>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNiagaraDataInterfaceCollisionQuery_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceCollisionQuery_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfaceCollisionQuery_Statics::ClassParams = {
	&UNiagaraDataInterfaceCollisionQuery::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceCollisionQuery_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraDataInterfaceCollisionQuery_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNiagaraDataInterfaceCollisionQuery()
{
	if (!Z_Registration_Info_UClass_UNiagaraDataInterfaceCollisionQuery.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataInterfaceCollisionQuery.OuterSingleton, Z_Construct_UClass_UNiagaraDataInterfaceCollisionQuery_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNiagaraDataInterfaceCollisionQuery.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<UNiagaraDataInterfaceCollisionQuery>()
{
	return UNiagaraDataInterfaceCollisionQuery::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfaceCollisionQuery);
UNiagaraDataInterfaceCollisionQuery::~UNiagaraDataInterfaceCollisionQuery() {}
// End Class UNiagaraDataInterfaceCollisionQuery

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceCollisionQuery_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraDataInterfaceCollisionQuery, UNiagaraDataInterfaceCollisionQuery::StaticClass, TEXT("UNiagaraDataInterfaceCollisionQuery"), &Z_Registration_Info_UClass_UNiagaraDataInterfaceCollisionQuery, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataInterfaceCollisionQuery), 244609179U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceCollisionQuery_h_3476480190(TEXT("/Script/Niagara"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceCollisionQuery_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceCollisionQuery_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
