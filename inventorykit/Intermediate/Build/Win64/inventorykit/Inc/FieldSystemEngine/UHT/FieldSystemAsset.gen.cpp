// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Experimental/FieldSystem/Source/FieldSystemEngine/Public/Field/FieldSystemAsset.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFieldSystemAsset() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
FIELDSYSTEMENGINE_API UClass* Z_Construct_UClass_UFieldSystem();
FIELDSYSTEMENGINE_API UClass* Z_Construct_UClass_UFieldSystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_FieldSystemEngine();
// End Cross Module References

// Begin Class UFieldSystem
void UFieldSystem::StaticRegisterNativesUFieldSystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFieldSystem);
UClass* Z_Construct_UClass_UFieldSystem_NoRegister()
{
	return UFieldSystem::StaticClass();
}
struct Z_Construct_UClass_UFieldSystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Field/FieldSystemAsset.h" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemAsset.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFieldSystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UFieldSystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_FieldSystemEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFieldSystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFieldSystem_Statics::ClassParams = {
	&UFieldSystem::StaticClass,
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
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFieldSystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UFieldSystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFieldSystem()
{
	if (!Z_Registration_Info_UClass_UFieldSystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFieldSystem.OuterSingleton, Z_Construct_UClass_UFieldSystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFieldSystem.OuterSingleton;
}
template<> FIELDSYSTEMENGINE_API UClass* StaticClass<UFieldSystem>()
{
	return UFieldSystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFieldSystem);
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UFieldSystem)
// End Class UFieldSystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemAsset_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFieldSystem, UFieldSystem::StaticClass, TEXT("UFieldSystem"), &Z_Registration_Info_UClass_UFieldSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFieldSystem), 532832091U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemAsset_h_1523579297(TEXT("/Script/FieldSystemEngine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemAsset_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
