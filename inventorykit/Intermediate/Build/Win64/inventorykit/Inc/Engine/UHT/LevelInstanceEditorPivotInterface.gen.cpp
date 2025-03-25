// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/LevelInstance/LevelInstanceEditorPivotInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelInstanceEditorPivotInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
ENGINE_API UClass* Z_Construct_UClass_ULevelInstanceEditorPivotInterface();
ENGINE_API UClass* Z_Construct_UClass_ULevelInstanceEditorPivotInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Interface ULevelInstanceEditorPivotInterface
void ULevelInstanceEditorPivotInterface::StaticRegisterNativesULevelInstanceEditorPivotInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULevelInstanceEditorPivotInterface);
UClass* Z_Construct_UClass_ULevelInstanceEditorPivotInterface_NoRegister()
{
	return ULevelInstanceEditorPivotInterface::StaticClass();
}
struct Z_Construct_UClass_ULevelInstanceEditorPivotInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LevelInstance/LevelInstanceEditorPivotInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ILevelInstanceEditorPivotInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULevelInstanceEditorPivotInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelInstanceEditorPivotInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULevelInstanceEditorPivotInterface_Statics::ClassParams = {
	&ULevelInstanceEditorPivotInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelInstanceEditorPivotInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_ULevelInstanceEditorPivotInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULevelInstanceEditorPivotInterface()
{
	if (!Z_Registration_Info_UClass_ULevelInstanceEditorPivotInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULevelInstanceEditorPivotInterface.OuterSingleton, Z_Construct_UClass_ULevelInstanceEditorPivotInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULevelInstanceEditorPivotInterface.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<ULevelInstanceEditorPivotInterface>()
{
	return ULevelInstanceEditorPivotInterface::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelInstanceEditorPivotInterface);
ULevelInstanceEditorPivotInterface::~ULevelInstanceEditorPivotInterface() {}
// End Interface ULevelInstanceEditorPivotInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceEditorPivotInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULevelInstanceEditorPivotInterface, ULevelInstanceEditorPivotInterface::StaticClass, TEXT("ULevelInstanceEditorPivotInterface"), &Z_Registration_Info_UClass_ULevelInstanceEditorPivotInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULevelInstanceEditorPivotInterface), 1682080324U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceEditorPivotInterface_h_2886205608(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceEditorPivotInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceEditorPivotInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
