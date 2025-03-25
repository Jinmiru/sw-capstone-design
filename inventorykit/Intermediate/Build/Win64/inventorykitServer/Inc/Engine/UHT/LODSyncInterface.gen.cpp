// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/LODSyncInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLODSyncInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
ENGINE_API UClass* Z_Construct_UClass_ULODSyncInterface();
ENGINE_API UClass* Z_Construct_UClass_ULODSyncInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Interface ULODSyncInterface
void ULODSyncInterface::StaticRegisterNativesULODSyncInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULODSyncInterface);
UClass* Z_Construct_UClass_ULODSyncInterface_NoRegister()
{
	return ULODSyncInterface::StaticClass();
}
struct Z_Construct_UClass_ULODSyncInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/LODSyncInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ILODSyncInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULODSyncInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULODSyncInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULODSyncInterface_Statics::ClassParams = {
	&ULODSyncInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULODSyncInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_ULODSyncInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULODSyncInterface()
{
	if (!Z_Registration_Info_UClass_ULODSyncInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULODSyncInterface.OuterSingleton, Z_Construct_UClass_ULODSyncInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULODSyncInterface.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<ULODSyncInterface>()
{
	return ULODSyncInterface::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULODSyncInterface);
ULODSyncInterface::~ULODSyncInterface() {}
// End Interface ULODSyncInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LODSyncInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULODSyncInterface, ULODSyncInterface::StaticClass, TEXT("ULODSyncInterface"), &Z_Registration_Info_UClass_ULODSyncInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULODSyncInterface), 3498189645U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LODSyncInterface_h_2855152440(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LODSyncInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LODSyncInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
