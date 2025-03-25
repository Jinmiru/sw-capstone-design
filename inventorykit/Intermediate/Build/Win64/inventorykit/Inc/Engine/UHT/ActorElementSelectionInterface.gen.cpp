// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/Elements/Actor/ActorElementSelectionInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorElementSelectionInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UActorElementSelectionInterface();
ENGINE_API UClass* Z_Construct_UClass_UActorElementSelectionInterface_NoRegister();
TYPEDELEMENTRUNTIME_API UClass* Z_Construct_UClass_UTypedElementSelectionInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UActorElementSelectionInterface
void UActorElementSelectionInterface::StaticRegisterNativesUActorElementSelectionInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActorElementSelectionInterface);
UClass* Z_Construct_UClass_UActorElementSelectionInterface_NoRegister()
{
	return UActorElementSelectionInterface::StaticClass();
}
struct Z_Construct_UClass_UActorElementSelectionInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Elements/Actor/ActorElementSelectionInterface.h" },
		{ "ModuleRelativePath", "Public/Elements/Actor/ActorElementSelectionInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorElementSelectionInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UActorElementSelectionInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UActorElementSelectionInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UActorElementSelectionInterface_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UTypedElementSelectionInterface_NoRegister, (int32)VTABLE_OFFSET(UActorElementSelectionInterface, ITypedElementSelectionInterface), false },  // 708723555
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UActorElementSelectionInterface_Statics::ClassParams = {
	&UActorElementSelectionInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActorElementSelectionInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UActorElementSelectionInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UActorElementSelectionInterface()
{
	if (!Z_Registration_Info_UClass_UActorElementSelectionInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActorElementSelectionInterface.OuterSingleton, Z_Construct_UClass_UActorElementSelectionInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UActorElementSelectionInterface.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UActorElementSelectionInterface>()
{
	return UActorElementSelectionInterface::StaticClass();
}
UActorElementSelectionInterface::UActorElementSelectionInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UActorElementSelectionInterface);
UActorElementSelectionInterface::~UActorElementSelectionInterface() {}
// End Class UActorElementSelectionInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_Actor_ActorElementSelectionInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UActorElementSelectionInterface, UActorElementSelectionInterface::StaticClass, TEXT("UActorElementSelectionInterface"), &Z_Registration_Info_UClass_UActorElementSelectionInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActorElementSelectionInterface), 1860938176U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_Actor_ActorElementSelectionInterface_h_2801614397(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_Actor_ActorElementSelectionInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_Actor_ActorElementSelectionInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
