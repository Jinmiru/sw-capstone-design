// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBehaviorTreeTypes() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTreeTypes();
AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTreeTypes_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UBlackboardKeyType_NoRegister();
AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EBTFlowAbortMode();
AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EBTNodeResult();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References

// Begin Enum EBTNodeResult
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBTNodeResult;
static UEnum* EBTNodeResult_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EBTNodeResult.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EBTNodeResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EBTNodeResult, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("EBTNodeResult"));
	}
	return Z_Registration_Info_UEnum_EBTNodeResult.OuterSingleton;
}
template<> AIMODULE_API UEnum* StaticEnum<EBTNodeResult::Type>()
{
	return EBTNodeResult_StaticEnum();
}
struct Z_Construct_UEnum_AIModule_EBTNodeResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Aborted.Comment", "// finished aborting = failure\n" },
		{ "Aborted.Name", "EBTNodeResult::Aborted" },
		{ "Aborted.ToolTip", "finished aborting = failure" },
		{ "BlueprintType", "true" },
		{ "Comment", "// keep in sync with DescribeNodeResult()\n" },
		{ "Failed.Comment", "// finished as failure\n" },
		{ "Failed.Name", "EBTNodeResult::Failed" },
		{ "Failed.ToolTip", "finished as failure" },
		{ "InProgress.Comment", "// not finished yet\n" },
		{ "InProgress.Name", "EBTNodeResult::InProgress" },
		{ "InProgress.ToolTip", "not finished yet" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BehaviorTreeTypes.h" },
		{ "Succeeded.Comment", "// finished as success\n" },
		{ "Succeeded.Name", "EBTNodeResult::Succeeded" },
		{ "Succeeded.ToolTip", "finished as success" },
		{ "ToolTip", "keep in sync with DescribeNodeResult()" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EBTNodeResult::Succeeded", (int64)EBTNodeResult::Succeeded },
		{ "EBTNodeResult::Failed", (int64)EBTNodeResult::Failed },
		{ "EBTNodeResult::Aborted", (int64)EBTNodeResult::Aborted },
		{ "EBTNodeResult::InProgress", (int64)EBTNodeResult::InProgress },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AIModule_EBTNodeResult_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
	nullptr,
	"EBTNodeResult",
	"EBTNodeResult::Type",
	Z_Construct_UEnum_AIModule_EBTNodeResult_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EBTNodeResult_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EBTNodeResult_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AIModule_EBTNodeResult_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AIModule_EBTNodeResult()
{
	if (!Z_Registration_Info_UEnum_EBTNodeResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBTNodeResult.InnerSingleton, Z_Construct_UEnum_AIModule_EBTNodeResult_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EBTNodeResult.InnerSingleton;
}
// End Enum EBTNodeResult

// Begin Enum EBTFlowAbortMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBTFlowAbortMode;
static UEnum* EBTFlowAbortMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EBTFlowAbortMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EBTFlowAbortMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EBTFlowAbortMode, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("EBTFlowAbortMode"));
	}
	return Z_Registration_Info_UEnum_EBTFlowAbortMode.OuterSingleton;
}
template<> AIMODULE_API UEnum* StaticEnum<EBTFlowAbortMode::Type>()
{
	return EBTFlowAbortMode_StaticEnum();
}
struct Z_Construct_UEnum_AIModule_EBTFlowAbortMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Both.DisplayName", "Both" },
		{ "Both.Name", "EBTFlowAbortMode::Both" },
		{ "Comment", "// keep in sync with DescribeFlowAbortMode()\n" },
		{ "LowerPriority.DisplayName", "Lower Priority" },
		{ "LowerPriority.Name", "EBTFlowAbortMode::LowerPriority" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BehaviorTreeTypes.h" },
		{ "None.DisplayName", "Nothing" },
		{ "None.Name", "EBTFlowAbortMode::None" },
		{ "Self.DisplayName", "Self" },
		{ "Self.Name", "EBTFlowAbortMode::Self" },
		{ "ToolTip", "keep in sync with DescribeFlowAbortMode()" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EBTFlowAbortMode::None", (int64)EBTFlowAbortMode::None },
		{ "EBTFlowAbortMode::LowerPriority", (int64)EBTFlowAbortMode::LowerPriority },
		{ "EBTFlowAbortMode::Self", (int64)EBTFlowAbortMode::Self },
		{ "EBTFlowAbortMode::Both", (int64)EBTFlowAbortMode::Both },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AIModule_EBTFlowAbortMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
	nullptr,
	"EBTFlowAbortMode",
	"EBTFlowAbortMode::Type",
	Z_Construct_UEnum_AIModule_EBTFlowAbortMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EBTFlowAbortMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EBTFlowAbortMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AIModule_EBTFlowAbortMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AIModule_EBTFlowAbortMode()
{
	if (!Z_Registration_Info_UEnum_EBTFlowAbortMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBTFlowAbortMode.InnerSingleton, Z_Construct_UEnum_AIModule_EBTFlowAbortMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EBTFlowAbortMode.InnerSingleton;
}
// End Enum EBTFlowAbortMode

// Begin ScriptStruct FBlackboardKeySelector
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BlackboardKeySelector;
class UScriptStruct* FBlackboardKeySelector::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BlackboardKeySelector.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BlackboardKeySelector.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlackboardKeySelector, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("BlackboardKeySelector"));
	}
	return Z_Registration_Info_UScriptStruct_BlackboardKeySelector.OuterSingleton;
}
template<> AIMODULE_API UScriptStruct* StaticStruct<FBlackboardKeySelector>()
{
	return FBlackboardKeySelector::StaticStruct();
}
struct Z_Construct_UScriptStruct_FBlackboardKeySelector_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** helper struct for defining types of allowed blackboard entries\n *  (e.g. only entries holding points and objects derived form actor class) */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BehaviorTreeTypes.h" },
		{ "ToolTip", "helper struct for defining types of allowed blackboard entries\n(e.g. only entries holding points and objects derived form actor class)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllowedTypes_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "Comment", "/** array of allowed types with additional properties (e.g. uobject's base class) \n\x09  * EditAnywhere is required for FBlackboardSelectorDetails::CacheBlackboardData() */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BehaviorTreeTypes.h" },
		{ "ToolTip", "array of allowed types with additional properties (e.g. uobject's base class)\nEditAnywhere is required for FBlackboardSelectorDetails::CacheBlackboardData()" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedKeyName_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "Comment", "/** name of selected key */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BehaviorTreeTypes.h" },
		{ "ToolTip", "name of selected key" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedKeyType_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "Comment", "/** class of selected key  */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BehaviorTreeTypes.h" },
		{ "ToolTip", "class of selected key" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedKeyID_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "ClampMin", "0" },
		{ "Comment", "/** ID of selected key */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BehaviorTreeTypes.h" },
		{ "ToolTip", "ID of selected key" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNoneIsAllowedValue_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BehaviorTreeTypes.h" },
		{ "Tooltip", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AllowedTypes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AllowedTypes;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SelectedKeyName;
	static const UECodeGen_Private::FClassPropertyParams NewProp_SelectedKeyType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SelectedKeyID;
	static void NewProp_bNoneIsAllowedValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNoneIsAllowedValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBlackboardKeySelector>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FBlackboardKeySelector_Statics::NewProp_AllowedTypes_Inner = { "AllowedTypes", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UBlackboardKeyType_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBlackboardKeySelector_Statics::NewProp_AllowedTypes = { "AllowedTypes", nullptr, (EPropertyFlags)0x0114000000002005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBlackboardKeySelector, AllowedTypes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllowedTypes_MetaData), NewProp_AllowedTypes_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBlackboardKeySelector_Statics::NewProp_SelectedKeyName = { "SelectedKeyName", nullptr, (EPropertyFlags)0x0010000000000805, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBlackboardKeySelector, SelectedKeyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedKeyName_MetaData), NewProp_SelectedKeyName_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FBlackboardKeySelector_Statics::NewProp_SelectedKeyType = { "SelectedKeyType", nullptr, (EPropertyFlags)0x0014000000002805, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBlackboardKeySelector, SelectedKeyType), Z_Construct_UClass_UClass, Z_Construct_UClass_UBlackboardKeyType_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedKeyType_MetaData), NewProp_SelectedKeyType_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBlackboardKeySelector_Statics::NewProp_SelectedKeyID = { "SelectedKeyID", nullptr, (EPropertyFlags)0x0020080000002805, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBlackboardKeySelector, SelectedKeyID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedKeyID_MetaData), NewProp_SelectedKeyID_MetaData) };
void Z_Construct_UScriptStruct_FBlackboardKeySelector_Statics::NewProp_bNoneIsAllowedValue_SetBit(void* Obj)
{
	((FBlackboardKeySelector*)Obj)->bNoneIsAllowedValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBlackboardKeySelector_Statics::NewProp_bNoneIsAllowedValue = { "bNoneIsAllowedValue", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FBlackboardKeySelector), &Z_Construct_UScriptStruct_FBlackboardKeySelector_Statics::NewProp_bNoneIsAllowedValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNoneIsAllowedValue_MetaData), NewProp_bNoneIsAllowedValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBlackboardKeySelector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlackboardKeySelector_Statics::NewProp_AllowedTypes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlackboardKeySelector_Statics::NewProp_AllowedTypes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlackboardKeySelector_Statics::NewProp_SelectedKeyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlackboardKeySelector_Statics::NewProp_SelectedKeyType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlackboardKeySelector_Statics::NewProp_SelectedKeyID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlackboardKeySelector_Statics::NewProp_bNoneIsAllowedValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlackboardKeySelector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBlackboardKeySelector_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	nullptr,
	&NewStructOps,
	"BlackboardKeySelector",
	Z_Construct_UScriptStruct_FBlackboardKeySelector_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlackboardKeySelector_Statics::PropPointers),
	sizeof(FBlackboardKeySelector),
	alignof(FBlackboardKeySelector),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlackboardKeySelector_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBlackboardKeySelector_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector()
{
	if (!Z_Registration_Info_UScriptStruct_BlackboardKeySelector.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BlackboardKeySelector.InnerSingleton, Z_Construct_UScriptStruct_FBlackboardKeySelector_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_BlackboardKeySelector.InnerSingleton;
}
// End ScriptStruct FBlackboardKeySelector

// Begin Class UBehaviorTreeTypes
void UBehaviorTreeTypes::StaticRegisterNativesUBehaviorTreeTypes()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBehaviorTreeTypes);
UClass* Z_Construct_UClass_UBehaviorTreeTypes_NoRegister()
{
	return UBehaviorTreeTypes::StaticClass();
}
struct Z_Construct_UClass_UBehaviorTreeTypes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BehaviorTree/BehaviorTreeTypes.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BehaviorTreeTypes.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBehaviorTreeTypes>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBehaviorTreeTypes_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviorTreeTypes_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBehaviorTreeTypes_Statics::ClassParams = {
	&UBehaviorTreeTypes::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviorTreeTypes_Statics::Class_MetaDataParams), Z_Construct_UClass_UBehaviorTreeTypes_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBehaviorTreeTypes()
{
	if (!Z_Registration_Info_UClass_UBehaviorTreeTypes.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBehaviorTreeTypes.OuterSingleton, Z_Construct_UClass_UBehaviorTreeTypes_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBehaviorTreeTypes.OuterSingleton;
}
template<> AIMODULE_API UClass* StaticClass<UBehaviorTreeTypes>()
{
	return UBehaviorTreeTypes::StaticClass();
}
UBehaviorTreeTypes::UBehaviorTreeTypes(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBehaviorTreeTypes);
UBehaviorTreeTypes::~UBehaviorTreeTypes() {}
// End Class UBehaviorTreeTypes

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeTypes_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EBTNodeResult_StaticEnum, TEXT("EBTNodeResult"), &Z_Registration_Info_UEnum_EBTNodeResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3742194854U) },
		{ EBTFlowAbortMode_StaticEnum, TEXT("EBTFlowAbortMode"), &Z_Registration_Info_UEnum_EBTFlowAbortMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4145382657U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FBlackboardKeySelector::StaticStruct, Z_Construct_UScriptStruct_FBlackboardKeySelector_Statics::NewStructOps, TEXT("BlackboardKeySelector"), &Z_Registration_Info_UScriptStruct_BlackboardKeySelector, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBlackboardKeySelector), 3940742986U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBehaviorTreeTypes, UBehaviorTreeTypes::StaticClass, TEXT("UBehaviorTreeTypes"), &Z_Registration_Info_UClass_UBehaviorTreeTypes, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBehaviorTreeTypes), 1364425673U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeTypes_h_3885617109(TEXT("/Script/AIModule"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeTypes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeTypes_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeTypes_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeTypes_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
