// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AIModule/Classes/BehaviorTree/Decorators/BTDecorator_Blackboard.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTDecorator_Blackboard() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_Blackboard();
AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_Blackboard_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_BlackboardBase();
AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EArithmeticKeyOperation();
AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EBasicKeyOperation();
AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EBTBlackboardRestart();
AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_ETextKeyOperation();
UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References

// Begin Enum EBTBlackboardRestart
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBTBlackboardRestart;
static UEnum* EBTBlackboardRestart_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EBTBlackboardRestart.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EBTBlackboardRestart.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EBTBlackboardRestart, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("EBTBlackboardRestart"));
	}
	return Z_Registration_Info_UEnum_EBTBlackboardRestart.OuterSingleton;
}
template<> AIMODULE_API UEnum* StaticEnum<EBTBlackboardRestart::Type>()
{
	return EBTBlackboardRestart_StaticEnum();
}
struct Z_Construct_UEnum_AIModule_EBTBlackboardRestart_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/**\n *  Decorator for accessing blackboard values\n */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_Blackboard.h" },
		{ "ResultChange.DisplayName", "On Result Change" },
		{ "ResultChange.Name", "EBTBlackboardRestart::ResultChange" },
		{ "ResultChange.ToolTip", "Restart only when result of evaluated condition is changed" },
		{ "ToolTip", "Decorator for accessing blackboard values" },
		{ "ValueChange.DisplayName", "On Value Change" },
		{ "ValueChange.Name", "EBTBlackboardRestart::ValueChange" },
		{ "ValueChange.ToolTip", "Restart on every change of observed blackboard value" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EBTBlackboardRestart::ValueChange", (int64)EBTBlackboardRestart::ValueChange },
		{ "EBTBlackboardRestart::ResultChange", (int64)EBTBlackboardRestart::ResultChange },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AIModule_EBTBlackboardRestart_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
	nullptr,
	"EBTBlackboardRestart",
	"EBTBlackboardRestart::Type",
	Z_Construct_UEnum_AIModule_EBTBlackboardRestart_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EBTBlackboardRestart_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EBTBlackboardRestart_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AIModule_EBTBlackboardRestart_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AIModule_EBTBlackboardRestart()
{
	if (!Z_Registration_Info_UEnum_EBTBlackboardRestart.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBTBlackboardRestart.InnerSingleton, Z_Construct_UEnum_AIModule_EBTBlackboardRestart_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EBTBlackboardRestart.InnerSingleton;
}
// End Enum EBTBlackboardRestart

// Begin Class UBTDecorator_Blackboard
void UBTDecorator_Blackboard::StaticRegisterNativesUBTDecorator_Blackboard()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTDecorator_Blackboard);
UClass* Z_Construct_UClass_UBTDecorator_Blackboard_NoRegister()
{
	return UBTDecorator_Blackboard::StaticClass();
}
struct Z_Construct_UClass_UBTDecorator_Blackboard_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Blackboard decorator node.\n * A decorator node that bases its condition on a Blackboard key.\n */" },
		{ "HideCategories", "Condition" },
		{ "IncludePath", "BehaviorTree/Decorators/BTDecorator_Blackboard.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_Blackboard.h" },
		{ "ToolTip", "Blackboard decorator node.\nA decorator node that bases its condition on a Blackboard key." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntValue_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "Comment", "/** value for arithmetic operations */" },
		{ "DisplayName", "Key Value" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_Blackboard.h" },
		{ "ToolTip", "value for arithmetic operations" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloatValue_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "Comment", "/** value for arithmetic operations */" },
		{ "DisplayName", "Key Value" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_Blackboard.h" },
		{ "ToolTip", "value for arithmetic operations" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StringValue_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "Comment", "/** value for string operations */" },
		{ "DisplayName", "Key Value" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_Blackboard.h" },
		{ "ToolTip", "value for string operations" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedDescription_MetaData[] = {
		{ "Comment", "/** cached description */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_Blackboard.h" },
		{ "ToolTip", "cached description" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OperationType_MetaData[] = {
		{ "Comment", "/** operation type */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_Blackboard.h" },
		{ "ToolTip", "operation type" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NotifyObserver_MetaData[] = {
		{ "Category", "FlowControl" },
		{ "Comment", "/** when observer can try to request abort? */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_Blackboard.h" },
		{ "ToolTip", "when observer can try to request abort?" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BasicOperation_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "DisplayName", "Key Query" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_Blackboard.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArithmeticOperation_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "DisplayName", "Key Query" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_Blackboard.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextOperation_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "DisplayName", "Key Query" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_Blackboard.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_IntValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FloatValue;
	static const UECodeGen_Private::FStrPropertyParams NewProp_StringValue;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CachedDescription;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OperationType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NotifyObserver;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_BasicOperation;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ArithmeticOperation;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TextOperation;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTDecorator_Blackboard>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBTDecorator_Blackboard_Statics::NewProp_IntValue = { "IntValue", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTDecorator_Blackboard, IntValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntValue_MetaData), NewProp_IntValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTDecorator_Blackboard_Statics::NewProp_FloatValue = { "FloatValue", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTDecorator_Blackboard, FloatValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloatValue_MetaData), NewProp_FloatValue_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBTDecorator_Blackboard_Statics::NewProp_StringValue = { "StringValue", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTDecorator_Blackboard, StringValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StringValue_MetaData), NewProp_StringValue_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBTDecorator_Blackboard_Statics::NewProp_CachedDescription = { "CachedDescription", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTDecorator_Blackboard, CachedDescription), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedDescription_MetaData), NewProp_CachedDescription_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBTDecorator_Blackboard_Statics::NewProp_OperationType = { "OperationType", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTDecorator_Blackboard, OperationType), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OperationType_MetaData), NewProp_OperationType_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBTDecorator_Blackboard_Statics::NewProp_NotifyObserver = { "NotifyObserver", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTDecorator_Blackboard, NotifyObserver), Z_Construct_UEnum_AIModule_EBTBlackboardRestart, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NotifyObserver_MetaData), NewProp_NotifyObserver_MetaData) }; // 2427196323
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBTDecorator_Blackboard_Statics::NewProp_BasicOperation = { "BasicOperation", nullptr, (EPropertyFlags)0x0020080800000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTDecorator_Blackboard, BasicOperation), Z_Construct_UEnum_AIModule_EBasicKeyOperation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BasicOperation_MetaData), NewProp_BasicOperation_MetaData) }; // 3279859552
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBTDecorator_Blackboard_Statics::NewProp_ArithmeticOperation = { "ArithmeticOperation", nullptr, (EPropertyFlags)0x0020080800000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTDecorator_Blackboard, ArithmeticOperation), Z_Construct_UEnum_AIModule_EArithmeticKeyOperation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArithmeticOperation_MetaData), NewProp_ArithmeticOperation_MetaData) }; // 3079262467
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBTDecorator_Blackboard_Statics::NewProp_TextOperation = { "TextOperation", nullptr, (EPropertyFlags)0x0020080800000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTDecorator_Blackboard, TextOperation), Z_Construct_UEnum_AIModule_ETextKeyOperation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextOperation_MetaData), NewProp_TextOperation_MetaData) }; // 2244932636
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTDecorator_Blackboard_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_Blackboard_Statics::NewProp_IntValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_Blackboard_Statics::NewProp_FloatValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_Blackboard_Statics::NewProp_StringValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_Blackboard_Statics::NewProp_CachedDescription,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_Blackboard_Statics::NewProp_OperationType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_Blackboard_Statics::NewProp_NotifyObserver,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_Blackboard_Statics::NewProp_BasicOperation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_Blackboard_Statics::NewProp_ArithmeticOperation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_Blackboard_Statics::NewProp_TextOperation,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_Blackboard_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBTDecorator_Blackboard_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTDecorator_BlackboardBase,
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_Blackboard_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTDecorator_Blackboard_Statics::ClassParams = {
	&UBTDecorator_Blackboard::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBTDecorator_Blackboard_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_Blackboard_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_Blackboard_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTDecorator_Blackboard_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTDecorator_Blackboard()
{
	if (!Z_Registration_Info_UClass_UBTDecorator_Blackboard.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTDecorator_Blackboard.OuterSingleton, Z_Construct_UClass_UBTDecorator_Blackboard_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTDecorator_Blackboard.OuterSingleton;
}
template<> AIMODULE_API UClass* StaticClass<UBTDecorator_Blackboard>()
{
	return UBTDecorator_Blackboard::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTDecorator_Blackboard);
UBTDecorator_Blackboard::~UBTDecorator_Blackboard() {}
// End Class UBTDecorator_Blackboard

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_Blackboard_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EBTBlackboardRestart_StaticEnum, TEXT("EBTBlackboardRestart"), &Z_Registration_Info_UEnum_EBTBlackboardRestart, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2427196323U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTDecorator_Blackboard, UBTDecorator_Blackboard::StaticClass, TEXT("UBTDecorator_Blackboard"), &Z_Registration_Info_UClass_UBTDecorator_Blackboard, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTDecorator_Blackboard), 2251571208U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_Blackboard_h_1628618707(TEXT("/Script/AIModule"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_Blackboard_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_Blackboard_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_Blackboard_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_Blackboard_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
