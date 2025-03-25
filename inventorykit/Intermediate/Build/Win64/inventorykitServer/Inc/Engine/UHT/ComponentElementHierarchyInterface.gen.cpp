// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/Elements/Component/ComponentElementHierarchyInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComponentElementHierarchyInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UComponentElementHierarchyInterface();
ENGINE_API UClass* Z_Construct_UClass_UComponentElementHierarchyInterface_NoRegister();
TYPEDELEMENTRUNTIME_API UClass* Z_Construct_UClass_UTypedElementHierarchyInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UComponentElementHierarchyInterface
void UComponentElementHierarchyInterface::StaticRegisterNativesUComponentElementHierarchyInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UComponentElementHierarchyInterface);
UClass* Z_Construct_UClass_UComponentElementHierarchyInterface_NoRegister()
{
	return UComponentElementHierarchyInterface::StaticClass();
}
struct Z_Construct_UClass_UComponentElementHierarchyInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Elements/Component/ComponentElementHierarchyInterface.h" },
		{ "ModuleRelativePath", "Public/Elements/Component/ComponentElementHierarchyInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UComponentElementHierarchyInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UComponentElementHierarchyInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UComponentElementHierarchyInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UComponentElementHierarchyInterface_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UTypedElementHierarchyInterface_NoRegister, (int32)VTABLE_OFFSET(UComponentElementHierarchyInterface, ITypedElementHierarchyInterface), false },  // 2361398956
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UComponentElementHierarchyInterface_Statics::ClassParams = {
	&UComponentElementHierarchyInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComponentElementHierarchyInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UComponentElementHierarchyInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UComponentElementHierarchyInterface()
{
	if (!Z_Registration_Info_UClass_UComponentElementHierarchyInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UComponentElementHierarchyInterface.OuterSingleton, Z_Construct_UClass_UComponentElementHierarchyInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UComponentElementHierarchyInterface.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UComponentElementHierarchyInterface>()
{
	return UComponentElementHierarchyInterface::StaticClass();
}
UComponentElementHierarchyInterface::UComponentElementHierarchyInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UComponentElementHierarchyInterface);
UComponentElementHierarchyInterface::~UComponentElementHierarchyInterface() {}
// End Class UComponentElementHierarchyInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_Component_ComponentElementHierarchyInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UComponentElementHierarchyInterface, UComponentElementHierarchyInterface::StaticClass, TEXT("UComponentElementHierarchyInterface"), &Z_Registration_Info_UClass_UComponentElementHierarchyInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UComponentElementHierarchyInterface), 3907238056U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_Component_ComponentElementHierarchyInterface_h_1763830654(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_Component_ComponentElementHierarchyInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_Component_ComponentElementHierarchyInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
