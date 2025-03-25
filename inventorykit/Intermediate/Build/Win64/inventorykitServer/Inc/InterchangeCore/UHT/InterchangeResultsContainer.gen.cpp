// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Interchange/Core/Public/InterchangeResultsContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeResultsContainer() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeResult_NoRegister();
INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeResultsContainer();
INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeResultsContainer_NoRegister();
UPackage* Z_Construct_UPackage__Script_InterchangeCore();
// End Cross Module References

// Begin Class UInterchangeResultsContainer
void UInterchangeResultsContainer::StaticRegisterNativesUInterchangeResultsContainer()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeResultsContainer);
UClass* Z_Construct_UClass_UInterchangeResultsContainer_NoRegister()
{
	return UInterchangeResultsContainer::StaticClass();
}
struct Z_Construct_UClass_UInterchangeResultsContainer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "InterchangeResultsContainer.h" },
		{ "ModuleRelativePath", "Public/InterchangeResultsContainer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Results_MetaData[] = {
		{ "ModuleRelativePath", "Public/InterchangeResultsContainer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Results_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Results;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeResultsContainer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInterchangeResultsContainer_Statics::NewProp_Results_Inner = { "Results", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInterchangeResult_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInterchangeResultsContainer_Statics::NewProp_Results = { "Results", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInterchangeResultsContainer, Results), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Results_MetaData), NewProp_Results_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterchangeResultsContainer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeResultsContainer_Statics::NewProp_Results_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeResultsContainer_Statics::NewProp_Results,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeResultsContainer_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInterchangeResultsContainer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeResultsContainer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeResultsContainer_Statics::ClassParams = {
	&UInterchangeResultsContainer::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInterchangeResultsContainer_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeResultsContainer_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeResultsContainer_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeResultsContainer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangeResultsContainer()
{
	if (!Z_Registration_Info_UClass_UInterchangeResultsContainer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeResultsContainer.OuterSingleton, Z_Construct_UClass_UInterchangeResultsContainer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangeResultsContainer.OuterSingleton;
}
template<> INTERCHANGECORE_API UClass* StaticClass<UInterchangeResultsContainer>()
{
	return UInterchangeResultsContainer::StaticClass();
}
UInterchangeResultsContainer::UInterchangeResultsContainer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeResultsContainer);
UInterchangeResultsContainer::~UInterchangeResultsContainer() {}
// End Class UInterchangeResultsContainer

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeResultsContainer_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeResultsContainer, UInterchangeResultsContainer::StaticClass, TEXT("UInterchangeResultsContainer"), &Z_Registration_Info_UClass_UInterchangeResultsContainer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeResultsContainer), 24503055U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeResultsContainer_h_1188515338(TEXT("/Script/InterchangeCore"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeResultsContainer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeResultsContainer_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
