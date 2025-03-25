// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/Elements/SMInstance/SMInstanceElementPrimitiveCustomDataInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSMInstanceElementPrimitiveCustomDataInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_USMInstanceElementPrimitiveCustomDataInterface();
ENGINE_API UClass* Z_Construct_UClass_USMInstanceElementPrimitiveCustomDataInterface_NoRegister();
TYPEDELEMENTRUNTIME_API UClass* Z_Construct_UClass_UTypedElementPrimitiveCustomDataInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class USMInstanceElementPrimitiveCustomDataInterface
void USMInstanceElementPrimitiveCustomDataInterface::StaticRegisterNativesUSMInstanceElementPrimitiveCustomDataInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USMInstanceElementPrimitiveCustomDataInterface);
UClass* Z_Construct_UClass_USMInstanceElementPrimitiveCustomDataInterface_NoRegister()
{
	return USMInstanceElementPrimitiveCustomDataInterface::StaticClass();
}
struct Z_Construct_UClass_USMInstanceElementPrimitiveCustomDataInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Elements/SMInstance/SMInstanceElementPrimitiveCustomDataInterface.h" },
		{ "ModuleRelativePath", "Public/Elements/SMInstance/SMInstanceElementPrimitiveCustomDataInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USMInstanceElementPrimitiveCustomDataInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USMInstanceElementPrimitiveCustomDataInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USMInstanceElementPrimitiveCustomDataInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_USMInstanceElementPrimitiveCustomDataInterface_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UTypedElementPrimitiveCustomDataInterface_NoRegister, (int32)VTABLE_OFFSET(USMInstanceElementPrimitiveCustomDataInterface, ITypedElementPrimitiveCustomDataInterface), false },  // 1510207955
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_USMInstanceElementPrimitiveCustomDataInterface_Statics::ClassParams = {
	&USMInstanceElementPrimitiveCustomDataInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USMInstanceElementPrimitiveCustomDataInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_USMInstanceElementPrimitiveCustomDataInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USMInstanceElementPrimitiveCustomDataInterface()
{
	if (!Z_Registration_Info_UClass_USMInstanceElementPrimitiveCustomDataInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USMInstanceElementPrimitiveCustomDataInterface.OuterSingleton, Z_Construct_UClass_USMInstanceElementPrimitiveCustomDataInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USMInstanceElementPrimitiveCustomDataInterface.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<USMInstanceElementPrimitiveCustomDataInterface>()
{
	return USMInstanceElementPrimitiveCustomDataInterface::StaticClass();
}
USMInstanceElementPrimitiveCustomDataInterface::USMInstanceElementPrimitiveCustomDataInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USMInstanceElementPrimitiveCustomDataInterface);
USMInstanceElementPrimitiveCustomDataInterface::~USMInstanceElementPrimitiveCustomDataInterface() {}
// End Class USMInstanceElementPrimitiveCustomDataInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceElementPrimitiveCustomDataInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USMInstanceElementPrimitiveCustomDataInterface, USMInstanceElementPrimitiveCustomDataInterface::StaticClass, TEXT("USMInstanceElementPrimitiveCustomDataInterface"), &Z_Registration_Info_UClass_USMInstanceElementPrimitiveCustomDataInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USMInstanceElementPrimitiveCustomDataInterface), 2951345380U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceElementPrimitiveCustomDataInterface_h_3044189134(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceElementPrimitiveCustomDataInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceElementPrimitiveCustomDataInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
