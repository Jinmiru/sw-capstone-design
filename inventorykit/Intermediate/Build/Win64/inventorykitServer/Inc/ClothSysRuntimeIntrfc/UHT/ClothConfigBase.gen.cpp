// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothConfigBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClothConfigBase() {}

// Begin Cross Module References
CLOTHINGSYSTEMRUNTIMEINTERFACE_API UClass* Z_Construct_UClass_UClothConfigBase();
CLOTHINGSYSTEMRUNTIMEINTERFACE_API UClass* Z_Construct_UClass_UClothConfigBase_NoRegister();
CLOTHINGSYSTEMRUNTIMEINTERFACE_API UClass* Z_Construct_UClass_UDEPRECATED_ClothSharedSimConfigBase();
CLOTHINGSYSTEMRUNTIMEINTERFACE_API UClass* Z_Construct_UClass_UDEPRECATED_ClothSharedSimConfigBase_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_ClothingSystemRuntimeInterface();
// End Cross Module References

// Begin Class UClothConfigBase
void UClothConfigBase::StaticRegisterNativesUClothConfigBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UClothConfigBase);
UClass* Z_Construct_UClass_UClothConfigBase_NoRegister()
{
	return UClothConfigBase::StaticClass();
}
struct Z_Construct_UClass_UClothConfigBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for simulator specific simulation controls.\n * Each cloth instance on a skeletal mesh can have a unique cloth config\n */" },
		{ "IncludePath", "ClothConfigBase.h" },
		{ "ModuleRelativePath", "Public/ClothConfigBase.h" },
		{ "ToolTip", "Base class for simulator specific simulation controls.\nEach cloth instance on a skeletal mesh can have a unique cloth config" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UClothConfigBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UClothConfigBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ClothingSystemRuntimeInterface,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UClothConfigBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UClothConfigBase_Statics::ClassParams = {
	&UClothConfigBase::StaticClass,
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
	0x000800A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UClothConfigBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UClothConfigBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UClothConfigBase()
{
	if (!Z_Registration_Info_UClass_UClothConfigBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UClothConfigBase.OuterSingleton, Z_Construct_UClass_UClothConfigBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UClothConfigBase.OuterSingleton;
}
template<> CLOTHINGSYSTEMRUNTIMEINTERFACE_API UClass* StaticClass<UClothConfigBase>()
{
	return UClothConfigBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UClothConfigBase);
// End Class UClothConfigBase

// Begin Class UDEPRECATED_ClothSharedSimConfigBase
void UDEPRECATED_ClothSharedSimConfigBase::StaticRegisterNativesUDEPRECATED_ClothSharedSimConfigBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDEPRECATED_ClothSharedSimConfigBase);
UClass* Z_Construct_UClass_UDEPRECATED_ClothSharedSimConfigBase_NoRegister()
{
	return UDEPRECATED_ClothSharedSimConfigBase::StaticClass();
}
struct Z_Construct_UClass_UDEPRECATED_ClothSharedSimConfigBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * These settings are shared between all instances on a skeletal mesh\n * Deprecated, use UClothConfigBase instead.\n */" },
		{ "IncludePath", "ClothConfigBase.h" },
		{ "ModuleRelativePath", "Public/ClothConfigBase.h" },
		{ "ToolTip", "These settings are shared between all instances on a skeletal mesh\nDeprecated, use UClothConfigBase instead." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDEPRECATED_ClothSharedSimConfigBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDEPRECATED_ClothSharedSimConfigBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ClothingSystemRuntimeInterface,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_ClothSharedSimConfigBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDEPRECATED_ClothSharedSimConfigBase_Statics::ClassParams = {
	&UDEPRECATED_ClothSharedSimConfigBase::StaticClass,
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
	0x020802A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_ClothSharedSimConfigBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UDEPRECATED_ClothSharedSimConfigBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDEPRECATED_ClothSharedSimConfigBase()
{
	if (!Z_Registration_Info_UClass_UDEPRECATED_ClothSharedSimConfigBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDEPRECATED_ClothSharedSimConfigBase.OuterSingleton, Z_Construct_UClass_UDEPRECATED_ClothSharedSimConfigBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDEPRECATED_ClothSharedSimConfigBase.OuterSingleton;
}
template<> CLOTHINGSYSTEMRUNTIMEINTERFACE_API UClass* StaticClass<UDEPRECATED_ClothSharedSimConfigBase>()
{
	return UDEPRECATED_ClothSharedSimConfigBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDEPRECATED_ClothSharedSimConfigBase);
// End Class UDEPRECATED_ClothSharedSimConfigBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothConfigBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UClothConfigBase, UClothConfigBase::StaticClass, TEXT("UClothConfigBase"), &Z_Registration_Info_UClass_UClothConfigBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UClothConfigBase), 4070142075U) },
		{ Z_Construct_UClass_UDEPRECATED_ClothSharedSimConfigBase, UDEPRECATED_ClothSharedSimConfigBase::StaticClass, TEXT("UDEPRECATED_ClothSharedSimConfigBase"), &Z_Registration_Info_UClass_UDEPRECATED_ClothSharedSimConfigBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDEPRECATED_ClothSharedSimConfigBase), 2739538061U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothConfigBase_h_105357615(TEXT("/Script/ClothingSystemRuntimeInterface"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothConfigBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothConfigBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
