// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryTypes.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvQueryTypes() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UEnvQuery_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryContext_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryItemType_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryTypes();
AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryTypes_NoRegister();
AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EAIParamType();
AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EEnvDirection();
AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EEnvOverlapShape();
AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EEnvQueryParam();
AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EEnvQueryRunMode();
AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EEnvQueryStatus();
AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EEnvQueryTestClamping();
AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EEnvQueryTrace();
AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EEnvTestCost();
AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EEnvTestFilterOperator();
AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EEnvTestFilterType();
AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EEnvTestPurpose();
AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EEnvTestScoreEquation();
AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EEnvTestScoreOperator();
AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EEnvTestWeight();
AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EEnvTraceShape();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIDynamicParam();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FEnvDirection();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FEnvNamedValue();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FEnvOverlapData();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FEnvQueryResult();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FEnvTraceData();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FEQSParametrizedQueryExecutionRequest();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETraceTypeQuery();
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavigationQueryFilter_NoRegister();
UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References

// Begin Enum EEnvTestPurpose
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEnvTestPurpose;
static UEnum* EEnvTestPurpose_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EEnvTestPurpose.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EEnvTestPurpose.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EEnvTestPurpose, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("EEnvTestPurpose"));
	}
	return Z_Registration_Info_UEnum_EEnvTestPurpose.OuterSingleton;
}
template<> AIMODULE_API UEnum* StaticEnum<EEnvTestPurpose::Type>()
{
	return EEnvTestPurpose_StaticEnum();
}
struct Z_Construct_UEnum_AIModule_EEnvTestPurpose_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Filter.DisplayName", "Filter Only" },
		{ "Filter.Name", "EEnvTestPurpose::Filter" },
		{ "FilterAndScore.DisplayName", "Filter and Score" },
		{ "FilterAndScore.Name", "EEnvTestPurpose::FilterAndScore" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
		{ "Score.DisplayName", "Score Only" },
		{ "Score.Name", "EEnvTestPurpose::Score" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EEnvTestPurpose::Filter", (int64)EEnvTestPurpose::Filter },
		{ "EEnvTestPurpose::Score", (int64)EEnvTestPurpose::Score },
		{ "EEnvTestPurpose::FilterAndScore", (int64)EEnvTestPurpose::FilterAndScore },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AIModule_EEnvTestPurpose_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
	nullptr,
	"EEnvTestPurpose",
	"EEnvTestPurpose::Type",
	Z_Construct_UEnum_AIModule_EEnvTestPurpose_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EEnvTestPurpose_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EEnvTestPurpose_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AIModule_EEnvTestPurpose_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AIModule_EEnvTestPurpose()
{
	if (!Z_Registration_Info_UEnum_EEnvTestPurpose.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEnvTestPurpose.InnerSingleton, Z_Construct_UEnum_AIModule_EEnvTestPurpose_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EEnvTestPurpose.InnerSingleton;
}
// End Enum EEnvTestPurpose

// Begin Enum EEnvTestFilterType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEnvTestFilterType;
static UEnum* EEnvTestFilterType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EEnvTestFilterType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EEnvTestFilterType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EEnvTestFilterType, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("EEnvTestFilterType"));
	}
	return Z_Registration_Info_UEnum_EEnvTestFilterType.OuterSingleton;
}
template<> AIMODULE_API UEnum* StaticEnum<EEnvTestFilterType::Type>()
{
	return EEnvTestFilterType_StaticEnum();
}
struct Z_Construct_UEnum_AIModule_EEnvTestFilterType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Match.Comment", "/** For Boolean tests. */" },
		{ "Match.Name", "EEnvTestFilterType::Match" },
		{ "Match.ToolTip", "For Boolean tests." },
		{ "Maximum.Comment", "/** For numeric tests. */" },
		{ "Maximum.Name", "EEnvTestFilterType::Maximum" },
		{ "Maximum.ToolTip", "For numeric tests." },
		{ "Minimum.Comment", "/** For numeric tests. */" },
		{ "Minimum.Name", "EEnvTestFilterType::Minimum" },
		{ "Minimum.ToolTip", "For numeric tests." },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
		{ "Range.Comment", "/** For numeric tests. */" },
		{ "Range.Name", "EEnvTestFilterType::Range" },
		{ "Range.ToolTip", "For numeric tests." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EEnvTestFilterType::Minimum", (int64)EEnvTestFilterType::Minimum },
		{ "EEnvTestFilterType::Maximum", (int64)EEnvTestFilterType::Maximum },
		{ "EEnvTestFilterType::Range", (int64)EEnvTestFilterType::Range },
		{ "EEnvTestFilterType::Match", (int64)EEnvTestFilterType::Match },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AIModule_EEnvTestFilterType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
	nullptr,
	"EEnvTestFilterType",
	"EEnvTestFilterType::Type",
	Z_Construct_UEnum_AIModule_EEnvTestFilterType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EEnvTestFilterType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EEnvTestFilterType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AIModule_EEnvTestFilterType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AIModule_EEnvTestFilterType()
{
	if (!Z_Registration_Info_UEnum_EEnvTestFilterType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEnvTestFilterType.InnerSingleton, Z_Construct_UEnum_AIModule_EEnvTestFilterType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EEnvTestFilterType.InnerSingleton;
}
// End Enum EEnvTestFilterType

// Begin Enum EEnvTestScoreEquation
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEnvTestScoreEquation;
static UEnum* EEnvTestScoreEquation_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EEnvTestScoreEquation.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EEnvTestScoreEquation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EEnvTestScoreEquation, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("EEnvTestScoreEquation"));
	}
	return Z_Registration_Info_UEnum_EEnvTestScoreEquation.OuterSingleton;
}
template<> AIMODULE_API UEnum* StaticEnum<EEnvTestScoreEquation::Type>()
{
	return EEnvTestScoreEquation_StaticEnum();
}
struct Z_Construct_UEnum_AIModule_EEnvTestScoreEquation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Constant.Name", "EEnvTestScoreEquation::Constant" },
		{ "InverseLinear.Name", "EEnvTestScoreEquation::InverseLinear" },
		{ "Linear.Name", "EEnvTestScoreEquation::Linear" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
		{ "Square.Name", "EEnvTestScoreEquation::Square" },
		{ "SquareRoot.Name", "EEnvTestScoreEquation::SquareRoot" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EEnvTestScoreEquation::Linear", (int64)EEnvTestScoreEquation::Linear },
		{ "EEnvTestScoreEquation::Square", (int64)EEnvTestScoreEquation::Square },
		{ "EEnvTestScoreEquation::InverseLinear", (int64)EEnvTestScoreEquation::InverseLinear },
		{ "EEnvTestScoreEquation::SquareRoot", (int64)EEnvTestScoreEquation::SquareRoot },
		{ "EEnvTestScoreEquation::Constant", (int64)EEnvTestScoreEquation::Constant },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AIModule_EEnvTestScoreEquation_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
	nullptr,
	"EEnvTestScoreEquation",
	"EEnvTestScoreEquation::Type",
	Z_Construct_UEnum_AIModule_EEnvTestScoreEquation_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EEnvTestScoreEquation_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EEnvTestScoreEquation_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AIModule_EEnvTestScoreEquation_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AIModule_EEnvTestScoreEquation()
{
	if (!Z_Registration_Info_UEnum_EEnvTestScoreEquation.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEnvTestScoreEquation.InnerSingleton, Z_Construct_UEnum_AIModule_EEnvTestScoreEquation_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EEnvTestScoreEquation.InnerSingleton;
}
// End Enum EEnvTestScoreEquation

// Begin Enum EEnvTestWeight
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEnvTestWeight;
static UEnum* EEnvTestWeight_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EEnvTestWeight.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EEnvTestWeight.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EEnvTestWeight, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("EEnvTestWeight"));
	}
	return Z_Registration_Info_UEnum_EEnvTestWeight.OuterSingleton;
}
template<> AIMODULE_API UEnum* StaticEnum<EEnvTestWeight::Type>()
{
	return EEnvTestWeight_StaticEnum();
}
struct Z_Construct_UEnum_AIModule_EEnvTestWeight_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Constant.Name", "EEnvTestWeight::Constant" },
		{ "Inverse.Name", "EEnvTestWeight::Inverse" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
		{ "None.Name", "EEnvTestWeight::None" },
		{ "Skip.DisplayName", "Do not weight" },
		{ "Skip.Name", "EEnvTestWeight::Skip" },
		{ "Square.Name", "EEnvTestWeight::Square" },
		{ "Unused.Hidden", "" },
		{ "Unused.Name", "EEnvTestWeight::Unused" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EEnvTestWeight::None", (int64)EEnvTestWeight::None },
		{ "EEnvTestWeight::Square", (int64)EEnvTestWeight::Square },
		{ "EEnvTestWeight::Inverse", (int64)EEnvTestWeight::Inverse },
		{ "EEnvTestWeight::Unused", (int64)EEnvTestWeight::Unused },
		{ "EEnvTestWeight::Constant", (int64)EEnvTestWeight::Constant },
		{ "EEnvTestWeight::Skip", (int64)EEnvTestWeight::Skip },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AIModule_EEnvTestWeight_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
	nullptr,
	"EEnvTestWeight",
	"EEnvTestWeight::Type",
	Z_Construct_UEnum_AIModule_EEnvTestWeight_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EEnvTestWeight_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EEnvTestWeight_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AIModule_EEnvTestWeight_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AIModule_EEnvTestWeight()
{
	if (!Z_Registration_Info_UEnum_EEnvTestWeight.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEnvTestWeight.InnerSingleton, Z_Construct_UEnum_AIModule_EEnvTestWeight_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EEnvTestWeight.InnerSingleton;
}
// End Enum EEnvTestWeight

// Begin Enum EEnvTestCost
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEnvTestCost;
static UEnum* EEnvTestCost_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EEnvTestCost.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EEnvTestCost.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EEnvTestCost, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("EEnvTestCost"));
	}
	return Z_Registration_Info_UEnum_EEnvTestCost.OuterSingleton;
}
template<> AIMODULE_API UEnum* StaticEnum<EEnvTestCost::Type>()
{
	return EEnvTestCost_StaticEnum();
}
struct Z_Construct_UEnum_AIModule_EEnvTestCost_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "High.Comment", "/** Really expensive calls (e.g. visibility traces, pathfinding).  */" },
		{ "High.Name", "EEnvTestCost::High" },
		{ "High.ToolTip", "Really expensive calls (e.g. visibility traces, pathfinding)." },
		{ "Low.Comment", "/** Reading data, math operations (e.g. distance). */" },
		{ "Low.Name", "EEnvTestCost::Low" },
		{ "Low.ToolTip", "Reading data, math operations (e.g. distance)." },
		{ "Medium.Comment", "/** Processing data from multiple sources (e.g. fire tickets). */" },
		{ "Medium.Name", "EEnvTestCost::Medium" },
		{ "Medium.ToolTip", "Processing data from multiple sources (e.g. fire tickets)." },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EEnvTestCost::Low", (int64)EEnvTestCost::Low },
		{ "EEnvTestCost::Medium", (int64)EEnvTestCost::Medium },
		{ "EEnvTestCost::High", (int64)EEnvTestCost::High },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AIModule_EEnvTestCost_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
	nullptr,
	"EEnvTestCost",
	"EEnvTestCost::Type",
	Z_Construct_UEnum_AIModule_EEnvTestCost_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EEnvTestCost_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EEnvTestCost_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AIModule_EEnvTestCost_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AIModule_EEnvTestCost()
{
	if (!Z_Registration_Info_UEnum_EEnvTestCost.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEnvTestCost.InnerSingleton, Z_Construct_UEnum_AIModule_EEnvTestCost_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EEnvTestCost.InnerSingleton;
}
// End Enum EEnvTestCost

// Begin Enum EEnvTestFilterOperator
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEnvTestFilterOperator;
static UEnum* EEnvTestFilterOperator_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EEnvTestFilterOperator.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EEnvTestFilterOperator.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EEnvTestFilterOperator, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("EEnvTestFilterOperator"));
	}
	return Z_Registration_Info_UEnum_EEnvTestFilterOperator.OuterSingleton;
}
template<> AIMODULE_API UEnum* StaticEnum<EEnvTestFilterOperator::Type>()
{
	return EEnvTestFilterOperator_StaticEnum();
}
struct Z_Construct_UEnum_AIModule_EEnvTestFilterOperator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AllPass.Name", "EEnvTestFilterOperator::AllPass" },
		{ "AllPass.Tooltip", "All contexts must pass condition" },
		{ "AnyPass.Name", "EEnvTestFilterOperator::AnyPass" },
		{ "AnyPass.Tooltip", "At least one context must pass condition" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EEnvTestFilterOperator::AllPass", (int64)EEnvTestFilterOperator::AllPass },
		{ "EEnvTestFilterOperator::AnyPass", (int64)EEnvTestFilterOperator::AnyPass },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AIModule_EEnvTestFilterOperator_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
	nullptr,
	"EEnvTestFilterOperator",
	"EEnvTestFilterOperator::Type",
	Z_Construct_UEnum_AIModule_EEnvTestFilterOperator_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EEnvTestFilterOperator_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EEnvTestFilterOperator_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AIModule_EEnvTestFilterOperator_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AIModule_EEnvTestFilterOperator()
{
	if (!Z_Registration_Info_UEnum_EEnvTestFilterOperator.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEnvTestFilterOperator.InnerSingleton, Z_Construct_UEnum_AIModule_EEnvTestFilterOperator_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EEnvTestFilterOperator.InnerSingleton;
}
// End Enum EEnvTestFilterOperator

// Begin Enum EEnvTestScoreOperator
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEnvTestScoreOperator;
static UEnum* EEnvTestScoreOperator_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EEnvTestScoreOperator.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EEnvTestScoreOperator.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EEnvTestScoreOperator, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("EEnvTestScoreOperator"));
	}
	return Z_Registration_Info_UEnum_EEnvTestScoreOperator.OuterSingleton;
}
template<> AIMODULE_API UEnum* StaticEnum<EEnvTestScoreOperator::Type>()
{
	return EEnvTestScoreOperator_StaticEnum();
}
struct Z_Construct_UEnum_AIModule_EEnvTestScoreOperator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AverageScore.Name", "EEnvTestScoreOperator::AverageScore" },
		{ "AverageScore.Tooltip", "Use average score from all contexts" },
		{ "MaxScore.Name", "EEnvTestScoreOperator::MaxScore" },
		{ "MaxScore.Tooltip", "Use maximum score from all contexts" },
		{ "MinScore.Name", "EEnvTestScoreOperator::MinScore" },
		{ "MinScore.Tooltip", "Use minimum score from all contexts" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
		{ "Multiply.Name", "EEnvTestScoreOperator::Multiply" },
		{ "Multiply.Tooltip", "Multiply scores from all contexts" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EEnvTestScoreOperator::AverageScore", (int64)EEnvTestScoreOperator::AverageScore },
		{ "EEnvTestScoreOperator::MinScore", (int64)EEnvTestScoreOperator::MinScore },
		{ "EEnvTestScoreOperator::MaxScore", (int64)EEnvTestScoreOperator::MaxScore },
		{ "EEnvTestScoreOperator::Multiply", (int64)EEnvTestScoreOperator::Multiply },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AIModule_EEnvTestScoreOperator_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
	nullptr,
	"EEnvTestScoreOperator",
	"EEnvTestScoreOperator::Type",
	Z_Construct_UEnum_AIModule_EEnvTestScoreOperator_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EEnvTestScoreOperator_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EEnvTestScoreOperator_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AIModule_EEnvTestScoreOperator_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AIModule_EEnvTestScoreOperator()
{
	if (!Z_Registration_Info_UEnum_EEnvTestScoreOperator.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEnvTestScoreOperator.InnerSingleton, Z_Construct_UEnum_AIModule_EEnvTestScoreOperator_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EEnvTestScoreOperator.InnerSingleton;
}
// End Enum EEnvTestScoreOperator

// Begin Enum EEnvQueryStatus
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEnvQueryStatus;
static UEnum* EEnvQueryStatus_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EEnvQueryStatus.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EEnvQueryStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EEnvQueryStatus, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("EEnvQueryStatus"));
	}
	return Z_Registration_Info_UEnum_EEnvQueryStatus.OuterSingleton;
}
template<> AIMODULE_API UEnum* StaticEnum<EEnvQueryStatus::Type>()
{
	return EEnvQueryStatus_StaticEnum();
}
struct Z_Construct_UEnum_AIModule_EEnvQueryStatus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Aborted.Name", "EEnvQueryStatus::Aborted" },
		{ "BlueprintType", "true" },
		{ "Failed.Name", "EEnvQueryStatus::Failed" },
		{ "MissingParam.Name", "EEnvQueryStatus::MissingParam" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
		{ "OwnerLost.Name", "EEnvQueryStatus::OwnerLost" },
		{ "Processing.Name", "EEnvQueryStatus::Processing" },
		{ "Success.Name", "EEnvQueryStatus::Success" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EEnvQueryStatus::Processing", (int64)EEnvQueryStatus::Processing },
		{ "EEnvQueryStatus::Success", (int64)EEnvQueryStatus::Success },
		{ "EEnvQueryStatus::Failed", (int64)EEnvQueryStatus::Failed },
		{ "EEnvQueryStatus::Aborted", (int64)EEnvQueryStatus::Aborted },
		{ "EEnvQueryStatus::OwnerLost", (int64)EEnvQueryStatus::OwnerLost },
		{ "EEnvQueryStatus::MissingParam", (int64)EEnvQueryStatus::MissingParam },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AIModule_EEnvQueryStatus_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
	nullptr,
	"EEnvQueryStatus",
	"EEnvQueryStatus::Type",
	Z_Construct_UEnum_AIModule_EEnvQueryStatus_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EEnvQueryStatus_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EEnvQueryStatus_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AIModule_EEnvQueryStatus_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AIModule_EEnvQueryStatus()
{
	if (!Z_Registration_Info_UEnum_EEnvQueryStatus.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEnvQueryStatus.InnerSingleton, Z_Construct_UEnum_AIModule_EEnvQueryStatus_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EEnvQueryStatus.InnerSingleton;
}
// End Enum EEnvQueryStatus

// Begin Enum EEnvQueryRunMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEnvQueryRunMode;
static UEnum* EEnvQueryRunMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EEnvQueryRunMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EEnvQueryRunMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EEnvQueryRunMode, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("EEnvQueryRunMode"));
	}
	return Z_Registration_Info_UEnum_EEnvQueryRunMode.OuterSingleton;
}
template<> AIMODULE_API UEnum* StaticEnum<EEnvQueryRunMode::Type>()
{
	return EEnvQueryRunMode_StaticEnum();
}
struct Z_Construct_UEnum_AIModule_EEnvQueryRunMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AllMatching.Name", "EEnvQueryRunMode::AllMatching" },
		{ "AllMatching.Tooltip", "Get all items that match conditions" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
		{ "RandomBest25Pct.DisplayName", "Single Random Item from Best 25%" },
		{ "RandomBest25Pct.Name", "EEnvQueryRunMode::RandomBest25Pct" },
		{ "RandomBest25Pct.Tooltip", "Pick random item with score 75% .. 100% of max" },
		{ "RandomBest5Pct.DisplayName", "Single Random Item from Best 5%" },
		{ "RandomBest5Pct.Name", "EEnvQueryRunMode::RandomBest5Pct" },
		{ "RandomBest5Pct.Tooltip", "Pick random item with score 95% .. 100% of max" },
		{ "SingleResult.DisplayName", "Single Best Item" },
		{ "SingleResult.Name", "EEnvQueryRunMode::SingleResult" },
		{ "SingleResult.Tooltip", "Pick first item with the best score" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EEnvQueryRunMode::SingleResult", (int64)EEnvQueryRunMode::SingleResult },
		{ "EEnvQueryRunMode::RandomBest5Pct", (int64)EEnvQueryRunMode::RandomBest5Pct },
		{ "EEnvQueryRunMode::RandomBest25Pct", (int64)EEnvQueryRunMode::RandomBest25Pct },
		{ "EEnvQueryRunMode::AllMatching", (int64)EEnvQueryRunMode::AllMatching },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AIModule_EEnvQueryRunMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
	nullptr,
	"EEnvQueryRunMode",
	"EEnvQueryRunMode::Type",
	Z_Construct_UEnum_AIModule_EEnvQueryRunMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EEnvQueryRunMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EEnvQueryRunMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AIModule_EEnvQueryRunMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AIModule_EEnvQueryRunMode()
{
	if (!Z_Registration_Info_UEnum_EEnvQueryRunMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEnvQueryRunMode.InnerSingleton, Z_Construct_UEnum_AIModule_EEnvQueryRunMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EEnvQueryRunMode.InnerSingleton;
}
// End Enum EEnvQueryRunMode

// Begin Enum EEnvQueryParam
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEnvQueryParam;
static UEnum* EEnvQueryParam_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EEnvQueryParam.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EEnvQueryParam.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EEnvQueryParam, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("EEnvQueryParam"));
	}
	return Z_Registration_Info_UEnum_EEnvQueryParam.OuterSingleton;
}
template<> AIMODULE_API UEnum* StaticEnum<EEnvQueryParam::Type>()
{
	return EEnvQueryParam_StaticEnum();
}
struct Z_Construct_UEnum_AIModule_EEnvQueryParam_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Bool.Name", "EEnvQueryParam::Bool" },
		{ "Float.Name", "EEnvQueryParam::Float" },
		{ "Int.Name", "EEnvQueryParam::Int" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EEnvQueryParam::Float", (int64)EEnvQueryParam::Float },
		{ "EEnvQueryParam::Int", (int64)EEnvQueryParam::Int },
		{ "EEnvQueryParam::Bool", (int64)EEnvQueryParam::Bool },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AIModule_EEnvQueryParam_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
	nullptr,
	"EEnvQueryParam",
	"EEnvQueryParam::Type",
	Z_Construct_UEnum_AIModule_EEnvQueryParam_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EEnvQueryParam_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EEnvQueryParam_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AIModule_EEnvQueryParam_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AIModule_EEnvQueryParam()
{
	if (!Z_Registration_Info_UEnum_EEnvQueryParam.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEnvQueryParam.InnerSingleton, Z_Construct_UEnum_AIModule_EEnvQueryParam_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EEnvQueryParam.InnerSingleton;
}
// End Enum EEnvQueryParam

// Begin Enum EAIParamType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAIParamType;
static UEnum* EAIParamType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAIParamType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAIParamType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EAIParamType, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("EAIParamType"));
	}
	return Z_Registration_Info_UEnum_EAIParamType.OuterSingleton;
}
template<> AIMODULE_API UEnum* StaticEnum<EAIParamType>()
{
	return EAIParamType_StaticEnum();
}
struct Z_Construct_UEnum_AIModule_EAIParamType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Bool.Name", "EAIParamType::Bool" },
		{ "Float.Name", "EAIParamType::Float" },
		{ "Int.Name", "EAIParamType::Int" },
		{ "MAX.Hidden", "" },
		{ "MAX.Name", "EAIParamType::MAX" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAIParamType::Float", (int64)EAIParamType::Float },
		{ "EAIParamType::Int", (int64)EAIParamType::Int },
		{ "EAIParamType::Bool", (int64)EAIParamType::Bool },
		{ "EAIParamType::MAX", (int64)EAIParamType::MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AIModule_EAIParamType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
	nullptr,
	"EAIParamType",
	"EAIParamType",
	Z_Construct_UEnum_AIModule_EAIParamType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EAIParamType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EAIParamType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AIModule_EAIParamType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AIModule_EAIParamType()
{
	if (!Z_Registration_Info_UEnum_EAIParamType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAIParamType.InnerSingleton, Z_Construct_UEnum_AIModule_EAIParamType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAIParamType.InnerSingleton;
}
// End Enum EAIParamType

// Begin Enum EEnvQueryTrace
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEnvQueryTrace;
static UEnum* EEnvQueryTrace_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EEnvQueryTrace.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EEnvQueryTrace.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EEnvQueryTrace, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("EEnvQueryTrace"));
	}
	return Z_Registration_Info_UEnum_EEnvQueryTrace.OuterSingleton;
}
template<> AIMODULE_API UEnum* StaticEnum<EEnvQueryTrace::Type>()
{
	return EEnvQueryTrace_StaticEnum();
}
struct Z_Construct_UEnum_AIModule_EEnvQueryTrace_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "GeometryByChannel.Name", "EEnvQueryTrace::GeometryByChannel" },
		{ "GeometryByProfile.Name", "EEnvQueryTrace::GeometryByProfile" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
		{ "Navigation.Name", "EEnvQueryTrace::Navigation" },
		{ "NavigationOverLedges.Name", "EEnvQueryTrace::NavigationOverLedges" },
		{ "None.Name", "EEnvQueryTrace::None" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EEnvQueryTrace::None", (int64)EEnvQueryTrace::None },
		{ "EEnvQueryTrace::Navigation", (int64)EEnvQueryTrace::Navigation },
		{ "EEnvQueryTrace::GeometryByChannel", (int64)EEnvQueryTrace::GeometryByChannel },
		{ "EEnvQueryTrace::GeometryByProfile", (int64)EEnvQueryTrace::GeometryByProfile },
		{ "EEnvQueryTrace::NavigationOverLedges", (int64)EEnvQueryTrace::NavigationOverLedges },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AIModule_EEnvQueryTrace_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
	nullptr,
	"EEnvQueryTrace",
	"EEnvQueryTrace::Type",
	Z_Construct_UEnum_AIModule_EEnvQueryTrace_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EEnvQueryTrace_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EEnvQueryTrace_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AIModule_EEnvQueryTrace_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AIModule_EEnvQueryTrace()
{
	if (!Z_Registration_Info_UEnum_EEnvQueryTrace.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEnvQueryTrace.InnerSingleton, Z_Construct_UEnum_AIModule_EEnvQueryTrace_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EEnvQueryTrace.InnerSingleton;
}
// End Enum EEnvQueryTrace

// Begin Enum EEnvTraceShape
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEnvTraceShape;
static UEnum* EEnvTraceShape_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EEnvTraceShape.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EEnvTraceShape.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EEnvTraceShape, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("EEnvTraceShape"));
	}
	return Z_Registration_Info_UEnum_EEnvTraceShape.OuterSingleton;
}
template<> AIMODULE_API UEnum* StaticEnum<EEnvTraceShape::Type>()
{
	return EEnvTraceShape_StaticEnum();
}
struct Z_Construct_UEnum_AIModule_EEnvTraceShape_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Box.Name", "EEnvTraceShape::Box" },
		{ "Capsule.Name", "EEnvTraceShape::Capsule" },
		{ "Line.Name", "EEnvTraceShape::Line" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
		{ "Sphere.Name", "EEnvTraceShape::Sphere" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EEnvTraceShape::Line", (int64)EEnvTraceShape::Line },
		{ "EEnvTraceShape::Box", (int64)EEnvTraceShape::Box },
		{ "EEnvTraceShape::Sphere", (int64)EEnvTraceShape::Sphere },
		{ "EEnvTraceShape::Capsule", (int64)EEnvTraceShape::Capsule },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AIModule_EEnvTraceShape_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
	nullptr,
	"EEnvTraceShape",
	"EEnvTraceShape::Type",
	Z_Construct_UEnum_AIModule_EEnvTraceShape_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EEnvTraceShape_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EEnvTraceShape_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AIModule_EEnvTraceShape_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AIModule_EEnvTraceShape()
{
	if (!Z_Registration_Info_UEnum_EEnvTraceShape.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEnvTraceShape.InnerSingleton, Z_Construct_UEnum_AIModule_EEnvTraceShape_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EEnvTraceShape.InnerSingleton;
}
// End Enum EEnvTraceShape

// Begin Enum EEnvOverlapShape
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEnvOverlapShape;
static UEnum* EEnvOverlapShape_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EEnvOverlapShape.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EEnvOverlapShape.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EEnvOverlapShape, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("EEnvOverlapShape"));
	}
	return Z_Registration_Info_UEnum_EEnvOverlapShape.OuterSingleton;
}
template<> AIMODULE_API UEnum* StaticEnum<EEnvOverlapShape::Type>()
{
	return EEnvOverlapShape_StaticEnum();
}
struct Z_Construct_UEnum_AIModule_EEnvOverlapShape_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Box.Name", "EEnvOverlapShape::Box" },
		{ "Capsule.Name", "EEnvOverlapShape::Capsule" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
		{ "Sphere.Name", "EEnvOverlapShape::Sphere" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EEnvOverlapShape::Box", (int64)EEnvOverlapShape::Box },
		{ "EEnvOverlapShape::Sphere", (int64)EEnvOverlapShape::Sphere },
		{ "EEnvOverlapShape::Capsule", (int64)EEnvOverlapShape::Capsule },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AIModule_EEnvOverlapShape_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
	nullptr,
	"EEnvOverlapShape",
	"EEnvOverlapShape::Type",
	Z_Construct_UEnum_AIModule_EEnvOverlapShape_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EEnvOverlapShape_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EEnvOverlapShape_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AIModule_EEnvOverlapShape_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AIModule_EEnvOverlapShape()
{
	if (!Z_Registration_Info_UEnum_EEnvOverlapShape.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEnvOverlapShape.InnerSingleton, Z_Construct_UEnum_AIModule_EEnvOverlapShape_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EEnvOverlapShape.InnerSingleton;
}
// End Enum EEnvOverlapShape

// Begin Enum EEnvDirection
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEnvDirection;
static UEnum* EEnvDirection_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EEnvDirection.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EEnvDirection.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EEnvDirection, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("EEnvDirection"));
	}
	return Z_Registration_Info_UEnum_EEnvDirection.OuterSingleton;
}
template<> AIMODULE_API UEnum* StaticEnum<EEnvDirection::Type>()
{
	return EEnvDirection_StaticEnum();
}
struct Z_Construct_UEnum_AIModule_EEnvDirection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
		{ "Rotation.Name", "EEnvDirection::Rotation" },
		{ "Rotation.ToolTip", "Context's rotation will be used as a direction." },
		{ "ScriptName", "EnvDirectionType" },
		{ "TwoPoints.DisplayName", "Two Points" },
		{ "TwoPoints.Name", "EEnvDirection::TwoPoints" },
		{ "TwoPoints.ToolTip", "Direction from location of one context to another." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EEnvDirection::TwoPoints", (int64)EEnvDirection::TwoPoints },
		{ "EEnvDirection::Rotation", (int64)EEnvDirection::Rotation },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AIModule_EEnvDirection_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
	nullptr,
	"EEnvDirection",
	"EEnvDirection::Type",
	Z_Construct_UEnum_AIModule_EEnvDirection_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EEnvDirection_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EEnvDirection_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AIModule_EEnvDirection_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AIModule_EEnvDirection()
{
	if (!Z_Registration_Info_UEnum_EEnvDirection.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEnvDirection.InnerSingleton, Z_Construct_UEnum_AIModule_EEnvDirection_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EEnvDirection.InnerSingleton;
}
// End Enum EEnvDirection

// Begin Enum EEnvQueryTestClamping
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEnvQueryTestClamping;
static UEnum* EEnvQueryTestClamping_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EEnvQueryTestClamping.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EEnvQueryTestClamping.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EEnvQueryTestClamping, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("EEnvQueryTestClamping"));
	}
	return Z_Registration_Info_UEnum_EEnvQueryTestClamping.OuterSingleton;
}
template<> AIMODULE_API UEnum* StaticEnum<EEnvQueryTestClamping::Type>()
{
	return EEnvQueryTestClamping_StaticEnum();
}
struct Z_Construct_UEnum_AIModule_EEnvQueryTestClamping_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "FilterThreshold.Comment", "/** Clamp to test's filter threshold. */" },
		{ "FilterThreshold.Name", "EEnvQueryTestClamping::FilterThreshold" },
		{ "FilterThreshold.ToolTip", "Clamp to test's filter threshold." },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
		{ "None.Name", "EEnvQueryTestClamping::None" },
		{ "SpecifiedValue.Comment", "/** Clamp to value specified in test. */" },
		{ "SpecifiedValue.Name", "EEnvQueryTestClamping::SpecifiedValue" },
		{ "SpecifiedValue.ToolTip", "Clamp to value specified in test." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EEnvQueryTestClamping::None", (int64)EEnvQueryTestClamping::None },
		{ "EEnvQueryTestClamping::SpecifiedValue", (int64)EEnvQueryTestClamping::SpecifiedValue },
		{ "EEnvQueryTestClamping::FilterThreshold", (int64)EEnvQueryTestClamping::FilterThreshold },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AIModule_EEnvQueryTestClamping_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
	nullptr,
	"EEnvQueryTestClamping",
	"EEnvQueryTestClamping::Type",
	Z_Construct_UEnum_AIModule_EEnvQueryTestClamping_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EEnvQueryTestClamping_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EEnvQueryTestClamping_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AIModule_EEnvQueryTestClamping_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AIModule_EEnvQueryTestClamping()
{
	if (!Z_Registration_Info_UEnum_EEnvQueryTestClamping.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEnvQueryTestClamping.InnerSingleton, Z_Construct_UEnum_AIModule_EEnvQueryTestClamping_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EEnvQueryTestClamping.InnerSingleton;
}
// End Enum EEnvQueryTestClamping

// Begin ScriptStruct FEnvNamedValue
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EnvNamedValue;
class UScriptStruct* FEnvNamedValue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EnvNamedValue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EnvNamedValue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEnvNamedValue, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("EnvNamedValue"));
	}
	return Z_Registration_Info_UScriptStruct_EnvNamedValue.OuterSingleton;
}
template<> AIMODULE_API UScriptStruct* StaticStruct<FEnvNamedValue>()
{
	return FEnvNamedValue::StaticStruct();
}
struct Z_Construct_UScriptStruct_FEnvNamedValue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParamName_MetaData[] = {
		{ "Category", "Param" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParamType_MetaData[] = {
		{ "Category", "Param" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Param" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParamName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ParamType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ParamType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEnvNamedValue>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FEnvNamedValue_Statics::NewProp_ParamName = { "ParamName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEnvNamedValue, ParamName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParamName_MetaData), NewProp_ParamName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEnvNamedValue_Statics::NewProp_ParamType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FEnvNamedValue_Statics::NewProp_ParamType = { "ParamType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEnvNamedValue, ParamType), Z_Construct_UEnum_AIModule_EAIParamType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParamType_MetaData), NewProp_ParamType_MetaData) }; // 867052782
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEnvNamedValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEnvNamedValue, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEnvNamedValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvNamedValue_Statics::NewProp_ParamName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvNamedValue_Statics::NewProp_ParamType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvNamedValue_Statics::NewProp_ParamType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvNamedValue_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnvNamedValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEnvNamedValue_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	nullptr,
	&NewStructOps,
	"EnvNamedValue",
	Z_Construct_UScriptStruct_FEnvNamedValue_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnvNamedValue_Statics::PropPointers),
	sizeof(FEnvNamedValue),
	alignof(FEnvNamedValue),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnvNamedValue_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEnvNamedValue_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEnvNamedValue()
{
	if (!Z_Registration_Info_UScriptStruct_EnvNamedValue.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EnvNamedValue.InnerSingleton, Z_Construct_UScriptStruct_FEnvNamedValue_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_EnvNamedValue.InnerSingleton;
}
// End ScriptStruct FEnvNamedValue

// Begin ScriptStruct FEnvDirection
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EnvDirection;
class UScriptStruct* FEnvDirection::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EnvDirection.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EnvDirection.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEnvDirection, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("EnvDirection"));
	}
	return Z_Registration_Info_UScriptStruct_EnvDirection.OuterSingleton;
}
template<> AIMODULE_API UScriptStruct* StaticStruct<FEnvDirection>()
{
	return FEnvDirection::StaticStruct();
}
struct Z_Construct_UScriptStruct_FEnvDirection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LineFrom_MetaData[] = {
		{ "Category", "Direction" },
		{ "Comment", "/** line: start context */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
		{ "ToolTip", "line: start context" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LineTo_MetaData[] = {
		{ "Category", "Direction" },
		{ "Comment", "/** line: finish context */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
		{ "ToolTip", "line: finish context" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
		{ "Category", "Direction" },
		{ "Comment", "/** rotation: direction context */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
		{ "ToolTip", "rotation: direction context" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DirMode_MetaData[] = {
		{ "Category", "Direction" },
		{ "Comment", "/** defines direction of second line used by test */" },
		{ "DisplayName", "Mode" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
		{ "ToolTip", "defines direction of second line used by test" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_LineFrom;
	static const UECodeGen_Private::FClassPropertyParams NewProp_LineTo;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DirMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEnvDirection>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FEnvDirection_Statics::NewProp_LineFrom = { "LineFrom", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEnvDirection, LineFrom), Z_Construct_UClass_UClass, Z_Construct_UClass_UEnvQueryContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LineFrom_MetaData), NewProp_LineFrom_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FEnvDirection_Statics::NewProp_LineTo = { "LineTo", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEnvDirection, LineTo), Z_Construct_UClass_UClass, Z_Construct_UClass_UEnvQueryContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LineTo_MetaData), NewProp_LineTo_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FEnvDirection_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEnvDirection, Rotation), Z_Construct_UClass_UClass, Z_Construct_UClass_UEnvQueryContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotation_MetaData), NewProp_Rotation_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEnvDirection_Statics::NewProp_DirMode = { "DirMode", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEnvDirection, DirMode), Z_Construct_UEnum_AIModule_EEnvDirection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DirMode_MetaData), NewProp_DirMode_MetaData) }; // 3713296918
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEnvDirection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvDirection_Statics::NewProp_LineFrom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvDirection_Statics::NewProp_LineTo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvDirection_Statics::NewProp_Rotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvDirection_Statics::NewProp_DirMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnvDirection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEnvDirection_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	nullptr,
	&NewStructOps,
	"EnvDirection",
	Z_Construct_UScriptStruct_FEnvDirection_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnvDirection_Statics::PropPointers),
	sizeof(FEnvDirection),
	alignof(FEnvDirection),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnvDirection_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEnvDirection_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEnvDirection()
{
	if (!Z_Registration_Info_UScriptStruct_EnvDirection.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EnvDirection.InnerSingleton, Z_Construct_UScriptStruct_FEnvDirection_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_EnvDirection.InnerSingleton;
}
// End ScriptStruct FEnvDirection

// Begin ScriptStruct FEnvTraceData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EnvTraceData;
class UScriptStruct* FEnvTraceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EnvTraceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EnvTraceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEnvTraceData, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("EnvTraceData"));
	}
	return Z_Registration_Info_UScriptStruct_EnvTraceData.OuterSingleton;
}
template<> AIMODULE_API UScriptStruct* StaticStruct<FEnvTraceData>()
{
	return FEnvTraceData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FEnvTraceData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VersionNum_MetaData[] = {
		{ "Comment", "/** version number for updates */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
		{ "ToolTip", "version number for updates" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NavigationFilter_MetaData[] = {
		{ "Category", "Trace" },
		{ "Comment", "/** navigation filter for tracing */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
		{ "ToolTip", "navigation filter for tracing" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectDown_MetaData[] = {
		{ "Category", "Trace" },
		{ "ClampMin", "0" },
		{ "Comment", "/** search height: below point */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
		{ "ToolTip", "search height: below point" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectUp_MetaData[] = {
		{ "Category", "Trace" },
		{ "ClampMin", "0" },
		{ "Comment", "/** search height: above point */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
		{ "ToolTip", "search height: above point" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExtentX_MetaData[] = {
		{ "Category", "Trace" },
		{ "ClampMin", "0" },
		{ "Comment", "/** shape parameter for trace */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
		{ "ToolTip", "shape parameter for trace" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExtentY_MetaData[] = {
		{ "Category", "Trace" },
		{ "ClampMin", "0" },
		{ "Comment", "/** shape parameter for trace */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
		{ "ToolTip", "shape parameter for trace" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExtentZ_MetaData[] = {
		{ "Category", "Trace" },
		{ "ClampMin", "0" },
		{ "Comment", "/** shape parameter for trace */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
		{ "ToolTip", "shape parameter for trace" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PostProjectionVerticalOffset_MetaData[] = {
		{ "Category", "Trace" },
		{ "Comment", "/** this value will be added to resulting location's Z axis. Can be useful when \n\x09 *\x09projecting points to navigation since navmesh is just an approximation of level \n\x09 *\x09geometry and items may end up being under collide-able geometry which would \n\x09 *\x09""for example falsify visibility tests.*/" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
		{ "ToolTip", "this value will be added to resulting location's Z axis. Can be useful when\n    projecting points to navigation since navmesh is just an approximation of level\n    geometry and items may end up being under collide-able geometry which would\n    for example falsify visibility tests." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceChannel_MetaData[] = {
		{ "Category", "Trace" },
		{ "Comment", "/** geometry trace channel */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
		{ "ToolTip", "geometry trace channel" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SerializedChannel_MetaData[] = {
		{ "Category", "Trace" },
		{ "Comment", "/** geometry trace channel for serialization purposes */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
		{ "ToolTip", "geometry trace channel for serialization purposes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceProfileName_MetaData[] = {
		{ "Category", "Trace" },
		{ "Comment", "/** geometry trace profile */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
		{ "ToolTip", "geometry trace profile" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceShape_MetaData[] = {
		{ "Category", "Trace" },
		{ "Comment", "/** shape used for geometry tracing */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
		{ "ToolTip", "shape used for geometry tracing" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceMode_MetaData[] = {
		{ "Category", "Trace" },
		{ "Comment", "/** shape used for geometry tracing */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
		{ "ToolTip", "shape used for geometry tracing" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTraceComplex_MetaData[] = {
		{ "Category", "Trace" },
		{ "Comment", "/** if set, trace will run on complex collisions */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
		{ "ToolTip", "if set, trace will run on complex collisions" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOnlyBlockingHits_MetaData[] = {
		{ "Category", "Trace" },
		{ "Comment", "/** if set, trace will look only for blocking hits */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
		{ "ToolTip", "if set, trace will look only for blocking hits" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanTraceOnNavMesh_MetaData[] = {
		{ "Category", "Trace" },
		{ "Comment", "/** if set, editor will allow picking navmesh trace */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
		{ "ToolTip", "if set, editor will allow picking navmesh trace" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanTraceOnGeometry_MetaData[] = {
		{ "Category", "Trace" },
		{ "Comment", "/** if set, editor will allow picking geometry trace */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
		{ "ToolTip", "if set, editor will allow picking geometry trace" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanDisableTrace_MetaData[] = {
		{ "Category", "Trace" },
		{ "Comment", "/** if set, editor will allow  */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
		{ "ToolTip", "if set, editor will allow" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanProjectDown_MetaData[] = {
		{ "Category", "Trace" },
		{ "Comment", "/** if set, editor show height up/down properties for projection */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
		{ "ToolTip", "if set, editor show height up/down properties for projection" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_VersionNum;
	static const UECodeGen_Private::FClassPropertyParams NewProp_NavigationFilter;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ProjectDown;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ProjectUp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ExtentX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ExtentY;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ExtentZ;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PostProjectionVerticalOffset;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TraceChannel;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SerializedChannel;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TraceProfileName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TraceShape;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TraceMode;
	static void NewProp_bTraceComplex_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTraceComplex;
	static void NewProp_bOnlyBlockingHits_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlyBlockingHits;
	static void NewProp_bCanTraceOnNavMesh_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanTraceOnNavMesh;
	static void NewProp_bCanTraceOnGeometry_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanTraceOnGeometry;
	static void NewProp_bCanDisableTrace_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanDisableTrace;
	static void NewProp_bCanProjectDown_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanProjectDown;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEnvTraceData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_VersionNum = { "VersionNum", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEnvTraceData, VersionNum), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VersionNum_MetaData), NewProp_VersionNum_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_NavigationFilter = { "NavigationFilter", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEnvTraceData, NavigationFilter), Z_Construct_UClass_UClass, Z_Construct_UClass_UNavigationQueryFilter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NavigationFilter_MetaData), NewProp_NavigationFilter_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_ProjectDown = { "ProjectDown", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEnvTraceData, ProjectDown), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectDown_MetaData), NewProp_ProjectDown_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_ProjectUp = { "ProjectUp", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEnvTraceData, ProjectUp), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectUp_MetaData), NewProp_ProjectUp_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_ExtentX = { "ExtentX", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEnvTraceData, ExtentX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExtentX_MetaData), NewProp_ExtentX_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_ExtentY = { "ExtentY", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEnvTraceData, ExtentY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExtentY_MetaData), NewProp_ExtentY_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_ExtentZ = { "ExtentZ", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEnvTraceData, ExtentZ), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExtentZ_MetaData), NewProp_ExtentZ_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_PostProjectionVerticalOffset = { "PostProjectionVerticalOffset", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEnvTraceData, PostProjectionVerticalOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PostProjectionVerticalOffset_MetaData), NewProp_PostProjectionVerticalOffset_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_TraceChannel = { "TraceChannel", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEnvTraceData, TraceChannel), Z_Construct_UEnum_Engine_ETraceTypeQuery, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceChannel_MetaData), NewProp_TraceChannel_MetaData) }; // 1673313466
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_SerializedChannel = { "SerializedChannel", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEnvTraceData, SerializedChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SerializedChannel_MetaData), NewProp_SerializedChannel_MetaData) }; // 756624936
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_TraceProfileName = { "TraceProfileName", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEnvTraceData, TraceProfileName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceProfileName_MetaData), NewProp_TraceProfileName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_TraceShape = { "TraceShape", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEnvTraceData, TraceShape), Z_Construct_UEnum_AIModule_EEnvTraceShape, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceShape_MetaData), NewProp_TraceShape_MetaData) }; // 1346186903
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_TraceMode = { "TraceMode", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEnvTraceData, TraceMode), Z_Construct_UEnum_AIModule_EEnvQueryTrace, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceMode_MetaData), NewProp_TraceMode_MetaData) }; // 3435221373
void Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_bTraceComplex_SetBit(void* Obj)
{
	((FEnvTraceData*)Obj)->bTraceComplex = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_bTraceComplex = { "bTraceComplex", nullptr, (EPropertyFlags)0x0010040000010001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FEnvTraceData), &Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_bTraceComplex_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTraceComplex_MetaData), NewProp_bTraceComplex_MetaData) };
void Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_bOnlyBlockingHits_SetBit(void* Obj)
{
	((FEnvTraceData*)Obj)->bOnlyBlockingHits = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_bOnlyBlockingHits = { "bOnlyBlockingHits", nullptr, (EPropertyFlags)0x0010040000010001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FEnvTraceData), &Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_bOnlyBlockingHits_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOnlyBlockingHits_MetaData), NewProp_bOnlyBlockingHits_MetaData) };
void Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_bCanTraceOnNavMesh_SetBit(void* Obj)
{
	((FEnvTraceData*)Obj)->bCanTraceOnNavMesh = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_bCanTraceOnNavMesh = { "bCanTraceOnNavMesh", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FEnvTraceData), &Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_bCanTraceOnNavMesh_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanTraceOnNavMesh_MetaData), NewProp_bCanTraceOnNavMesh_MetaData) };
void Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_bCanTraceOnGeometry_SetBit(void* Obj)
{
	((FEnvTraceData*)Obj)->bCanTraceOnGeometry = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_bCanTraceOnGeometry = { "bCanTraceOnGeometry", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FEnvTraceData), &Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_bCanTraceOnGeometry_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanTraceOnGeometry_MetaData), NewProp_bCanTraceOnGeometry_MetaData) };
void Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_bCanDisableTrace_SetBit(void* Obj)
{
	((FEnvTraceData*)Obj)->bCanDisableTrace = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_bCanDisableTrace = { "bCanDisableTrace", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FEnvTraceData), &Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_bCanDisableTrace_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanDisableTrace_MetaData), NewProp_bCanDisableTrace_MetaData) };
void Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_bCanProjectDown_SetBit(void* Obj)
{
	((FEnvTraceData*)Obj)->bCanProjectDown = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_bCanProjectDown = { "bCanProjectDown", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FEnvTraceData), &Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_bCanProjectDown_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanProjectDown_MetaData), NewProp_bCanProjectDown_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEnvTraceData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_VersionNum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_NavigationFilter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_ProjectDown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_ProjectUp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_ExtentX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_ExtentY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_ExtentZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_PostProjectionVerticalOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_TraceChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_SerializedChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_TraceProfileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_TraceShape,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_TraceMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_bTraceComplex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_bOnlyBlockingHits,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_bCanTraceOnNavMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_bCanTraceOnGeometry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_bCanDisableTrace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_bCanProjectDown,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnvTraceData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEnvTraceData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	nullptr,
	&NewStructOps,
	"EnvTraceData",
	Z_Construct_UScriptStruct_FEnvTraceData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnvTraceData_Statics::PropPointers),
	sizeof(FEnvTraceData),
	alignof(FEnvTraceData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnvTraceData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEnvTraceData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEnvTraceData()
{
	if (!Z_Registration_Info_UScriptStruct_EnvTraceData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EnvTraceData.InnerSingleton, Z_Construct_UScriptStruct_FEnvTraceData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_EnvTraceData.InnerSingleton;
}
// End ScriptStruct FEnvTraceData

// Begin ScriptStruct FEnvOverlapData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EnvOverlapData;
class UScriptStruct* FEnvOverlapData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EnvOverlapData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EnvOverlapData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEnvOverlapData, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("EnvOverlapData"));
	}
	return Z_Registration_Info_UScriptStruct_EnvOverlapData.OuterSingleton;
}
template<> AIMODULE_API UScriptStruct* StaticStruct<FEnvOverlapData>()
{
	return FEnvOverlapData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FEnvOverlapData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExtentX_MetaData[] = {
		{ "Category", "Trace" },
		{ "ClampMin", "0" },
		{ "Comment", "/** shape parameter for overlap */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
		{ "ToolTip", "shape parameter for overlap" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExtentY_MetaData[] = {
		{ "Category", "Trace" },
		{ "ClampMin", "0" },
		{ "Comment", "/** shape parameter for overlap */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
		{ "ToolTip", "shape parameter for overlap" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExtentZ_MetaData[] = {
		{ "Category", "Trace" },
		{ "ClampMin", "0" },
		{ "Comment", "/** shape parameter for overlap */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
		{ "ToolTip", "shape parameter for overlap" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShapeOffset_MetaData[] = {
		{ "Category", "Trace" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
		{ "Tooltip", "Offset from the item location at which to test the overlap.  For example, you may need to offset vertically to avoid overlaps with flat ground." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlapChannel_MetaData[] = {
		{ "Category", "Overlap" },
		{ "Comment", "/** geometry trace channel used for overlap */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
		{ "ToolTip", "geometry trace channel used for overlap" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlapShape_MetaData[] = {
		{ "Category", "Overlap" },
		{ "Comment", "/** shape used for geometry overlap */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
		{ "ToolTip", "shape used for geometry overlap" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOnlyBlockingHits_MetaData[] = {
		{ "Category", "Overlap" },
		{ "Comment", "/** if set, overlap will look only for blocking hits */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
		{ "ToolTip", "if set, overlap will look only for blocking hits" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverlapComplex_MetaData[] = {
		{ "Category", "Overlap" },
		{ "Comment", "/** if set, overlap will run on complex collisions */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
		{ "ToolTip", "if set, overlap will run on complex collisions" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSkipOverlapQuerier_MetaData[] = {
		{ "Category", "Overlap" },
		{ "Comment", "/** if set, overlap will skip querier context hits */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
		{ "ToolTip", "if set, overlap will skip querier context hits" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ExtentX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ExtentY;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ExtentZ;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ShapeOffset;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OverlapChannel;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OverlapShape;
	static void NewProp_bOnlyBlockingHits_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlyBlockingHits;
	static void NewProp_bOverlapComplex_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverlapComplex;
	static void NewProp_bSkipOverlapQuerier_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkipOverlapQuerier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEnvOverlapData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEnvOverlapData_Statics::NewProp_ExtentX = { "ExtentX", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEnvOverlapData, ExtentX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExtentX_MetaData), NewProp_ExtentX_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEnvOverlapData_Statics::NewProp_ExtentY = { "ExtentY", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEnvOverlapData, ExtentY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExtentY_MetaData), NewProp_ExtentY_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEnvOverlapData_Statics::NewProp_ExtentZ = { "ExtentZ", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEnvOverlapData, ExtentZ), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExtentZ_MetaData), NewProp_ExtentZ_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEnvOverlapData_Statics::NewProp_ShapeOffset = { "ShapeOffset", nullptr, (EPropertyFlags)0x0010040000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEnvOverlapData, ShapeOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShapeOffset_MetaData), NewProp_ShapeOffset_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEnvOverlapData_Statics::NewProp_OverlapChannel = { "OverlapChannel", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEnvOverlapData, OverlapChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlapChannel_MetaData), NewProp_OverlapChannel_MetaData) }; // 756624936
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEnvOverlapData_Statics::NewProp_OverlapShape = { "OverlapShape", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEnvOverlapData, OverlapShape), Z_Construct_UEnum_AIModule_EEnvOverlapShape, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlapShape_MetaData), NewProp_OverlapShape_MetaData) }; // 2357347534
void Z_Construct_UScriptStruct_FEnvOverlapData_Statics::NewProp_bOnlyBlockingHits_SetBit(void* Obj)
{
	((FEnvOverlapData*)Obj)->bOnlyBlockingHits = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEnvOverlapData_Statics::NewProp_bOnlyBlockingHits = { "bOnlyBlockingHits", nullptr, (EPropertyFlags)0x0010040000010001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FEnvOverlapData), &Z_Construct_UScriptStruct_FEnvOverlapData_Statics::NewProp_bOnlyBlockingHits_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOnlyBlockingHits_MetaData), NewProp_bOnlyBlockingHits_MetaData) };
void Z_Construct_UScriptStruct_FEnvOverlapData_Statics::NewProp_bOverlapComplex_SetBit(void* Obj)
{
	((FEnvOverlapData*)Obj)->bOverlapComplex = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEnvOverlapData_Statics::NewProp_bOverlapComplex = { "bOverlapComplex", nullptr, (EPropertyFlags)0x0010040000010001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FEnvOverlapData), &Z_Construct_UScriptStruct_FEnvOverlapData_Statics::NewProp_bOverlapComplex_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverlapComplex_MetaData), NewProp_bOverlapComplex_MetaData) };
void Z_Construct_UScriptStruct_FEnvOverlapData_Statics::NewProp_bSkipOverlapQuerier_SetBit(void* Obj)
{
	((FEnvOverlapData*)Obj)->bSkipOverlapQuerier = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEnvOverlapData_Statics::NewProp_bSkipOverlapQuerier = { "bSkipOverlapQuerier", nullptr, (EPropertyFlags)0x0010040000010001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FEnvOverlapData), &Z_Construct_UScriptStruct_FEnvOverlapData_Statics::NewProp_bSkipOverlapQuerier_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSkipOverlapQuerier_MetaData), NewProp_bSkipOverlapQuerier_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEnvOverlapData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvOverlapData_Statics::NewProp_ExtentX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvOverlapData_Statics::NewProp_ExtentY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvOverlapData_Statics::NewProp_ExtentZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvOverlapData_Statics::NewProp_ShapeOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvOverlapData_Statics::NewProp_OverlapChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvOverlapData_Statics::NewProp_OverlapShape,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvOverlapData_Statics::NewProp_bOnlyBlockingHits,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvOverlapData_Statics::NewProp_bOverlapComplex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvOverlapData_Statics::NewProp_bSkipOverlapQuerier,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnvOverlapData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEnvOverlapData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	nullptr,
	&NewStructOps,
	"EnvOverlapData",
	Z_Construct_UScriptStruct_FEnvOverlapData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnvOverlapData_Statics::PropPointers),
	sizeof(FEnvOverlapData),
	alignof(FEnvOverlapData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnvOverlapData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEnvOverlapData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEnvOverlapData()
{
	if (!Z_Registration_Info_UScriptStruct_EnvOverlapData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EnvOverlapData.InnerSingleton, Z_Construct_UScriptStruct_FEnvOverlapData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_EnvOverlapData.InnerSingleton;
}
// End ScriptStruct FEnvOverlapData

// Begin ScriptStruct FEnvQueryResult
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EnvQueryResult;
class UScriptStruct* FEnvQueryResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EnvQueryResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EnvQueryResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEnvQueryResult, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("EnvQueryResult"));
	}
	return Z_Registration_Info_UScriptStruct_EnvQueryResult.OuterSingleton;
}
template<> AIMODULE_API UScriptStruct* StaticStruct<FEnvQueryResult>()
{
	return FEnvQueryResult::StaticStruct();
}
struct Z_Construct_UScriptStruct_FEnvQueryResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemType_MetaData[] = {
		{ "Category", "EQS" },
		{ "Comment", "/** type of generated items */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
		{ "ToolTip", "type of generated items" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OptionIndex_MetaData[] = {
		{ "Category", "EQS" },
		{ "Comment", "/** index of query option, that generated items */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
		{ "ToolTip", "index of query option, that generated items" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QueryID_MetaData[] = {
		{ "Category", "EQS" },
		{ "Comment", "/** instance ID */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
		{ "ToolTip", "instance ID" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ItemType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OptionIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_QueryID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEnvQueryResult>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FEnvQueryResult_Statics::NewProp_ItemType = { "ItemType", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEnvQueryResult, ItemType), Z_Construct_UClass_UClass, Z_Construct_UClass_UEnvQueryItemType_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemType_MetaData), NewProp_ItemType_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEnvQueryResult_Statics::NewProp_OptionIndex = { "OptionIndex", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEnvQueryResult, OptionIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OptionIndex_MetaData), NewProp_OptionIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEnvQueryResult_Statics::NewProp_QueryID = { "QueryID", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEnvQueryResult, QueryID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QueryID_MetaData), NewProp_QueryID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEnvQueryResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvQueryResult_Statics::NewProp_ItemType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvQueryResult_Statics::NewProp_OptionIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvQueryResult_Statics::NewProp_QueryID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnvQueryResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEnvQueryResult_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	nullptr,
	&NewStructOps,
	"EnvQueryResult",
	Z_Construct_UScriptStruct_FEnvQueryResult_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnvQueryResult_Statics::PropPointers),
	sizeof(FEnvQueryResult),
	alignof(FEnvQueryResult),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnvQueryResult_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEnvQueryResult_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEnvQueryResult()
{
	if (!Z_Registration_Info_UScriptStruct_EnvQueryResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EnvQueryResult.InnerSingleton, Z_Construct_UScriptStruct_FEnvQueryResult_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_EnvQueryResult.InnerSingleton;
}
// End ScriptStruct FEnvQueryResult

// Begin Class UEnvQueryTypes
void UEnvQueryTypes::StaticRegisterNativesUEnvQueryTypes()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnvQueryTypes);
UClass* Z_Construct_UClass_UEnvQueryTypes_NoRegister()
{
	return UEnvQueryTypes::StaticClass();
}
struct Z_Construct_UClass_UEnvQueryTypes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "EnvironmentQuery/EnvQueryTypes.h" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnvQueryTypes>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEnvQueryTypes_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTypes_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnvQueryTypes_Statics::ClassParams = {
	&UEnvQueryTypes::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTypes_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnvQueryTypes_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEnvQueryTypes()
{
	if (!Z_Registration_Info_UClass_UEnvQueryTypes.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnvQueryTypes.OuterSingleton, Z_Construct_UClass_UEnvQueryTypes_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEnvQueryTypes.OuterSingleton;
}
template<> AIMODULE_API UClass* StaticClass<UEnvQueryTypes>()
{
	return UEnvQueryTypes::StaticClass();
}
UEnvQueryTypes::UEnvQueryTypes(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQueryTypes);
UEnvQueryTypes::~UEnvQueryTypes() {}
// End Class UEnvQueryTypes

// Begin ScriptStruct FAIDynamicParam
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AIDynamicParam;
class UScriptStruct* FAIDynamicParam::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AIDynamicParam.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AIDynamicParam.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAIDynamicParam, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("AIDynamicParam"));
	}
	return Z_Registration_Info_UScriptStruct_AIDynamicParam.OuterSingleton;
}
template<> AIMODULE_API UScriptStruct* StaticStruct<FAIDynamicParam>()
{
	return FAIDynamicParam::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAIDynamicParam_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParamName_MetaData[] = {
		{ "Category", "EQS" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParamType_MetaData[] = {
		{ "Category", "EQS" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "EQS" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BBKey_MetaData[] = {
		{ "Category", "EQS" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParamName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ParamType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ParamType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BBKey;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAIDynamicParam>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAIDynamicParam_Statics::NewProp_ParamName = { "ParamName", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAIDynamicParam, ParamName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParamName_MetaData), NewProp_ParamName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAIDynamicParam_Statics::NewProp_ParamType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAIDynamicParam_Statics::NewProp_ParamType = { "ParamType", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAIDynamicParam, ParamType), Z_Construct_UEnum_AIModule_EAIParamType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParamType_MetaData), NewProp_ParamType_MetaData) }; // 867052782
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAIDynamicParam_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAIDynamicParam, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAIDynamicParam_Statics::NewProp_BBKey = { "BBKey", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAIDynamicParam, BBKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BBKey_MetaData), NewProp_BBKey_MetaData) }; // 3940742986
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAIDynamicParam_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIDynamicParam_Statics::NewProp_ParamName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIDynamicParam_Statics::NewProp_ParamType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIDynamicParam_Statics::NewProp_ParamType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIDynamicParam_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIDynamicParam_Statics::NewProp_BBKey,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIDynamicParam_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAIDynamicParam_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	nullptr,
	&NewStructOps,
	"AIDynamicParam",
	Z_Construct_UScriptStruct_FAIDynamicParam_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIDynamicParam_Statics::PropPointers),
	sizeof(FAIDynamicParam),
	alignof(FAIDynamicParam),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIDynamicParam_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAIDynamicParam_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAIDynamicParam()
{
	if (!Z_Registration_Info_UScriptStruct_AIDynamicParam.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AIDynamicParam.InnerSingleton, Z_Construct_UScriptStruct_FAIDynamicParam_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AIDynamicParam.InnerSingleton;
}
// End ScriptStruct FAIDynamicParam

// Begin ScriptStruct FEQSParametrizedQueryExecutionRequest
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EQSParametrizedQueryExecutionRequest;
class UScriptStruct* FEQSParametrizedQueryExecutionRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EQSParametrizedQueryExecutionRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EQSParametrizedQueryExecutionRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEQSParametrizedQueryExecutionRequest, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("EQSParametrizedQueryExecutionRequest"));
	}
	return Z_Registration_Info_UScriptStruct_EQSParametrizedQueryExecutionRequest.OuterSingleton;
}
template<> AIMODULE_API UScriptStruct* StaticStruct<FEQSParametrizedQueryExecutionRequest>()
{
	return FEQSParametrizedQueryExecutionRequest::StaticStruct();
}
struct Z_Construct_UScriptStruct_FEQSParametrizedQueryExecutionRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QueryTemplate_MetaData[] = {
		{ "Category", "Node" },
		{ "EditCondition", "!bUseBBKeyForQueryTemplate" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QueryConfig_MetaData[] = {
		{ "Category", "Node" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EQSQueryBlackboardKey_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "Comment", "/** blackboard key storing an EQS query template */" },
		{ "EditCondition", "bUseBBKeyForQueryTemplate" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
		{ "ToolTip", "blackboard key storing an EQS query template" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RunMode_MetaData[] = {
		{ "Category", "Node" },
		{ "Comment", "/** determines which item will be stored (All = only first matching) */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
		{ "ToolTip", "determines which item will be stored (All = only first matching)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseBBKeyForQueryTemplate_MetaData[] = {
		{ "Category", "Node" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_QueryTemplate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_QueryConfig_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_QueryConfig;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EQSQueryBlackboardKey;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RunMode;
	static void NewProp_bUseBBKeyForQueryTemplate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseBBKeyForQueryTemplate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEQSParametrizedQueryExecutionRequest>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEQSParametrizedQueryExecutionRequest_Statics::NewProp_QueryTemplate = { "QueryTemplate", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEQSParametrizedQueryExecutionRequest, QueryTemplate), Z_Construct_UClass_UEnvQuery_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QueryTemplate_MetaData), NewProp_QueryTemplate_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEQSParametrizedQueryExecutionRequest_Statics::NewProp_QueryConfig_Inner = { "QueryConfig", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAIDynamicParam, METADATA_PARAMS(0, nullptr) }; // 2862259968
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEQSParametrizedQueryExecutionRequest_Statics::NewProp_QueryConfig = { "QueryConfig", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEQSParametrizedQueryExecutionRequest, QueryConfig), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QueryConfig_MetaData), NewProp_QueryConfig_MetaData) }; // 2862259968
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEQSParametrizedQueryExecutionRequest_Statics::NewProp_EQSQueryBlackboardKey = { "EQSQueryBlackboardKey", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEQSParametrizedQueryExecutionRequest, EQSQueryBlackboardKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EQSQueryBlackboardKey_MetaData), NewProp_EQSQueryBlackboardKey_MetaData) }; // 3940742986
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEQSParametrizedQueryExecutionRequest_Statics::NewProp_RunMode = { "RunMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEQSParametrizedQueryExecutionRequest, RunMode), Z_Construct_UEnum_AIModule_EEnvQueryRunMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RunMode_MetaData), NewProp_RunMode_MetaData) }; // 3794952332
void Z_Construct_UScriptStruct_FEQSParametrizedQueryExecutionRequest_Statics::NewProp_bUseBBKeyForQueryTemplate_SetBit(void* Obj)
{
	((FEQSParametrizedQueryExecutionRequest*)Obj)->bUseBBKeyForQueryTemplate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEQSParametrizedQueryExecutionRequest_Statics::NewProp_bUseBBKeyForQueryTemplate = { "bUseBBKeyForQueryTemplate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FEQSParametrizedQueryExecutionRequest), &Z_Construct_UScriptStruct_FEQSParametrizedQueryExecutionRequest_Statics::NewProp_bUseBBKeyForQueryTemplate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseBBKeyForQueryTemplate_MetaData), NewProp_bUseBBKeyForQueryTemplate_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEQSParametrizedQueryExecutionRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEQSParametrizedQueryExecutionRequest_Statics::NewProp_QueryTemplate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEQSParametrizedQueryExecutionRequest_Statics::NewProp_QueryConfig_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEQSParametrizedQueryExecutionRequest_Statics::NewProp_QueryConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEQSParametrizedQueryExecutionRequest_Statics::NewProp_EQSQueryBlackboardKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEQSParametrizedQueryExecutionRequest_Statics::NewProp_RunMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEQSParametrizedQueryExecutionRequest_Statics::NewProp_bUseBBKeyForQueryTemplate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEQSParametrizedQueryExecutionRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEQSParametrizedQueryExecutionRequest_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	nullptr,
	&NewStructOps,
	"EQSParametrizedQueryExecutionRequest",
	Z_Construct_UScriptStruct_FEQSParametrizedQueryExecutionRequest_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEQSParametrizedQueryExecutionRequest_Statics::PropPointers),
	sizeof(FEQSParametrizedQueryExecutionRequest),
	alignof(FEQSParametrizedQueryExecutionRequest),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEQSParametrizedQueryExecutionRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEQSParametrizedQueryExecutionRequest_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEQSParametrizedQueryExecutionRequest()
{
	if (!Z_Registration_Info_UScriptStruct_EQSParametrizedQueryExecutionRequest.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EQSParametrizedQueryExecutionRequest.InnerSingleton, Z_Construct_UScriptStruct_FEQSParametrizedQueryExecutionRequest_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_EQSParametrizedQueryExecutionRequest.InnerSingleton;
}
// End ScriptStruct FEQSParametrizedQueryExecutionRequest

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryTypes_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EEnvTestPurpose_StaticEnum, TEXT("EEnvTestPurpose"), &Z_Registration_Info_UEnum_EEnvTestPurpose, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3393873306U) },
		{ EEnvTestFilterType_StaticEnum, TEXT("EEnvTestFilterType"), &Z_Registration_Info_UEnum_EEnvTestFilterType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3311921176U) },
		{ EEnvTestScoreEquation_StaticEnum, TEXT("EEnvTestScoreEquation"), &Z_Registration_Info_UEnum_EEnvTestScoreEquation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3917346868U) },
		{ EEnvTestWeight_StaticEnum, TEXT("EEnvTestWeight"), &Z_Registration_Info_UEnum_EEnvTestWeight, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 526063174U) },
		{ EEnvTestCost_StaticEnum, TEXT("EEnvTestCost"), &Z_Registration_Info_UEnum_EEnvTestCost, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 624925526U) },
		{ EEnvTestFilterOperator_StaticEnum, TEXT("EEnvTestFilterOperator"), &Z_Registration_Info_UEnum_EEnvTestFilterOperator, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3309361858U) },
		{ EEnvTestScoreOperator_StaticEnum, TEXT("EEnvTestScoreOperator"), &Z_Registration_Info_UEnum_EEnvTestScoreOperator, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1788774924U) },
		{ EEnvQueryStatus_StaticEnum, TEXT("EEnvQueryStatus"), &Z_Registration_Info_UEnum_EEnvQueryStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1329619408U) },
		{ EEnvQueryRunMode_StaticEnum, TEXT("EEnvQueryRunMode"), &Z_Registration_Info_UEnum_EEnvQueryRunMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3794952332U) },
		{ EEnvQueryParam_StaticEnum, TEXT("EEnvQueryParam"), &Z_Registration_Info_UEnum_EEnvQueryParam, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1785175126U) },
		{ EAIParamType_StaticEnum, TEXT("EAIParamType"), &Z_Registration_Info_UEnum_EAIParamType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 867052782U) },
		{ EEnvQueryTrace_StaticEnum, TEXT("EEnvQueryTrace"), &Z_Registration_Info_UEnum_EEnvQueryTrace, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3435221373U) },
		{ EEnvTraceShape_StaticEnum, TEXT("EEnvTraceShape"), &Z_Registration_Info_UEnum_EEnvTraceShape, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1346186903U) },
		{ EEnvOverlapShape_StaticEnum, TEXT("EEnvOverlapShape"), &Z_Registration_Info_UEnum_EEnvOverlapShape, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2357347534U) },
		{ EEnvDirection_StaticEnum, TEXT("EEnvDirection"), &Z_Registration_Info_UEnum_EEnvDirection, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3713296918U) },
		{ EEnvQueryTestClamping_StaticEnum, TEXT("EEnvQueryTestClamping"), &Z_Registration_Info_UEnum_EEnvQueryTestClamping, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1072746386U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FEnvNamedValue::StaticStruct, Z_Construct_UScriptStruct_FEnvNamedValue_Statics::NewStructOps, TEXT("EnvNamedValue"), &Z_Registration_Info_UScriptStruct_EnvNamedValue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEnvNamedValue), 1315413069U) },
		{ FEnvDirection::StaticStruct, Z_Construct_UScriptStruct_FEnvDirection_Statics::NewStructOps, TEXT("EnvDirection"), &Z_Registration_Info_UScriptStruct_EnvDirection, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEnvDirection), 2990699813U) },
		{ FEnvTraceData::StaticStruct, Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewStructOps, TEXT("EnvTraceData"), &Z_Registration_Info_UScriptStruct_EnvTraceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEnvTraceData), 2349835990U) },
		{ FEnvOverlapData::StaticStruct, Z_Construct_UScriptStruct_FEnvOverlapData_Statics::NewStructOps, TEXT("EnvOverlapData"), &Z_Registration_Info_UScriptStruct_EnvOverlapData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEnvOverlapData), 4076055967U) },
		{ FEnvQueryResult::StaticStruct, Z_Construct_UScriptStruct_FEnvQueryResult_Statics::NewStructOps, TEXT("EnvQueryResult"), &Z_Registration_Info_UScriptStruct_EnvQueryResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEnvQueryResult), 4164961519U) },
		{ FAIDynamicParam::StaticStruct, Z_Construct_UScriptStruct_FAIDynamicParam_Statics::NewStructOps, TEXT("AIDynamicParam"), &Z_Registration_Info_UScriptStruct_AIDynamicParam, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAIDynamicParam), 2862259968U) },
		{ FEQSParametrizedQueryExecutionRequest::StaticStruct, Z_Construct_UScriptStruct_FEQSParametrizedQueryExecutionRequest_Statics::NewStructOps, TEXT("EQSParametrizedQueryExecutionRequest"), &Z_Registration_Info_UScriptStruct_EQSParametrizedQueryExecutionRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEQSParametrizedQueryExecutionRequest), 1212105169U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEnvQueryTypes, UEnvQueryTypes::StaticClass, TEXT("UEnvQueryTypes"), &Z_Registration_Info_UClass_UEnvQueryTypes, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnvQueryTypes), 2922773135U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryTypes_h_1699068812(TEXT("/Script/AIModule"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryTypes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryTypes_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryTypes_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryTypes_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
