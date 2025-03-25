// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/GameplayTasks/Classes/GameplayTaskOwnerInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayTaskOwnerInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
GAMEPLAYTASKS_API UClass* Z_Construct_UClass_UGameplayTaskOwnerInterface();
GAMEPLAYTASKS_API UClass* Z_Construct_UClass_UGameplayTaskOwnerInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_GameplayTasks();
// End Cross Module References

// Begin Interface UGameplayTaskOwnerInterface
void UGameplayTaskOwnerInterface::StaticRegisterNativesUGameplayTaskOwnerInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameplayTaskOwnerInterface);
UClass* Z_Construct_UClass_UGameplayTaskOwnerInterface_NoRegister()
{
	return UGameplayTaskOwnerInterface::StaticClass();
}
struct Z_Construct_UClass_UGameplayTaskOwnerInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Classes/GameplayTaskOwnerInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IGameplayTaskOwnerInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGameplayTaskOwnerInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayTasks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTaskOwnerInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameplayTaskOwnerInterface_Statics::ClassParams = {
	&UGameplayTaskOwnerInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTaskOwnerInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameplayTaskOwnerInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGameplayTaskOwnerInterface()
{
	if (!Z_Registration_Info_UClass_UGameplayTaskOwnerInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameplayTaskOwnerInterface.OuterSingleton, Z_Construct_UClass_UGameplayTaskOwnerInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGameplayTaskOwnerInterface.OuterSingleton;
}
template<> GAMEPLAYTASKS_API UClass* StaticClass<UGameplayTaskOwnerInterface>()
{
	return UGameplayTaskOwnerInterface::StaticClass();
}
UGameplayTaskOwnerInterface::UGameplayTaskOwnerInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayTaskOwnerInterface);
UGameplayTaskOwnerInterface::~UGameplayTaskOwnerInterface() {}
// End Interface UGameplayTaskOwnerInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTaskOwnerInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGameplayTaskOwnerInterface, UGameplayTaskOwnerInterface::StaticClass, TEXT("UGameplayTaskOwnerInterface"), &Z_Registration_Info_UClass_UGameplayTaskOwnerInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameplayTaskOwnerInterface), 1243777696U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTaskOwnerInterface_h_3250244091(TEXT("/Script/GameplayTasks"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTaskOwnerInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTaskOwnerInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
