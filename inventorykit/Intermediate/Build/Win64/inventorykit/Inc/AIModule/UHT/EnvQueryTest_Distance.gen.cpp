// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/Tests/EnvQueryTest_Distance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvQueryTest_Distance() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryContext_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryTest();
AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryTest_Distance();
AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryTest_Distance_NoRegister();
AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EEnvTestDistance();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References

// Begin Enum EEnvTestDistance
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEnvTestDistance;
static UEnum* EEnvTestDistance_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EEnvTestDistance.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EEnvTestDistance.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EEnvTestDistance, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("EEnvTestDistance"));
	}
	return Z_Registration_Info_UEnum_EEnvTestDistance.OuterSingleton;
}
template<> AIMODULE_API UEnum* StaticEnum<EEnvTestDistance::Type>()
{
	return EEnvTestDistance_StaticEnum();
}
struct Z_Construct_UEnum_AIModule_EEnvTestDistance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Distance2D.Name", "EEnvTestDistance::Distance2D" },
		{ "Distance3D.Name", "EEnvTestDistance::Distance3D" },
		{ "DistanceAbsoluteZ.DisplayName", "Distance Z (Absolute)" },
		{ "DistanceAbsoluteZ.Name", "EEnvTestDistance::DistanceAbsoluteZ" },
		{ "DistanceZ.Name", "EEnvTestDistance::DistanceZ" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Tests/EnvQueryTest_Distance.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EEnvTestDistance::Distance3D", (int64)EEnvTestDistance::Distance3D },
		{ "EEnvTestDistance::Distance2D", (int64)EEnvTestDistance::Distance2D },
		{ "EEnvTestDistance::DistanceZ", (int64)EEnvTestDistance::DistanceZ },
		{ "EEnvTestDistance::DistanceAbsoluteZ", (int64)EEnvTestDistance::DistanceAbsoluteZ },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AIModule_EEnvTestDistance_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
	nullptr,
	"EEnvTestDistance",
	"EEnvTestDistance::Type",
	Z_Construct_UEnum_AIModule_EEnvTestDistance_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EEnvTestDistance_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EEnvTestDistance_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AIModule_EEnvTestDistance_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AIModule_EEnvTestDistance()
{
	if (!Z_Registration_Info_UEnum_EEnvTestDistance.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEnvTestDistance.InnerSingleton, Z_Construct_UEnum_AIModule_EEnvTestDistance_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EEnvTestDistance.InnerSingleton;
}
// End Enum EEnvTestDistance

// Begin Class UEnvQueryTest_Distance
void UEnvQueryTest_Distance::StaticRegisterNativesUEnvQueryTest_Distance()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnvQueryTest_Distance);
UClass* Z_Construct_UClass_UEnvQueryTest_Distance_NoRegister()
{
	return UEnvQueryTest_Distance::StaticClass();
}
struct Z_Construct_UClass_UEnvQueryTest_Distance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "EnvironmentQuery/Tests/EnvQueryTest_Distance.h" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Tests/EnvQueryTest_Distance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TestMode_MetaData[] = {
		{ "Category", "Distance" },
		{ "Comment", "/** testing mode */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Tests/EnvQueryTest_Distance.h" },
		{ "ToolTip", "testing mode" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceTo_MetaData[] = {
		{ "Category", "Distance" },
		{ "Comment", "/** context */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Tests/EnvQueryTest_Distance.h" },
		{ "ToolTip", "context" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_TestMode;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DistanceTo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnvQueryTest_Distance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEnvQueryTest_Distance_Statics::NewProp_TestMode = { "TestMode", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvQueryTest_Distance, TestMode), Z_Construct_UEnum_AIModule_EEnvTestDistance, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TestMode_MetaData), NewProp_TestMode_MetaData) }; // 623054812
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEnvQueryTest_Distance_Statics::NewProp_DistanceTo = { "DistanceTo", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvQueryTest_Distance, DistanceTo), Z_Construct_UClass_UClass, Z_Construct_UClass_UEnvQueryContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceTo_MetaData), NewProp_DistanceTo_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnvQueryTest_Distance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_Distance_Statics::NewProp_TestMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_Distance_Statics::NewProp_DistanceTo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_Distance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEnvQueryTest_Distance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEnvQueryTest,
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_Distance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnvQueryTest_Distance_Statics::ClassParams = {
	&UEnvQueryTest_Distance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UEnvQueryTest_Distance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_Distance_Statics::PropPointers),
	0,
	0x008000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_Distance_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnvQueryTest_Distance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEnvQueryTest_Distance()
{
	if (!Z_Registration_Info_UClass_UEnvQueryTest_Distance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnvQueryTest_Distance.OuterSingleton, Z_Construct_UClass_UEnvQueryTest_Distance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEnvQueryTest_Distance.OuterSingleton;
}
template<> AIMODULE_API UClass* StaticClass<UEnvQueryTest_Distance>()
{
	return UEnvQueryTest_Distance::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQueryTest_Distance);
UEnvQueryTest_Distance::~UEnvQueryTest_Distance() {}
// End Class UEnvQueryTest_Distance

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Distance_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EEnvTestDistance_StaticEnum, TEXT("EEnvTestDistance"), &Z_Registration_Info_UEnum_EEnvTestDistance, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 623054812U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEnvQueryTest_Distance, UEnvQueryTest_Distance::StaticClass, TEXT("UEnvQueryTest_Distance"), &Z_Registration_Info_UClass_UEnvQueryTest_Distance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnvQueryTest_Distance), 448381653U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Distance_h_3201814539(TEXT("/Script/AIModule"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Distance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Distance_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Distance_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Distance_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
