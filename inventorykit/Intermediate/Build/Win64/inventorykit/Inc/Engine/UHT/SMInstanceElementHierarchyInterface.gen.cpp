// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/Elements/SMInstance/SMInstanceElementHierarchyInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSMInstanceElementHierarchyInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_USMInstanceElementHierarchyInterface();
ENGINE_API UClass* Z_Construct_UClass_USMInstanceElementHierarchyInterface_NoRegister();
TYPEDELEMENTRUNTIME_API UClass* Z_Construct_UClass_UTypedElementHierarchyInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class USMInstanceElementHierarchyInterface
void USMInstanceElementHierarchyInterface::StaticRegisterNativesUSMInstanceElementHierarchyInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USMInstanceElementHierarchyInterface);
UClass* Z_Construct_UClass_USMInstanceElementHierarchyInterface_NoRegister()
{
	return USMInstanceElementHierarchyInterface::StaticClass();
}
struct Z_Construct_UClass_USMInstanceElementHierarchyInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Elements/SMInstance/SMInstanceElementHierarchyInterface.h" },
		{ "ModuleRelativePath", "Public/Elements/SMInstance/SMInstanceElementHierarchyInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USMInstanceElementHierarchyInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USMInstanceElementHierarchyInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USMInstanceElementHierarchyInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_USMInstanceElementHierarchyInterface_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UTypedElementHierarchyInterface_NoRegister, (int32)VTABLE_OFFSET(USMInstanceElementHierarchyInterface, ITypedElementHierarchyInterface), false },  // 2361398956
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_USMInstanceElementHierarchyInterface_Statics::ClassParams = {
	&USMInstanceElementHierarchyInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	UE_ARRAY_COUNT(InterfaceParams),
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USMInstanceElementHierarchyInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_USMInstanceElementHierarchyInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USMInstanceElementHierarchyInterface()
{
	if (!Z_Registration_Info_UClass_USMInstanceElementHierarchyInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USMInstanceElementHierarchyInterface.OuterSingleton, Z_Construct_UClass_USMInstanceElementHierarchyInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USMInstanceElementHierarchyInterface.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<USMInstanceElementHierarchyInterface>()
{
	return USMInstanceElementHierarchyInterface::StaticClass();
}
USMInstanceElementHierarchyInterface::USMInstanceElementHierarchyInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USMInstanceElementHierarchyInterface);
USMInstanceElementHierarchyInterface::~USMInstanceElementHierarchyInterface() {}
// End Class USMInstanceElementHierarchyInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceElementHierarchyInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USMInstanceElementHierarchyInterface, USMInstanceElementHierarchyInterface::StaticClass, TEXT("USMInstanceElementHierarchyInterface"), &Z_Registration_Info_UClass_USMInstanceElementHierarchyInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USMInstanceElementHierarchyInterface), 1099405652U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceElementHierarchyInterface_h_3123405001(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceElementHierarchyInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceElementHierarchyInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
