// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Interchange/Engine/Public/InterchangeMeshUtilities.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeMeshUtilities() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
INTERCHANGEENGINE_API UClass* Z_Construct_UClass_UInterchangeMeshUtilities();
INTERCHANGEENGINE_API UClass* Z_Construct_UClass_UInterchangeMeshUtilities_NoRegister();
UPackage* Z_Construct_UPackage__Script_InterchangeEngine();
// End Cross Module References

// Begin Class UInterchangeMeshUtilities
void UInterchangeMeshUtilities::StaticRegisterNativesUInterchangeMeshUtilities()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeMeshUtilities);
UClass* Z_Construct_UClass_UInterchangeMeshUtilities_NoRegister()
{
	return UInterchangeMeshUtilities::StaticClass();
}
struct Z_Construct_UClass_UInterchangeMeshUtilities_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "InterchangeMeshUtilities.h" },
		{ "ModuleRelativePath", "Public/InterchangeMeshUtilities.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeMeshUtilities>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInterchangeMeshUtilities_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeMeshUtilities_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeMeshUtilities_Statics::ClassParams = {
	&UInterchangeMeshUtilities::StaticClass,
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
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeMeshUtilities_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeMeshUtilities_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangeMeshUtilities()
{
	if (!Z_Registration_Info_UClass_UInterchangeMeshUtilities.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeMeshUtilities.OuterSingleton, Z_Construct_UClass_UInterchangeMeshUtilities_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangeMeshUtilities.OuterSingleton;
}
template<> INTERCHANGEENGINE_API UClass* StaticClass<UInterchangeMeshUtilities>()
{
	return UInterchangeMeshUtilities::StaticClass();
}
UInterchangeMeshUtilities::UInterchangeMeshUtilities(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeMeshUtilities);
UInterchangeMeshUtilities::~UInterchangeMeshUtilities() {}
// End Class UInterchangeMeshUtilities

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeMeshUtilities_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeMeshUtilities, UInterchangeMeshUtilities::StaticClass, TEXT("UInterchangeMeshUtilities"), &Z_Registration_Info_UClass_UInterchangeMeshUtilities, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeMeshUtilities), 1408170863U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeMeshUtilities_h_3507751186(TEXT("/Script/InterchangeEngine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeMeshUtilities_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeMeshUtilities_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
