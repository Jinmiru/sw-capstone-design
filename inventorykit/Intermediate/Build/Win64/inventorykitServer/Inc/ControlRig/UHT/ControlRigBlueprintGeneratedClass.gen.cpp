// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Public/ControlRigBlueprintGeneratedClass.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeControlRigBlueprintGeneratedClass() {}

// Begin Cross Module References
CONTROLRIG_API UClass* Z_Construct_UClass_UControlRigBlueprintGeneratedClass();
CONTROLRIG_API UClass* Z_Construct_UClass_UControlRigBlueprintGeneratedClass_NoRegister();
RIGVM_API UClass* Z_Construct_UClass_URigVMBlueprintGeneratedClass();
UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

// Begin Class UControlRigBlueprintGeneratedClass
void UControlRigBlueprintGeneratedClass::StaticRegisterNativesUControlRigBlueprintGeneratedClass()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UControlRigBlueprintGeneratedClass);
UClass* Z_Construct_UClass_UControlRigBlueprintGeneratedClass_NoRegister()
{
	return UControlRigBlueprintGeneratedClass::StaticClass();
}
struct Z_Construct_UClass_UControlRigBlueprintGeneratedClass_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ControlRigBlueprintGeneratedClass.h" },
		{ "ModuleRelativePath", "Public/ControlRigBlueprintGeneratedClass.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UControlRigBlueprintGeneratedClass>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UControlRigBlueprintGeneratedClass_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_URigVMBlueprintGeneratedClass,
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigBlueprintGeneratedClass_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UControlRigBlueprintGeneratedClass_Statics::ClassParams = {
	&UControlRigBlueprintGeneratedClass::StaticClass,
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
	0x009200A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigBlueprintGeneratedClass_Statics::Class_MetaDataParams), Z_Construct_UClass_UControlRigBlueprintGeneratedClass_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UControlRigBlueprintGeneratedClass()
{
	if (!Z_Registration_Info_UClass_UControlRigBlueprintGeneratedClass.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UControlRigBlueprintGeneratedClass.OuterSingleton, Z_Construct_UClass_UControlRigBlueprintGeneratedClass_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UControlRigBlueprintGeneratedClass.OuterSingleton;
}
template<> CONTROLRIG_API UClass* StaticClass<UControlRigBlueprintGeneratedClass>()
{
	return UControlRigBlueprintGeneratedClass::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UControlRigBlueprintGeneratedClass);
UControlRigBlueprintGeneratedClass::~UControlRigBlueprintGeneratedClass() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UControlRigBlueprintGeneratedClass)
// End Class UControlRigBlueprintGeneratedClass

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigBlueprintGeneratedClass_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UControlRigBlueprintGeneratedClass, UControlRigBlueprintGeneratedClass::StaticClass, TEXT("UControlRigBlueprintGeneratedClass"), &Z_Registration_Info_UClass_UControlRigBlueprintGeneratedClass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UControlRigBlueprintGeneratedClass), 3769443120U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigBlueprintGeneratedClass_h_3575307523(TEXT("/Script/ControlRig"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigBlueprintGeneratedClass_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigBlueprintGeneratedClass_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
