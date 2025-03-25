// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/WorldPartition/Cook/WorldPartitionCookPackageInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldPartitionCookPackageInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionCookPackageObject();
ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionCookPackageObject_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Interface UWorldPartitionCookPackageObject
void UWorldPartitionCookPackageObject::StaticRegisterNativesUWorldPartitionCookPackageObject()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWorldPartitionCookPackageObject);
UClass* Z_Construct_UClass_UWorldPartitionCookPackageObject_NoRegister()
{
	return UWorldPartitionCookPackageObject::StaticClass();
}
struct Z_Construct_UClass_UWorldPartitionCookPackageObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/Cook/WorldPartitionCookPackageInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IWorldPartitionCookPackageObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UWorldPartitionCookPackageObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionCookPackageObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWorldPartitionCookPackageObject_Statics::ClassParams = {
	&UWorldPartitionCookPackageObject::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionCookPackageObject_Statics::Class_MetaDataParams), Z_Construct_UClass_UWorldPartitionCookPackageObject_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWorldPartitionCookPackageObject()
{
	if (!Z_Registration_Info_UClass_UWorldPartitionCookPackageObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWorldPartitionCookPackageObject.OuterSingleton, Z_Construct_UClass_UWorldPartitionCookPackageObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWorldPartitionCookPackageObject.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UWorldPartitionCookPackageObject>()
{
	return UWorldPartitionCookPackageObject::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWorldPartitionCookPackageObject);
UWorldPartitionCookPackageObject::~UWorldPartitionCookPackageObject() {}
// End Interface UWorldPartitionCookPackageObject

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_Cook_WorldPartitionCookPackageInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWorldPartitionCookPackageObject, UWorldPartitionCookPackageObject::StaticClass, TEXT("UWorldPartitionCookPackageObject"), &Z_Registration_Info_UClass_UWorldPartitionCookPackageObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWorldPartitionCookPackageObject), 929673968U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_Cook_WorldPartitionCookPackageInterface_h_3161074150(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_Cook_WorldPartitionCookPackageInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_Cook_WorldPartitionCookPackageInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
