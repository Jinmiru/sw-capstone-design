// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/Elements/Actor/ActorElementObjectInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorElementObjectInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UActorElementObjectInterface();
ENGINE_API UClass* Z_Construct_UClass_UActorElementObjectInterface_NoRegister();
TYPEDELEMENTRUNTIME_API UClass* Z_Construct_UClass_UTypedElementObjectInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UActorElementObjectInterface
void UActorElementObjectInterface::StaticRegisterNativesUActorElementObjectInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActorElementObjectInterface);
UClass* Z_Construct_UClass_UActorElementObjectInterface_NoRegister()
{
	return UActorElementObjectInterface::StaticClass();
}
struct Z_Construct_UClass_UActorElementObjectInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Elements/Actor/ActorElementObjectInterface.h" },
		{ "ModuleRelativePath", "Public/Elements/Actor/ActorElementObjectInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorElementObjectInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UActorElementObjectInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UActorElementObjectInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UActorElementObjectInterface_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UTypedElementObjectInterface_NoRegister, (int32)VTABLE_OFFSET(UActorElementObjectInterface, ITypedElementObjectInterface), false },  // 2234255953
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UActorElementObjectInterface_Statics::ClassParams = {
	&UActorElementObjectInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActorElementObjectInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UActorElementObjectInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UActorElementObjectInterface()
{
	if (!Z_Registration_Info_UClass_UActorElementObjectInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActorElementObjectInterface.OuterSingleton, Z_Construct_UClass_UActorElementObjectInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UActorElementObjectInterface.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UActorElementObjectInterface>()
{
	return UActorElementObjectInterface::StaticClass();
}
UActorElementObjectInterface::UActorElementObjectInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UActorElementObjectInterface);
UActorElementObjectInterface::~UActorElementObjectInterface() {}
// End Class UActorElementObjectInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_Actor_ActorElementObjectInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UActorElementObjectInterface, UActorElementObjectInterface::StaticClass, TEXT("UActorElementObjectInterface"), &Z_Registration_Info_UClass_UActorElementObjectInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActorElementObjectInterface), 2813628389U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_Actor_ActorElementObjectInterface_h_1148082987(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_Actor_ActorElementObjectInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_Actor_ActorElementObjectInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
