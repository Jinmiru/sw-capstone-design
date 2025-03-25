// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/Elements/Actor/ActorElementAssetDataInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorElementAssetDataInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UActorElementAssetDataInterface();
ENGINE_API UClass* Z_Construct_UClass_UActorElementAssetDataInterface_NoRegister();
TYPEDELEMENTRUNTIME_API UClass* Z_Construct_UClass_UTypedElementAssetDataInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UActorElementAssetDataInterface
void UActorElementAssetDataInterface::StaticRegisterNativesUActorElementAssetDataInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActorElementAssetDataInterface);
UClass* Z_Construct_UClass_UActorElementAssetDataInterface_NoRegister()
{
	return UActorElementAssetDataInterface::StaticClass();
}
struct Z_Construct_UClass_UActorElementAssetDataInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Elements/Actor/ActorElementAssetDataInterface.h" },
		{ "ModuleRelativePath", "Public/Elements/Actor/ActorElementAssetDataInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorElementAssetDataInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UActorElementAssetDataInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UActorElementAssetDataInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UActorElementAssetDataInterface_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UTypedElementAssetDataInterface_NoRegister, (int32)VTABLE_OFFSET(UActorElementAssetDataInterface, ITypedElementAssetDataInterface), false },  // 1816171463
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UActorElementAssetDataInterface_Statics::ClassParams = {
	&UActorElementAssetDataInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActorElementAssetDataInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UActorElementAssetDataInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UActorElementAssetDataInterface()
{
	if (!Z_Registration_Info_UClass_UActorElementAssetDataInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActorElementAssetDataInterface.OuterSingleton, Z_Construct_UClass_UActorElementAssetDataInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UActorElementAssetDataInterface.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UActorElementAssetDataInterface>()
{
	return UActorElementAssetDataInterface::StaticClass();
}
UActorElementAssetDataInterface::UActorElementAssetDataInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UActorElementAssetDataInterface);
UActorElementAssetDataInterface::~UActorElementAssetDataInterface() {}
// End Class UActorElementAssetDataInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_Actor_ActorElementAssetDataInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UActorElementAssetDataInterface, UActorElementAssetDataInterface::StaticClass, TEXT("UActorElementAssetDataInterface"), &Z_Registration_Info_UClass_UActorElementAssetDataInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActorElementAssetDataInterface), 2060940787U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_Actor_ActorElementAssetDataInterface_h_3230677547(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_Actor_ActorElementAssetDataInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_Actor_ActorElementAssetDataInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
