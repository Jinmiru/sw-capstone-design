// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/Generators/EnvQueryGenerator_Cone.h"
#include "Runtime/AIModule/Classes/DataProviders/AIDataProvider.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvQueryGenerator_Cone() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryContext_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryGenerator_Cone();
AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryGenerator_Cone_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryGenerator_ProjectedPoints();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIDataProviderFloatValue();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References

// Begin Class UEnvQueryGenerator_Cone
void UEnvQueryGenerator_Cone::StaticRegisterNativesUEnvQueryGenerator_Cone()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnvQueryGenerator_Cone);
UClass* Z_Construct_UClass_UEnvQueryGenerator_Cone_NoRegister()
{
	return UEnvQueryGenerator_Cone::StaticClass();
}
struct Z_Construct_UClass_UEnvQueryGenerator_Cone_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Points: Cone" },
		{ "IncludePath", "EnvironmentQuery/Generators/EnvQueryGenerator_Cone.h" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_Cone.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AlignedPointsDistance_MetaData[] = {
		{ "Category", "Generator" },
		{ "Comment", "/** Distance between each point of the same angle */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_Cone.h" },
		{ "ToolTip", "Distance between each point of the same angle" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConeDegrees_MetaData[] = {
		{ "Category", "Generator" },
		{ "Comment", "/** Maximum degrees of the generated cone */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_Cone.h" },
		{ "ToolTip", "Maximum degrees of the generated cone" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngleStep_MetaData[] = {
		{ "Category", "Generator" },
		{ "Comment", "/** The step of the angle increase. Angle step must be >=1\n\x09 *  Smaller values generate less items\n\x09 */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_Cone.h" },
		{ "ToolTip", "The step of the angle increase. Angle step must be >=1\nSmaller values generate less items" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Range_MetaData[] = {
		{ "Category", "Generator" },
		{ "Comment", "/** Generation distance */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_Cone.h" },
		{ "ToolTip", "Generation distance" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CenterActor_MetaData[] = {
		{ "Category", "Generator" },
		{ "Comment", "/** The actor (or actors) that will generate a cone in their facing direction */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_Cone.h" },
		{ "ToolTip", "The actor (or actors) that will generate a cone in their facing direction" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeContextLocation_MetaData[] = {
		{ "Category", "Generator" },
		{ "Comment", "/** Whether to include CenterActors' locations when generating items. \n\x09 *\x09Note that this option skips the MinAngledPointsDistance parameter. */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_Cone.h" },
		{ "ToolTip", "Whether to include CenterActors' locations when generating items.\n    Note that this option skips the MinAngledPointsDistance parameter." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AlignedPointsDistance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ConeDegrees;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AngleStep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Range;
	static const UECodeGen_Private::FClassPropertyParams NewProp_CenterActor;
	static void NewProp_bIncludeContextLocation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeContextLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnvQueryGenerator_Cone>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnvQueryGenerator_Cone_Statics::NewProp_AlignedPointsDistance = { "AlignedPointsDistance", nullptr, (EPropertyFlags)0x0020088000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvQueryGenerator_Cone, AlignedPointsDistance), Z_Construct_UScriptStruct_FAIDataProviderFloatValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AlignedPointsDistance_MetaData), NewProp_AlignedPointsDistance_MetaData) }; // 1384630506
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnvQueryGenerator_Cone_Statics::NewProp_ConeDegrees = { "ConeDegrees", nullptr, (EPropertyFlags)0x0020088000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvQueryGenerator_Cone, ConeDegrees), Z_Construct_UScriptStruct_FAIDataProviderFloatValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConeDegrees_MetaData), NewProp_ConeDegrees_MetaData) }; // 1384630506
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnvQueryGenerator_Cone_Statics::NewProp_AngleStep = { "AngleStep", nullptr, (EPropertyFlags)0x0020088000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvQueryGenerator_Cone, AngleStep), Z_Construct_UScriptStruct_FAIDataProviderFloatValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngleStep_MetaData), NewProp_AngleStep_MetaData) }; // 1384630506
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnvQueryGenerator_Cone_Statics::NewProp_Range = { "Range", nullptr, (EPropertyFlags)0x0020088000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvQueryGenerator_Cone, Range), Z_Construct_UScriptStruct_FAIDataProviderFloatValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Range_MetaData), NewProp_Range_MetaData) }; // 1384630506
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEnvQueryGenerator_Cone_Statics::NewProp_CenterActor = { "CenterActor", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvQueryGenerator_Cone, CenterActor), Z_Construct_UClass_UClass, Z_Construct_UClass_UEnvQueryContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CenterActor_MetaData), NewProp_CenterActor_MetaData) };
void Z_Construct_UClass_UEnvQueryGenerator_Cone_Statics::NewProp_bIncludeContextLocation_SetBit(void* Obj)
{
	((UEnvQueryGenerator_Cone*)Obj)->bIncludeContextLocation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEnvQueryGenerator_Cone_Statics::NewProp_bIncludeContextLocation = { "bIncludeContextLocation", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UEnvQueryGenerator_Cone), &Z_Construct_UClass_UEnvQueryGenerator_Cone_Statics::NewProp_bIncludeContextLocation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIncludeContextLocation_MetaData), NewProp_bIncludeContextLocation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnvQueryGenerator_Cone_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_Cone_Statics::NewProp_AlignedPointsDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_Cone_Statics::NewProp_ConeDegrees,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_Cone_Statics::NewProp_AngleStep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_Cone_Statics::NewProp_Range,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_Cone_Statics::NewProp_CenterActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_Cone_Statics::NewProp_bIncludeContextLocation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_Cone_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEnvQueryGenerator_Cone_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEnvQueryGenerator_ProjectedPoints,
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_Cone_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnvQueryGenerator_Cone_Statics::ClassParams = {
	&UEnvQueryGenerator_Cone::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UEnvQueryGenerator_Cone_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_Cone_Statics::PropPointers),
	0,
	0x008810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_Cone_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnvQueryGenerator_Cone_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEnvQueryGenerator_Cone()
{
	if (!Z_Registration_Info_UClass_UEnvQueryGenerator_Cone.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnvQueryGenerator_Cone.OuterSingleton, Z_Construct_UClass_UEnvQueryGenerator_Cone_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEnvQueryGenerator_Cone.OuterSingleton;
}
template<> AIMODULE_API UClass* StaticClass<UEnvQueryGenerator_Cone>()
{
	return UEnvQueryGenerator_Cone::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQueryGenerator_Cone);
UEnvQueryGenerator_Cone::~UEnvQueryGenerator_Cone() {}
// End Class UEnvQueryGenerator_Cone

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_Cone_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEnvQueryGenerator_Cone, UEnvQueryGenerator_Cone::StaticClass, TEXT("UEnvQueryGenerator_Cone"), &Z_Registration_Info_UClass_UEnvQueryGenerator_Cone, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnvQueryGenerator_Cone), 4273298859U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_Cone_h_652310366(TEXT("/Script/AIModule"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_Cone_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_Cone_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
