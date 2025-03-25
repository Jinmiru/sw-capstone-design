// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LocationServicesBPLibrary/Classes/LocationServicesImpl.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLocationServicesImpl() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
LOCATIONSERVICESBPLIBRARY_API UClass* Z_Construct_UClass_ULocationServicesImpl();
LOCATIONSERVICESBPLIBRARY_API UClass* Z_Construct_UClass_ULocationServicesImpl_NoRegister();
LOCATIONSERVICESBPLIBRARY_API UFunction* Z_Construct_UDelegateFunction_LocationServicesBPLibrary_LocationServicesData_OnLocationChanged__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_LocationServicesBPLibrary();
// End Cross Module References

// Begin Class ULocationServicesImpl
void ULocationServicesImpl::StaticRegisterNativesULocationServicesImpl()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULocationServicesImpl);
UClass* Z_Construct_UClass_ULocationServicesImpl_NoRegister()
{
	return ULocationServicesImpl::StaticClass();
}
struct Z_Construct_UClass_ULocationServicesImpl_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "LocationServicesImpl.h" },
		{ "ModuleRelativePath", "Classes/LocationServicesImpl.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnLocationChanged_MetaData[] = {
		{ "Category", "Services|Mobile|Location" },
		{ "ModuleRelativePath", "Classes/LocationServicesImpl.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLocationChanged;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULocationServicesImpl>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULocationServicesImpl_Statics::NewProp_OnLocationChanged = { "OnLocationChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULocationServicesImpl, OnLocationChanged), Z_Construct_UDelegateFunction_LocationServicesBPLibrary_LocationServicesData_OnLocationChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnLocationChanged_MetaData), NewProp_OnLocationChanged_MetaData) }; // 981247777
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULocationServicesImpl_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocationServicesImpl_Statics::NewProp_OnLocationChanged,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULocationServicesImpl_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULocationServicesImpl_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_LocationServicesBPLibrary,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULocationServicesImpl_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULocationServicesImpl_Statics::ClassParams = {
	&ULocationServicesImpl::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULocationServicesImpl_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULocationServicesImpl_Statics::PropPointers),
	0,
	0x008000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULocationServicesImpl_Statics::Class_MetaDataParams), Z_Construct_UClass_ULocationServicesImpl_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULocationServicesImpl()
{
	if (!Z_Registration_Info_UClass_ULocationServicesImpl.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULocationServicesImpl.OuterSingleton, Z_Construct_UClass_ULocationServicesImpl_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULocationServicesImpl.OuterSingleton;
}
template<> LOCATIONSERVICESBPLIBRARY_API UClass* StaticClass<ULocationServicesImpl>()
{
	return ULocationServicesImpl::StaticClass();
}
ULocationServicesImpl::ULocationServicesImpl(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULocationServicesImpl);
ULocationServicesImpl::~ULocationServicesImpl() {}
// End Class ULocationServicesImpl

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_LocationServicesBPLibrary_Source_LocationServicesBPLibrary_Classes_LocationServicesImpl_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULocationServicesImpl, ULocationServicesImpl::StaticClass, TEXT("ULocationServicesImpl"), &Z_Registration_Info_UClass_ULocationServicesImpl, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULocationServicesImpl), 4173167721U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_LocationServicesBPLibrary_Source_LocationServicesBPLibrary_Classes_LocationServicesImpl_h_1431159419(TEXT("/Script/LocationServicesBPLibrary"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_LocationServicesBPLibrary_Source_LocationServicesBPLibrary_Classes_LocationServicesImpl_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_LocationServicesBPLibrary_Source_LocationServicesBPLibrary_Classes_LocationServicesImpl_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
