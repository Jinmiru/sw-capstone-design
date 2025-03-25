// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/Tests/EnvQueryTest_Overlap.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvQueryTest_Overlap() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryTest();
AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryTest_Overlap();
AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryTest_Overlap_NoRegister();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FEnvOverlapData();
UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References

// Begin Class UEnvQueryTest_Overlap
void UEnvQueryTest_Overlap::StaticRegisterNativesUEnvQueryTest_Overlap()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnvQueryTest_Overlap);
UClass* Z_Construct_UClass_UEnvQueryTest_Overlap_NoRegister()
{
	return UEnvQueryTest_Overlap::StaticClass();
}
struct Z_Construct_UClass_UEnvQueryTest_Overlap_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "EnvironmentQuery/Tests/EnvQueryTest_Overlap.h" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Tests/EnvQueryTest_Overlap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlapData_MetaData[] = {
		{ "Category", "Overlap" },
		{ "Comment", "/** Overlap data */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Tests/EnvQueryTest_Overlap.h" },
		{ "ToolTip", "Overlap data" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OverlapData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnvQueryTest_Overlap>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnvQueryTest_Overlap_Statics::NewProp_OverlapData = { "OverlapData", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvQueryTest_Overlap, OverlapData), Z_Construct_UScriptStruct_FEnvOverlapData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlapData_MetaData), NewProp_OverlapData_MetaData) }; // 4076055967
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnvQueryTest_Overlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_Overlap_Statics::NewProp_OverlapData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_Overlap_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEnvQueryTest_Overlap_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEnvQueryTest,
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_Overlap_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnvQueryTest_Overlap_Statics::ClassParams = {
	&UEnvQueryTest_Overlap::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UEnvQueryTest_Overlap_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_Overlap_Statics::PropPointers),
	0,
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_Overlap_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnvQueryTest_Overlap_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEnvQueryTest_Overlap()
{
	if (!Z_Registration_Info_UClass_UEnvQueryTest_Overlap.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnvQueryTest_Overlap.OuterSingleton, Z_Construct_UClass_UEnvQueryTest_Overlap_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEnvQueryTest_Overlap.OuterSingleton;
}
template<> AIMODULE_API UClass* StaticClass<UEnvQueryTest_Overlap>()
{
	return UEnvQueryTest_Overlap::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQueryTest_Overlap);
UEnvQueryTest_Overlap::~UEnvQueryTest_Overlap() {}
// End Class UEnvQueryTest_Overlap

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Overlap_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEnvQueryTest_Overlap, UEnvQueryTest_Overlap::StaticClass, TEXT("UEnvQueryTest_Overlap"), &Z_Registration_Info_UClass_UEnvQueryTest_Overlap, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnvQueryTest_Overlap), 1254763688U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Overlap_h_566466909(TEXT("/Script/AIModule"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Overlap_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Overlap_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
