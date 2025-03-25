// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/Elements/SMInstance/SMInstanceElementSelectionInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSMInstanceElementSelectionInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_USMInstanceElementSelectionInterface();
ENGINE_API UClass* Z_Construct_UClass_USMInstanceElementSelectionInterface_NoRegister();
TYPEDELEMENTRUNTIME_API UClass* Z_Construct_UClass_UTypedElementSelectionInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class USMInstanceElementSelectionInterface
void USMInstanceElementSelectionInterface::StaticRegisterNativesUSMInstanceElementSelectionInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USMInstanceElementSelectionInterface);
UClass* Z_Construct_UClass_USMInstanceElementSelectionInterface_NoRegister()
{
	return USMInstanceElementSelectionInterface::StaticClass();
}
struct Z_Construct_UClass_USMInstanceElementSelectionInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Elements/SMInstance/SMInstanceElementSelectionInterface.h" },
		{ "ModuleRelativePath", "Public/Elements/SMInstance/SMInstanceElementSelectionInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USMInstanceElementSelectionInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USMInstanceElementSelectionInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USMInstanceElementSelectionInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_USMInstanceElementSelectionInterface_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UTypedElementSelectionInterface_NoRegister, (int32)VTABLE_OFFSET(USMInstanceElementSelectionInterface, ITypedElementSelectionInterface), false },  // 708723555
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_USMInstanceElementSelectionInterface_Statics::ClassParams = {
	&USMInstanceElementSelectionInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USMInstanceElementSelectionInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_USMInstanceElementSelectionInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USMInstanceElementSelectionInterface()
{
	if (!Z_Registration_Info_UClass_USMInstanceElementSelectionInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USMInstanceElementSelectionInterface.OuterSingleton, Z_Construct_UClass_USMInstanceElementSelectionInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USMInstanceElementSelectionInterface.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<USMInstanceElementSelectionInterface>()
{
	return USMInstanceElementSelectionInterface::StaticClass();
}
USMInstanceElementSelectionInterface::USMInstanceElementSelectionInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USMInstanceElementSelectionInterface);
USMInstanceElementSelectionInterface::~USMInstanceElementSelectionInterface() {}
// End Class USMInstanceElementSelectionInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceElementSelectionInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USMInstanceElementSelectionInterface, USMInstanceElementSelectionInterface::StaticClass, TEXT("USMInstanceElementSelectionInterface"), &Z_Registration_Info_UClass_USMInstanceElementSelectionInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USMInstanceElementSelectionInterface), 383186061U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceElementSelectionInterface_h_3960523004(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceElementSelectionInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceElementSelectionInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
