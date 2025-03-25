// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/Generators/EnvQueryGenerator_ProjectedPoints.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvQueryGenerator_ProjectedPoints() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryGenerator();
AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryGenerator_ProjectedPoints();
AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryGenerator_ProjectedPoints_NoRegister();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FEnvTraceData();
UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References

// Begin Class UEnvQueryGenerator_ProjectedPoints
void UEnvQueryGenerator_ProjectedPoints::StaticRegisterNativesUEnvQueryGenerator_ProjectedPoints()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnvQueryGenerator_ProjectedPoints);
UClass* Z_Construct_UClass_UEnvQueryGenerator_ProjectedPoints_NoRegister()
{
	return UEnvQueryGenerator_ProjectedPoints::StaticClass();
}
struct Z_Construct_UClass_UEnvQueryGenerator_ProjectedPoints_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "EnvironmentQuery/Generators/EnvQueryGenerator_ProjectedPoints.h" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_ProjectedPoints.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectionData_MetaData[] = {
		{ "Category", "Generator" },
		{ "Comment", "/** trace params */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_ProjectedPoints.h" },
		{ "ToolTip", "trace params" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ProjectionData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnvQueryGenerator_ProjectedPoints>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnvQueryGenerator_ProjectedPoints_Statics::NewProp_ProjectionData = { "ProjectionData", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvQueryGenerator_ProjectedPoints, ProjectionData), Z_Construct_UScriptStruct_FEnvTraceData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectionData_MetaData), NewProp_ProjectionData_MetaData) }; // 2349835990
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnvQueryGenerator_ProjectedPoints_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_ProjectedPoints_Statics::NewProp_ProjectionData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_ProjectedPoints_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEnvQueryGenerator_ProjectedPoints_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEnvQueryGenerator,
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_ProjectedPoints_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnvQueryGenerator_ProjectedPoints_Statics::ClassParams = {
	&UEnvQueryGenerator_ProjectedPoints::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UEnvQueryGenerator_ProjectedPoints_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_ProjectedPoints_Statics::PropPointers),
	0,
	0x000810A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_ProjectedPoints_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnvQueryGenerator_ProjectedPoints_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEnvQueryGenerator_ProjectedPoints()
{
	if (!Z_Registration_Info_UClass_UEnvQueryGenerator_ProjectedPoints.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnvQueryGenerator_ProjectedPoints.OuterSingleton, Z_Construct_UClass_UEnvQueryGenerator_ProjectedPoints_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEnvQueryGenerator_ProjectedPoints.OuterSingleton;
}
template<> AIMODULE_API UClass* StaticClass<UEnvQueryGenerator_ProjectedPoints>()
{
	return UEnvQueryGenerator_ProjectedPoints::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQueryGenerator_ProjectedPoints);
UEnvQueryGenerator_ProjectedPoints::~UEnvQueryGenerator_ProjectedPoints() {}
// End Class UEnvQueryGenerator_ProjectedPoints

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_ProjectedPoints_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEnvQueryGenerator_ProjectedPoints, UEnvQueryGenerator_ProjectedPoints::StaticClass, TEXT("UEnvQueryGenerator_ProjectedPoints"), &Z_Registration_Info_UClass_UEnvQueryGenerator_ProjectedPoints, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnvQueryGenerator_ProjectedPoints), 613735161U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_ProjectedPoints_h_1884861305(TEXT("/Script/AIModule"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_ProjectedPoints_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_ProjectedPoints_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
