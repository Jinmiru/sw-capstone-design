// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryGenerator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvQueryGenerator() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryGenerator();
AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryGenerator_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryItemType_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryNode();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References

// Begin Class UEnvQueryGenerator
void UEnvQueryGenerator::StaticRegisterNativesUEnvQueryGenerator()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnvQueryGenerator);
UClass* Z_Construct_UClass_UEnvQueryGenerator_NoRegister()
{
	return UEnvQueryGenerator::StaticClass();
}
struct Z_Construct_UClass_UEnvQueryGenerator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Generators" },
		{ "IncludePath", "EnvironmentQuery/EnvQueryGenerator.h" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OptionName_MetaData[] = {
		{ "Category", "Option" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemType_MetaData[] = {
		{ "Comment", "/** type of generated items */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryGenerator.h" },
		{ "ToolTip", "type of generated items" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoSortTests_MetaData[] = {
		{ "Category", "Option" },
		{ "Comment", "/** if set, tests will be automatically sorted for best performance before running query */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryGenerator.h" },
		{ "ToolTip", "if set, tests will be automatically sorted for best performance before running query" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_OptionName;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ItemType;
	static void NewProp_bAutoSortTests_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoSortTests;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnvQueryGenerator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEnvQueryGenerator_Statics::NewProp_OptionName = { "OptionName", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvQueryGenerator, OptionName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OptionName_MetaData), NewProp_OptionName_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEnvQueryGenerator_Statics::NewProp_ItemType = { "ItemType", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvQueryGenerator, ItemType), Z_Construct_UClass_UClass, Z_Construct_UClass_UEnvQueryItemType_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemType_MetaData), NewProp_ItemType_MetaData) };
void Z_Construct_UClass_UEnvQueryGenerator_Statics::NewProp_bAutoSortTests_SetBit(void* Obj)
{
	((UEnvQueryGenerator*)Obj)->bAutoSortTests = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEnvQueryGenerator_Statics::NewProp_bAutoSortTests = { "bAutoSortTests", nullptr, (EPropertyFlags)0x0010040000010001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UEnvQueryGenerator), &Z_Construct_UClass_UEnvQueryGenerator_Statics::NewProp_bAutoSortTests_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoSortTests_MetaData), NewProp_bAutoSortTests_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnvQueryGenerator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_Statics::NewProp_OptionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_Statics::NewProp_ItemType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_Statics::NewProp_bAutoSortTests,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEnvQueryGenerator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEnvQueryNode,
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnvQueryGenerator_Statics::ClassParams = {
	&UEnvQueryGenerator::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UEnvQueryGenerator_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_Statics::PropPointers),
	0,
	0x000810A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnvQueryGenerator_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEnvQueryGenerator()
{
	if (!Z_Registration_Info_UClass_UEnvQueryGenerator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnvQueryGenerator.OuterSingleton, Z_Construct_UClass_UEnvQueryGenerator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEnvQueryGenerator.OuterSingleton;
}
template<> AIMODULE_API UClass* StaticClass<UEnvQueryGenerator>()
{
	return UEnvQueryGenerator::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQueryGenerator);
UEnvQueryGenerator::~UEnvQueryGenerator() {}
// End Class UEnvQueryGenerator

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryGenerator_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEnvQueryGenerator, UEnvQueryGenerator::StaticClass, TEXT("UEnvQueryGenerator"), &Z_Registration_Info_UClass_UEnvQueryGenerator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnvQueryGenerator), 4126339658U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryGenerator_h_3243310427(TEXT("/Script/AIModule"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryGenerator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryGenerator_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
