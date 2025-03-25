// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Private/DataInterface/NiagaraDataInterfaceConsoleVariable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceConsoleVariable() {}

// Begin Cross Module References
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterface();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceConsoleVariable();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceConsoleVariable_NoRegister();
UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

// Begin Class UNiagaraDataInterfaceConsoleVariable
void UNiagaraDataInterfaceConsoleVariable::StaticRegisterNativesUNiagaraDataInterfaceConsoleVariable()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDataInterfaceConsoleVariable);
UClass* Z_Construct_UClass_UNiagaraDataInterfaceConsoleVariable_NoRegister()
{
	return UNiagaraDataInterfaceConsoleVariable::StaticClass();
}
struct Z_Construct_UClass_UNiagaraDataInterfaceConsoleVariable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "DataInterface" },
		{ "Comment", "/** Data interface to read console variables. */" },
		{ "DisplayName", "Console Variable" },
		{ "IncludePath", "DataInterface/NiagaraDataInterfaceConsoleVariable.h" },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceConsoleVariable.h" },
		{ "ToolTip", "Data interface to read console variables." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfaceConsoleVariable>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNiagaraDataInterfaceConsoleVariable_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceConsoleVariable_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfaceConsoleVariable_Statics::ClassParams = {
	&UNiagaraDataInterfaceConsoleVariable::StaticClass,
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
	0x000030A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceConsoleVariable_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraDataInterfaceConsoleVariable_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNiagaraDataInterfaceConsoleVariable()
{
	if (!Z_Registration_Info_UClass_UNiagaraDataInterfaceConsoleVariable.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataInterfaceConsoleVariable.OuterSingleton, Z_Construct_UClass_UNiagaraDataInterfaceConsoleVariable_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNiagaraDataInterfaceConsoleVariable.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<UNiagaraDataInterfaceConsoleVariable>()
{
	return UNiagaraDataInterfaceConsoleVariable::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfaceConsoleVariable);
UNiagaraDataInterfaceConsoleVariable::~UNiagaraDataInterfaceConsoleVariable() {}
// End Class UNiagaraDataInterfaceConsoleVariable

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceConsoleVariable_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraDataInterfaceConsoleVariable, UNiagaraDataInterfaceConsoleVariable::StaticClass, TEXT("UNiagaraDataInterfaceConsoleVariable"), &Z_Registration_Info_UClass_UNiagaraDataInterfaceConsoleVariable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataInterfaceConsoleVariable), 3937347495U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceConsoleVariable_h_2755073756(TEXT("/Script/Niagara"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceConsoleVariable_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceConsoleVariable_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
