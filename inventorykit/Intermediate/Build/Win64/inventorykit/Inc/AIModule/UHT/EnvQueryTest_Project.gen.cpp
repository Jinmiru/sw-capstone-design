// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/Tests/EnvQueryTest_Project.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvQueryTest_Project() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryTest();
AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryTest_Project();
AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryTest_Project_NoRegister();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FEnvTraceData();
UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References

// Begin Class UEnvQueryTest_Project
void UEnvQueryTest_Project::StaticRegisterNativesUEnvQueryTest_Project()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnvQueryTest_Project);
UClass* Z_Construct_UClass_UEnvQueryTest_Project_NoRegister()
{
	return UEnvQueryTest_Project::StaticClass();
}
struct Z_Construct_UClass_UEnvQueryTest_Project_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Projects points on navigation or geometry, will modify value of projected items.\n * Works only on item type: point\n */" },
		{ "IncludePath", "EnvironmentQuery/Tests/EnvQueryTest_Project.h" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Tests/EnvQueryTest_Project.h" },
		{ "ToolTip", "Projects points on navigation or geometry, will modify value of projected items.\nWorks only on item type: point" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectionData_MetaData[] = {
		{ "Category", "Test" },
		{ "Comment", "/** trace params */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Tests/EnvQueryTest_Project.h" },
		{ "ToolTip", "trace params" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ProjectionData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnvQueryTest_Project>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnvQueryTest_Project_Statics::NewProp_ProjectionData = { "ProjectionData", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvQueryTest_Project, ProjectionData), Z_Construct_UScriptStruct_FEnvTraceData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectionData_MetaData), NewProp_ProjectionData_MetaData) }; // 2349835990
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnvQueryTest_Project_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_Project_Statics::NewProp_ProjectionData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_Project_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEnvQueryTest_Project_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEnvQueryTest,
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_Project_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnvQueryTest_Project_Statics::ClassParams = {
	&UEnvQueryTest_Project::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UEnvQueryTest_Project_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_Project_Statics::PropPointers),
	0,
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_Project_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnvQueryTest_Project_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEnvQueryTest_Project()
{
	if (!Z_Registration_Info_UClass_UEnvQueryTest_Project.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnvQueryTest_Project.OuterSingleton, Z_Construct_UClass_UEnvQueryTest_Project_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEnvQueryTest_Project.OuterSingleton;
}
template<> AIMODULE_API UClass* StaticClass<UEnvQueryTest_Project>()
{
	return UEnvQueryTest_Project::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQueryTest_Project);
UEnvQueryTest_Project::~UEnvQueryTest_Project() {}
// End Class UEnvQueryTest_Project

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Project_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEnvQueryTest_Project, UEnvQueryTest_Project::StaticClass, TEXT("UEnvQueryTest_Project"), &Z_Registration_Info_UClass_UEnvQueryTest_Project, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnvQueryTest_Project), 2119521911U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Project_h_2459112426(TEXT("/Script/AIModule"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Project_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Project_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
