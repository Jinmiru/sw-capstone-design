// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/Elements/SMInstance/SMInstanceElementWorldInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSMInstanceElementWorldInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_USMInstanceElementWorldInterface();
ENGINE_API UClass* Z_Construct_UClass_USMInstanceElementWorldInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTypedElementWorldInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class USMInstanceElementWorldInterface
void USMInstanceElementWorldInterface::StaticRegisterNativesUSMInstanceElementWorldInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USMInstanceElementWorldInterface);
UClass* Z_Construct_UClass_USMInstanceElementWorldInterface_NoRegister()
{
	return USMInstanceElementWorldInterface::StaticClass();
}
struct Z_Construct_UClass_USMInstanceElementWorldInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Elements/SMInstance/SMInstanceElementWorldInterface.h" },
		{ "ModuleRelativePath", "Public/Elements/SMInstance/SMInstanceElementWorldInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USMInstanceElementWorldInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USMInstanceElementWorldInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USMInstanceElementWorldInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_USMInstanceElementWorldInterface_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UTypedElementWorldInterface_NoRegister, (int32)VTABLE_OFFSET(USMInstanceElementWorldInterface, ITypedElementWorldInterface), false },  // 2524139720
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_USMInstanceElementWorldInterface_Statics::ClassParams = {
	&USMInstanceElementWorldInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USMInstanceElementWorldInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_USMInstanceElementWorldInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USMInstanceElementWorldInterface()
{
	if (!Z_Registration_Info_UClass_USMInstanceElementWorldInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USMInstanceElementWorldInterface.OuterSingleton, Z_Construct_UClass_USMInstanceElementWorldInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USMInstanceElementWorldInterface.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<USMInstanceElementWorldInterface>()
{
	return USMInstanceElementWorldInterface::StaticClass();
}
USMInstanceElementWorldInterface::USMInstanceElementWorldInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USMInstanceElementWorldInterface);
USMInstanceElementWorldInterface::~USMInstanceElementWorldInterface() {}
// End Class USMInstanceElementWorldInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceElementWorldInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USMInstanceElementWorldInterface, USMInstanceElementWorldInterface::StaticClass, TEXT("USMInstanceElementWorldInterface"), &Z_Registration_Info_UClass_USMInstanceElementWorldInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USMInstanceElementWorldInterface), 234016829U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceElementWorldInterface_h_1478650557(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceElementWorldInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceElementWorldInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
