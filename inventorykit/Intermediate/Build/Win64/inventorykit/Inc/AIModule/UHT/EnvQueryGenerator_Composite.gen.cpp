// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/Generators/EnvQueryGenerator_Composite.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvQueryGenerator_Composite() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryGenerator();
AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryGenerator_Composite();
AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryGenerator_Composite_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryGenerator_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryItemType_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References

// Begin Class UEnvQueryGenerator_Composite
void UEnvQueryGenerator_Composite::StaticRegisterNativesUEnvQueryGenerator_Composite()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnvQueryGenerator_Composite);
UClass* Z_Construct_UClass_UEnvQueryGenerator_Composite_NoRegister()
{
	return UEnvQueryGenerator_Composite::StaticClass();
}
struct Z_Construct_UClass_UEnvQueryGenerator_Composite_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Composite generator allows using multiple generators in single query option\n * All child generators must produce exactly the same item type!\n */" },
		{ "DisplayName", "Composite" },
		{ "IncludePath", "EnvironmentQuery/Generators/EnvQueryGenerator_Composite.h" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_Composite.h" },
		{ "ToolTip", "Composite generator allows using multiple generators in single query option\nAll child generators must produce exactly the same item type!" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Generators_Inner_MetaData[] = {
		{ "Category", "Generator" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_Composite.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Generators_MetaData[] = {
		{ "Category", "Generator" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_Composite.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowDifferentItemTypes_MetaData[] = {
		{ "Category", "Generator" },
		{ "Comment", "/** allow generators with different item types, use at own risk!\n\x09 *\n\x09 *  WARNING: \n\x09 *  generator will use ForcedItemType for raw data, you MUST ensure proper memory layout\n\x09 *  child generators will be writing to memory block through their own item types:\n\x09 *  - data must fit info block allocated by ForcedItemType\n\x09 *  - tests will read item location/properties through ForcedItemType\n\x09 */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_Composite.h" },
		{ "ToolTip", "allow generators with different item types, use at own risk!\n\nWARNING:\ngenerator will use ForcedItemType for raw data, you MUST ensure proper memory layout\nchild generators will be writing to memory block through their own item types:\n- data must fit info block allocated by ForcedItemType\n- tests will read item location/properties through ForcedItemType" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasMatchingItemType_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_Composite.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForcedItemType_MetaData[] = {
		{ "Category", "Generator" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_Composite.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Generators_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Generators;
	static void NewProp_bAllowDifferentItemTypes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowDifferentItemTypes;
	static void NewProp_bHasMatchingItemType_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasMatchingItemType;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ForcedItemType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnvQueryGenerator_Composite>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnvQueryGenerator_Composite_Statics::NewProp_Generators_Inner = { "Generators", nullptr, (EPropertyFlags)0x0106000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UEnvQueryGenerator_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Generators_Inner_MetaData), NewProp_Generators_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEnvQueryGenerator_Composite_Statics::NewProp_Generators = { "Generators", nullptr, (EPropertyFlags)0x0114008000010009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvQueryGenerator_Composite, Generators), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Generators_MetaData), NewProp_Generators_MetaData) };
void Z_Construct_UClass_UEnvQueryGenerator_Composite_Statics::NewProp_bAllowDifferentItemTypes_SetBit(void* Obj)
{
	((UEnvQueryGenerator_Composite*)Obj)->bAllowDifferentItemTypes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEnvQueryGenerator_Composite_Statics::NewProp_bAllowDifferentItemTypes = { "bAllowDifferentItemTypes", nullptr, (EPropertyFlags)0x0010040000010001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UEnvQueryGenerator_Composite), &Z_Construct_UClass_UEnvQueryGenerator_Composite_Statics::NewProp_bAllowDifferentItemTypes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowDifferentItemTypes_MetaData), NewProp_bAllowDifferentItemTypes_MetaData) };
void Z_Construct_UClass_UEnvQueryGenerator_Composite_Statics::NewProp_bHasMatchingItemType_SetBit(void* Obj)
{
	((UEnvQueryGenerator_Composite*)Obj)->bHasMatchingItemType = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEnvQueryGenerator_Composite_Statics::NewProp_bHasMatchingItemType = { "bHasMatchingItemType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UEnvQueryGenerator_Composite), &Z_Construct_UClass_UEnvQueryGenerator_Composite_Statics::NewProp_bHasMatchingItemType_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasMatchingItemType_MetaData), NewProp_bHasMatchingItemType_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEnvQueryGenerator_Composite_Statics::NewProp_ForcedItemType = { "ForcedItemType", nullptr, (EPropertyFlags)0x0014040000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvQueryGenerator_Composite, ForcedItemType), Z_Construct_UClass_UClass, Z_Construct_UClass_UEnvQueryItemType_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForcedItemType_MetaData), NewProp_ForcedItemType_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnvQueryGenerator_Composite_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_Composite_Statics::NewProp_Generators_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_Composite_Statics::NewProp_Generators,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_Composite_Statics::NewProp_bAllowDifferentItemTypes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_Composite_Statics::NewProp_bHasMatchingItemType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_Composite_Statics::NewProp_ForcedItemType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_Composite_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEnvQueryGenerator_Composite_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEnvQueryGenerator,
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_Composite_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnvQueryGenerator_Composite_Statics::ClassParams = {
	&UEnvQueryGenerator_Composite::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UEnvQueryGenerator_Composite_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_Composite_Statics::PropPointers),
	0,
	0x008810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_Composite_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnvQueryGenerator_Composite_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEnvQueryGenerator_Composite()
{
	if (!Z_Registration_Info_UClass_UEnvQueryGenerator_Composite.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnvQueryGenerator_Composite.OuterSingleton, Z_Construct_UClass_UEnvQueryGenerator_Composite_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEnvQueryGenerator_Composite.OuterSingleton;
}
template<> AIMODULE_API UClass* StaticClass<UEnvQueryGenerator_Composite>()
{
	return UEnvQueryGenerator_Composite::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQueryGenerator_Composite);
UEnvQueryGenerator_Composite::~UEnvQueryGenerator_Composite() {}
// End Class UEnvQueryGenerator_Composite

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_Composite_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEnvQueryGenerator_Composite, UEnvQueryGenerator_Composite::StaticClass, TEXT("UEnvQueryGenerator_Composite"), &Z_Registration_Info_UClass_UEnvQueryGenerator_Composite, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnvQueryGenerator_Composite), 2563420157U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_Composite_h_3997083923(TEXT("/Script/AIModule"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_Composite_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_Composite_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
