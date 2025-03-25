// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/Elements/Component/ComponentElementCounterInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComponentElementCounterInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UComponentElementCounterInterface();
ENGINE_API UClass* Z_Construct_UClass_UComponentElementCounterInterface_NoRegister();
TYPEDELEMENTFRAMEWORK_API UClass* Z_Construct_UClass_UTypedElementCounterInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UComponentElementCounterInterface
void UComponentElementCounterInterface::StaticRegisterNativesUComponentElementCounterInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UComponentElementCounterInterface);
UClass* Z_Construct_UClass_UComponentElementCounterInterface_NoRegister()
{
	return UComponentElementCounterInterface::StaticClass();
}
struct Z_Construct_UClass_UComponentElementCounterInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Elements/Component/ComponentElementCounterInterface.h" },
		{ "ModuleRelativePath", "Public/Elements/Component/ComponentElementCounterInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UComponentElementCounterInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UComponentElementCounterInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UComponentElementCounterInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UComponentElementCounterInterface_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UTypedElementCounterInterface_NoRegister, (int32)VTABLE_OFFSET(UComponentElementCounterInterface, ITypedElementCounterInterface), false },  // 4003565332
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UComponentElementCounterInterface_Statics::ClassParams = {
	&UComponentElementCounterInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComponentElementCounterInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UComponentElementCounterInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UComponentElementCounterInterface()
{
	if (!Z_Registration_Info_UClass_UComponentElementCounterInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UComponentElementCounterInterface.OuterSingleton, Z_Construct_UClass_UComponentElementCounterInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UComponentElementCounterInterface.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UComponentElementCounterInterface>()
{
	return UComponentElementCounterInterface::StaticClass();
}
UComponentElementCounterInterface::UComponentElementCounterInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UComponentElementCounterInterface);
UComponentElementCounterInterface::~UComponentElementCounterInterface() {}
// End Class UComponentElementCounterInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_Component_ComponentElementCounterInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UComponentElementCounterInterface, UComponentElementCounterInterface::StaticClass, TEXT("UComponentElementCounterInterface"), &Z_Registration_Info_UClass_UComponentElementCounterInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UComponentElementCounterInterface), 213371563U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_Component_ComponentElementCounterInterface_h_4086179090(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_Component_ComponentElementCounterInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_Component_ComponentElementCounterInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
