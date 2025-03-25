// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/Elements/Component/ComponentElementSelectionInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComponentElementSelectionInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UComponentElementSelectionInterface();
ENGINE_API UClass* Z_Construct_UClass_UComponentElementSelectionInterface_NoRegister();
TYPEDELEMENTRUNTIME_API UClass* Z_Construct_UClass_UTypedElementSelectionInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UComponentElementSelectionInterface
void UComponentElementSelectionInterface::StaticRegisterNativesUComponentElementSelectionInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UComponentElementSelectionInterface);
UClass* Z_Construct_UClass_UComponentElementSelectionInterface_NoRegister()
{
	return UComponentElementSelectionInterface::StaticClass();
}
struct Z_Construct_UClass_UComponentElementSelectionInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Elements/Component/ComponentElementSelectionInterface.h" },
		{ "ModuleRelativePath", "Public/Elements/Component/ComponentElementSelectionInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UComponentElementSelectionInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UComponentElementSelectionInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UComponentElementSelectionInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UComponentElementSelectionInterface_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UTypedElementSelectionInterface_NoRegister, (int32)VTABLE_OFFSET(UComponentElementSelectionInterface, ITypedElementSelectionInterface), false },  // 708723555
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UComponentElementSelectionInterface_Statics::ClassParams = {
	&UComponentElementSelectionInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComponentElementSelectionInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UComponentElementSelectionInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UComponentElementSelectionInterface()
{
	if (!Z_Registration_Info_UClass_UComponentElementSelectionInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UComponentElementSelectionInterface.OuterSingleton, Z_Construct_UClass_UComponentElementSelectionInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UComponentElementSelectionInterface.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UComponentElementSelectionInterface>()
{
	return UComponentElementSelectionInterface::StaticClass();
}
UComponentElementSelectionInterface::UComponentElementSelectionInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UComponentElementSelectionInterface);
UComponentElementSelectionInterface::~UComponentElementSelectionInterface() {}
// End Class UComponentElementSelectionInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_Component_ComponentElementSelectionInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UComponentElementSelectionInterface, UComponentElementSelectionInterface::StaticClass, TEXT("UComponentElementSelectionInterface"), &Z_Registration_Info_UClass_UComponentElementSelectionInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UComponentElementSelectionInterface), 3484796959U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_Component_ComponentElementSelectionInterface_h_157822559(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_Component_ComponentElementSelectionInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_Component_ComponentElementSelectionInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
