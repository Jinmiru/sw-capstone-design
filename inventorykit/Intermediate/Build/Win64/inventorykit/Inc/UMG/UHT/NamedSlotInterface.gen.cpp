// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/UMG/Public/Components/NamedSlotInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNamedSlotInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
UMG_API UClass* Z_Construct_UClass_UNamedSlotInterface();
UMG_API UClass* Z_Construct_UClass_UNamedSlotInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References

// Begin Interface UNamedSlotInterface
void UNamedSlotInterface::StaticRegisterNativesUNamedSlotInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNamedSlotInterface);
UClass* Z_Construct_UClass_UNamedSlotInterface_NoRegister()
{
	return UNamedSlotInterface::StaticClass();
}
struct Z_Construct_UClass_UNamedSlotInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/Components/NamedSlotInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<INamedSlotInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNamedSlotInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_UMG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNamedSlotInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNamedSlotInterface_Statics::ClassParams = {
	&UNamedSlotInterface::StaticClass,
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
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNamedSlotInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UNamedSlotInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNamedSlotInterface()
{
	if (!Z_Registration_Info_UClass_UNamedSlotInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNamedSlotInterface.OuterSingleton, Z_Construct_UClass_UNamedSlotInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNamedSlotInterface.OuterSingleton;
}
template<> UMG_API UClass* StaticClass<UNamedSlotInterface>()
{
	return UNamedSlotInterface::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNamedSlotInterface);
UNamedSlotInterface::~UNamedSlotInterface() {}
// End Interface UNamedSlotInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_NamedSlotInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNamedSlotInterface, UNamedSlotInterface::StaticClass, TEXT("UNamedSlotInterface"), &Z_Registration_Info_UClass_UNamedSlotInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNamedSlotInterface), 1434016692U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_NamedSlotInterface_h_1496550467(TEXT("/Script/UMG"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_NamedSlotInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_NamedSlotInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
