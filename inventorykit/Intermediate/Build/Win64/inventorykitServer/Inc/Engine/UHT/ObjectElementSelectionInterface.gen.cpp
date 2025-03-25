// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/Elements/Object/ObjectElementSelectionInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObjectElementSelectionInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UObjectElementSelectionInterface();
ENGINE_API UClass* Z_Construct_UClass_UObjectElementSelectionInterface_NoRegister();
TYPEDELEMENTRUNTIME_API UClass* Z_Construct_UClass_UTypedElementSelectionInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UObjectElementSelectionInterface
void UObjectElementSelectionInterface::StaticRegisterNativesUObjectElementSelectionInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UObjectElementSelectionInterface);
UClass* Z_Construct_UClass_UObjectElementSelectionInterface_NoRegister()
{
	return UObjectElementSelectionInterface::StaticClass();
}
struct Z_Construct_UClass_UObjectElementSelectionInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Elements/Object/ObjectElementSelectionInterface.h" },
		{ "ModuleRelativePath", "Public/Elements/Object/ObjectElementSelectionInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UObjectElementSelectionInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UObjectElementSelectionInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UObjectElementSelectionInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UObjectElementSelectionInterface_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UTypedElementSelectionInterface_NoRegister, (int32)VTABLE_OFFSET(UObjectElementSelectionInterface, ITypedElementSelectionInterface), false },  // 708723555
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UObjectElementSelectionInterface_Statics::ClassParams = {
	&UObjectElementSelectionInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UObjectElementSelectionInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UObjectElementSelectionInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UObjectElementSelectionInterface()
{
	if (!Z_Registration_Info_UClass_UObjectElementSelectionInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UObjectElementSelectionInterface.OuterSingleton, Z_Construct_UClass_UObjectElementSelectionInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UObjectElementSelectionInterface.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UObjectElementSelectionInterface>()
{
	return UObjectElementSelectionInterface::StaticClass();
}
UObjectElementSelectionInterface::UObjectElementSelectionInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UObjectElementSelectionInterface);
UObjectElementSelectionInterface::~UObjectElementSelectionInterface() {}
// End Class UObjectElementSelectionInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_Object_ObjectElementSelectionInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UObjectElementSelectionInterface, UObjectElementSelectionInterface::StaticClass, TEXT("UObjectElementSelectionInterface"), &Z_Registration_Info_UClass_UObjectElementSelectionInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UObjectElementSelectionInterface), 870476223U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_Object_ObjectElementSelectionInterface_h_2421683385(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_Object_ObjectElementSelectionInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_Object_ObjectElementSelectionInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
