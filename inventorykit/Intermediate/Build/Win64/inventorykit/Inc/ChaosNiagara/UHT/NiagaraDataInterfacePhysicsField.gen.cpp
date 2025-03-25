// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChaosNiagara/Classes/NiagaraDataInterfacePhysicsField.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfacePhysicsField() {}

// Begin Cross Module References
CHAOSNIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfacePhysicsField();
CHAOSNIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfacePhysicsField_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterface();
UPackage* Z_Construct_UPackage__Script_ChaosNiagara();
// End Cross Module References

// Begin Class UNiagaraDataInterfacePhysicsField
void UNiagaraDataInterfacePhysicsField::StaticRegisterNativesUNiagaraDataInterfacePhysicsField()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDataInterfacePhysicsField);
UClass* Z_Construct_UClass_UNiagaraDataInterfacePhysicsField_NoRegister()
{
	return UNiagaraDataInterfacePhysicsField::StaticClass();
}
struct Z_Construct_UClass_UNiagaraDataInterfacePhysicsField_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Chaos" },
		{ "Comment", "/** Data Interface for the strand base */" },
		{ "DisplayName", "Physics Field" },
		{ "IncludePath", "NiagaraDataInterfacePhysicsField.h" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfacePhysicsField.h" },
		{ "ToolTip", "Data Interface for the strand base" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfacePhysicsField>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNiagaraDataInterfacePhysicsField_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_ChaosNiagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfacePhysicsField_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfacePhysicsField_Statics::ClassParams = {
	&UNiagaraDataInterfacePhysicsField::StaticClass,
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
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfacePhysicsField_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraDataInterfacePhysicsField_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNiagaraDataInterfacePhysicsField()
{
	if (!Z_Registration_Info_UClass_UNiagaraDataInterfacePhysicsField.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataInterfacePhysicsField.OuterSingleton, Z_Construct_UClass_UNiagaraDataInterfacePhysicsField_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNiagaraDataInterfacePhysicsField.OuterSingleton;
}
template<> CHAOSNIAGARA_API UClass* StaticClass<UNiagaraDataInterfacePhysicsField>()
{
	return UNiagaraDataInterfacePhysicsField::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfacePhysicsField);
UNiagaraDataInterfacePhysicsField::~UNiagaraDataInterfacePhysicsField() {}
// End Class UNiagaraDataInterfacePhysicsField

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosNiagara_Source_ChaosNiagara_Classes_NiagaraDataInterfacePhysicsField_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraDataInterfacePhysicsField, UNiagaraDataInterfacePhysicsField::StaticClass, TEXT("UNiagaraDataInterfacePhysicsField"), &Z_Registration_Info_UClass_UNiagaraDataInterfacePhysicsField, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataInterfacePhysicsField), 3229360932U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosNiagara_Source_ChaosNiagara_Classes_NiagaraDataInterfacePhysicsField_h_4029623999(TEXT("/Script/ChaosNiagara"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosNiagara_Source_ChaosNiagara_Classes_NiagaraDataInterfacePhysicsField_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosNiagara_Source_ChaosNiagara_Classes_NiagaraDataInterfacePhysicsField_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
