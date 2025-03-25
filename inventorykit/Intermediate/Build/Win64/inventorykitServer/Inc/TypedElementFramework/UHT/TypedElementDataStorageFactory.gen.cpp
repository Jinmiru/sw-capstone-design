// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/TypedElementFramework/Public/Elements/Interfaces/TypedElementDataStorageFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTypedElementDataStorageFactory() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
TYPEDELEMENTFRAMEWORK_API UClass* Z_Construct_UClass_UTypedElementDataStorageFactory();
TYPEDELEMENTFRAMEWORK_API UClass* Z_Construct_UClass_UTypedElementDataStorageFactory_NoRegister();
UPackage* Z_Construct_UPackage__Script_TypedElementFramework();
// End Cross Module References

// Begin Class UTypedElementDataStorageFactory
void UTypedElementDataStorageFactory::StaticRegisterNativesUTypedElementDataStorageFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTypedElementDataStorageFactory);
UClass* Z_Construct_UClass_UTypedElementDataStorageFactory_NoRegister()
{
	return UTypedElementDataStorageFactory::StaticClass();
}
struct Z_Construct_UClass_UTypedElementDataStorageFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class that can be used to register various elements, such as queries and widgets, with\n * the Typed Elements Data Storage.\n */" },
		{ "IncludePath", "Elements/Interfaces/TypedElementDataStorageFactory.h" },
		{ "ModuleRelativePath", "Public/Elements/Interfaces/TypedElementDataStorageFactory.h" },
		{ "ToolTip", "Base class that can be used to register various elements, such as queries and widgets, with\nthe Typed Elements Data Storage." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTypedElementDataStorageFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UTypedElementDataStorageFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_TypedElementFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTypedElementDataStorageFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTypedElementDataStorageFactory_Statics::ClassParams = {
	&UTypedElementDataStorageFactory::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTypedElementDataStorageFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UTypedElementDataStorageFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTypedElementDataStorageFactory()
{
	if (!Z_Registration_Info_UClass_UTypedElementDataStorageFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTypedElementDataStorageFactory.OuterSingleton, Z_Construct_UClass_UTypedElementDataStorageFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTypedElementDataStorageFactory.OuterSingleton;
}
template<> TYPEDELEMENTFRAMEWORK_API UClass* StaticClass<UTypedElementDataStorageFactory>()
{
	return UTypedElementDataStorageFactory::StaticClass();
}
UTypedElementDataStorageFactory::UTypedElementDataStorageFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTypedElementDataStorageFactory);
// End Class UTypedElementDataStorageFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Interfaces_TypedElementDataStorageFactory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTypedElementDataStorageFactory, UTypedElementDataStorageFactory::StaticClass, TEXT("UTypedElementDataStorageFactory"), &Z_Registration_Info_UClass_UTypedElementDataStorageFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTypedElementDataStorageFactory), 2260215014U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Interfaces_TypedElementDataStorageFactory_h_3277053949(TEXT("/Script/TypedElementFramework"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Interfaces_TypedElementDataStorageFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Interfaces_TypedElementDataStorageFactory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
