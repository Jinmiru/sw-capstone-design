// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AIModule/Classes/BehaviorTree/Blackboard/BlackboardKeyEnums.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlackboardKeyEnums() {}

// Begin Cross Module References
AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EArithmeticKeyOperation();
AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EBasicKeyOperation();
AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_ETextKeyOperation();
UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References

// Begin Enum EBasicKeyOperation
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBasicKeyOperation;
static UEnum* EBasicKeyOperation_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EBasicKeyOperation.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EBasicKeyOperation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EBasicKeyOperation, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("EBasicKeyOperation"));
	}
	return Z_Registration_Info_UEnum_EBasicKeyOperation.OuterSingleton;
}
template<> AIMODULE_API UEnum* StaticEnum<EBasicKeyOperation::Type>()
{
	return EBasicKeyOperation_StaticEnum();
}
struct Z_Construct_UEnum_AIModule_EBasicKeyOperation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/Blackboard/BlackboardKeyEnums.h" },
		{ "NotSet.DisplayName", "Is Not Set" },
		{ "NotSet.Name", "EBasicKeyOperation::NotSet" },
		{ "Set.DisplayName", "Is Set" },
		{ "Set.Name", "EBasicKeyOperation::Set" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EBasicKeyOperation::Set", (int64)EBasicKeyOperation::Set },
		{ "EBasicKeyOperation::NotSet", (int64)EBasicKeyOperation::NotSet },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AIModule_EBasicKeyOperation_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
	nullptr,
	"EBasicKeyOperation",
	"EBasicKeyOperation::Type",
	Z_Construct_UEnum_AIModule_EBasicKeyOperation_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EBasicKeyOperation_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EBasicKeyOperation_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AIModule_EBasicKeyOperation_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AIModule_EBasicKeyOperation()
{
	if (!Z_Registration_Info_UEnum_EBasicKeyOperation.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBasicKeyOperation.InnerSingleton, Z_Construct_UEnum_AIModule_EBasicKeyOperation_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EBasicKeyOperation.InnerSingleton;
}
// End Enum EBasicKeyOperation

// Begin Enum EArithmeticKeyOperation
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EArithmeticKeyOperation;
static UEnum* EArithmeticKeyOperation_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EArithmeticKeyOperation.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EArithmeticKeyOperation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EArithmeticKeyOperation, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("EArithmeticKeyOperation"));
	}
	return Z_Registration_Info_UEnum_EArithmeticKeyOperation.OuterSingleton;
}
template<> AIMODULE_API UEnum* StaticEnum<EArithmeticKeyOperation::Type>()
{
	return EArithmeticKeyOperation_StaticEnum();
}
struct Z_Construct_UEnum_AIModule_EArithmeticKeyOperation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Equal.DisplayName", "Is Equal To" },
		{ "Equal.Name", "EArithmeticKeyOperation::Equal" },
		{ "Greater.DisplayName", "Is Greater Than" },
		{ "Greater.Name", "EArithmeticKeyOperation::Greater" },
		{ "GreaterOrEqual.DisplayName", "Is Greater Than Or Equal To" },
		{ "GreaterOrEqual.Name", "EArithmeticKeyOperation::GreaterOrEqual" },
		{ "Less.DisplayName", "Is Less Than" },
		{ "Less.Name", "EArithmeticKeyOperation::Less" },
		{ "LessOrEqual.DisplayName", "Is Less Than Or Equal To" },
		{ "LessOrEqual.Name", "EArithmeticKeyOperation::LessOrEqual" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Blackboard/BlackboardKeyEnums.h" },
		{ "NotEqual.DisplayName", "Is Not Equal To" },
		{ "NotEqual.Name", "EArithmeticKeyOperation::NotEqual" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EArithmeticKeyOperation::Equal", (int64)EArithmeticKeyOperation::Equal },
		{ "EArithmeticKeyOperation::NotEqual", (int64)EArithmeticKeyOperation::NotEqual },
		{ "EArithmeticKeyOperation::Less", (int64)EArithmeticKeyOperation::Less },
		{ "EArithmeticKeyOperation::LessOrEqual", (int64)EArithmeticKeyOperation::LessOrEqual },
		{ "EArithmeticKeyOperation::Greater", (int64)EArithmeticKeyOperation::Greater },
		{ "EArithmeticKeyOperation::GreaterOrEqual", (int64)EArithmeticKeyOperation::GreaterOrEqual },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AIModule_EArithmeticKeyOperation_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
	nullptr,
	"EArithmeticKeyOperation",
	"EArithmeticKeyOperation::Type",
	Z_Construct_UEnum_AIModule_EArithmeticKeyOperation_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EArithmeticKeyOperation_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EArithmeticKeyOperation_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AIModule_EArithmeticKeyOperation_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AIModule_EArithmeticKeyOperation()
{
	if (!Z_Registration_Info_UEnum_EArithmeticKeyOperation.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EArithmeticKeyOperation.InnerSingleton, Z_Construct_UEnum_AIModule_EArithmeticKeyOperation_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EArithmeticKeyOperation.InnerSingleton;
}
// End Enum EArithmeticKeyOperation

// Begin Enum ETextKeyOperation
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETextKeyOperation;
static UEnum* ETextKeyOperation_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ETextKeyOperation.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ETextKeyOperation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AIModule_ETextKeyOperation, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("ETextKeyOperation"));
	}
	return Z_Registration_Info_UEnum_ETextKeyOperation.OuterSingleton;
}
template<> AIMODULE_API UEnum* StaticEnum<ETextKeyOperation::Type>()
{
	return ETextKeyOperation_StaticEnum();
}
struct Z_Construct_UEnum_AIModule_ETextKeyOperation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Contain.DisplayName", "Contains" },
		{ "Contain.Name", "ETextKeyOperation::Contain" },
		{ "Equal.DisplayName", "Is Equal To" },
		{ "Equal.Name", "ETextKeyOperation::Equal" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Blackboard/BlackboardKeyEnums.h" },
		{ "NotContain.DisplayName", "Not Contains" },
		{ "NotContain.Name", "ETextKeyOperation::NotContain" },
		{ "NotEqual.DisplayName", "Is Not Equal To" },
		{ "NotEqual.Name", "ETextKeyOperation::NotEqual" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ETextKeyOperation::Equal", (int64)ETextKeyOperation::Equal },
		{ "ETextKeyOperation::NotEqual", (int64)ETextKeyOperation::NotEqual },
		{ "ETextKeyOperation::Contain", (int64)ETextKeyOperation::Contain },
		{ "ETextKeyOperation::NotContain", (int64)ETextKeyOperation::NotContain },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AIModule_ETextKeyOperation_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
	nullptr,
	"ETextKeyOperation",
	"ETextKeyOperation::Type",
	Z_Construct_UEnum_AIModule_ETextKeyOperation_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_ETextKeyOperation_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_ETextKeyOperation_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AIModule_ETextKeyOperation_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AIModule_ETextKeyOperation()
{
	if (!Z_Registration_Info_UEnum_ETextKeyOperation.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETextKeyOperation.InnerSingleton, Z_Construct_UEnum_AIModule_ETextKeyOperation_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ETextKeyOperation.InnerSingleton;
}
// End Enum ETextKeyOperation

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Blackboard_BlackboardKeyEnums_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EBasicKeyOperation_StaticEnum, TEXT("EBasicKeyOperation"), &Z_Registration_Info_UEnum_EBasicKeyOperation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3279859552U) },
		{ EArithmeticKeyOperation_StaticEnum, TEXT("EArithmeticKeyOperation"), &Z_Registration_Info_UEnum_EArithmeticKeyOperation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3079262467U) },
		{ ETextKeyOperation_StaticEnum, TEXT("ETextKeyOperation"), &Z_Registration_Info_UEnum_ETextKeyOperation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2244932636U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Blackboard_BlackboardKeyEnums_h_3037606054(TEXT("/Script/AIModule"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Blackboard_BlackboardKeyEnums_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Blackboard_BlackboardKeyEnums_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
