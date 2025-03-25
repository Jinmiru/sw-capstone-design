// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/TypedElementFramework/Public/Elements/Interfaces/TypedElementDataStorageCompatibilityInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTypedElementDataStorageCompatibilityInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
TYPEDELEMENTFRAMEWORK_API UClass* Z_Construct_UClass_UTypedElementDataStorageCompatibilityInterface();
TYPEDELEMENTFRAMEWORK_API UClass* Z_Construct_UClass_UTypedElementDataStorageCompatibilityInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_TypedElementFramework();
// End Cross Module References

// Begin Interface UTypedElementDataStorageCompatibilityInterface
void UTypedElementDataStorageCompatibilityInterface::StaticRegisterNativesUTypedElementDataStorageCompatibilityInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTypedElementDataStorageCompatibilityInterface);
UClass* Z_Construct_UClass_UTypedElementDataStorageCompatibilityInterface_NoRegister()
{
	return UTypedElementDataStorageCompatibilityInterface::StaticClass();
}
struct Z_Construct_UClass_UTypedElementDataStorageCompatibilityInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Elements/Interfaces/TypedElementDataStorageCompatibilityInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ITypedElementDataStorageCompatibilityInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UTypedElementDataStorageCompatibilityInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_TypedElementFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTypedElementDataStorageCompatibilityInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTypedElementDataStorageCompatibilityInterface_Statics::ClassParams = {
	&UTypedElementDataStorageCompatibilityInterface::StaticClass,
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
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTypedElementDataStorageCompatibilityInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UTypedElementDataStorageCompatibilityInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTypedElementDataStorageCompatibilityInterface()
{
	if (!Z_Registration_Info_UClass_UTypedElementDataStorageCompatibilityInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTypedElementDataStorageCompatibilityInterface.OuterSingleton, Z_Construct_UClass_UTypedElementDataStorageCompatibilityInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTypedElementDataStorageCompatibilityInterface.OuterSingleton;
}
template<> TYPEDELEMENTFRAMEWORK_API UClass* StaticClass<UTypedElementDataStorageCompatibilityInterface>()
{
	return UTypedElementDataStorageCompatibilityInterface::StaticClass();
}
UTypedElementDataStorageCompatibilityInterface::UTypedElementDataStorageCompatibilityInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTypedElementDataStorageCompatibilityInterface);
UTypedElementDataStorageCompatibilityInterface::~UTypedElementDataStorageCompatibilityInterface() {}
// End Interface UTypedElementDataStorageCompatibilityInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Interfaces_TypedElementDataStorageCompatibilityInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTypedElementDataStorageCompatibilityInterface, UTypedElementDataStorageCompatibilityInterface::StaticClass, TEXT("UTypedElementDataStorageCompatibilityInterface"), &Z_Registration_Info_UClass_UTypedElementDataStorageCompatibilityInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTypedElementDataStorageCompatibilityInterface), 4169188124U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Interfaces_TypedElementDataStorageCompatibilityInterface_h_3581991732(TEXT("/Script/TypedElementFramework"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Interfaces_TypedElementDataStorageCompatibilityInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Interfaces_TypedElementDataStorageCompatibilityInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
