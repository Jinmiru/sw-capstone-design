// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTCompositeNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTCompositeNode() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTCompositeNode();
AIMODULE_API UClass* Z_Construct_UClass_UBTCompositeNode_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UBTNode();
AIMODULE_API UClass* Z_Construct_UClass_UBTService_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode_NoRegister();
AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EBTChildIndex();
AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EBTDecoratorLogic();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBTCompositeChild();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBTDecoratorLogic();
UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References

// Begin Enum EBTChildIndex
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBTChildIndex;
static UEnum* EBTChildIndex_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EBTChildIndex.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EBTChildIndex.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EBTChildIndex, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("EBTChildIndex"));
	}
	return Z_Registration_Info_UEnum_EBTChildIndex.OuterSingleton;
}
template<> AIMODULE_API UEnum* StaticEnum<EBTChildIndex>()
{
	return EBTChildIndex_StaticEnum();
}
struct Z_Construct_UEnum_AIModule_EBTChildIndex_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "FirstNode.Name", "EBTChildIndex::FirstNode" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTCompositeNode.h" },
		{ "TaskNode.Name", "EBTChildIndex::TaskNode" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EBTChildIndex::FirstNode", (int64)EBTChildIndex::FirstNode },
		{ "EBTChildIndex::TaskNode", (int64)EBTChildIndex::TaskNode },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AIModule_EBTChildIndex_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
	nullptr,
	"EBTChildIndex",
	"EBTChildIndex",
	Z_Construct_UEnum_AIModule_EBTChildIndex_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EBTChildIndex_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EBTChildIndex_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AIModule_EBTChildIndex_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AIModule_EBTChildIndex()
{
	if (!Z_Registration_Info_UEnum_EBTChildIndex.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBTChildIndex.InnerSingleton, Z_Construct_UEnum_AIModule_EBTChildIndex_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EBTChildIndex.InnerSingleton;
}
// End Enum EBTChildIndex

// Begin Enum EBTDecoratorLogic
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBTDecoratorLogic;
static UEnum* EBTDecoratorLogic_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EBTDecoratorLogic.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EBTDecoratorLogic.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EBTDecoratorLogic, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("EBTDecoratorLogic"));
	}
	return Z_Registration_Info_UEnum_EBTDecoratorLogic.OuterSingleton;
}
template<> AIMODULE_API UEnum* StaticEnum<EBTDecoratorLogic::Type>()
{
	return EBTDecoratorLogic_StaticEnum();
}
struct Z_Construct_UEnum_AIModule_EBTDecoratorLogic_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "And.Comment", "/** logic op: AND */" },
		{ "And.Name", "EBTDecoratorLogic::And" },
		{ "And.ToolTip", "logic op: AND" },
		{ "Comment", "// keep in sync with DescribeLogicOp() in BTCompositeNode.cpp\n" },
		{ "Invalid.Name", "EBTDecoratorLogic::Invalid" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTCompositeNode.h" },
		{ "Not.Comment", "/** logic op: NOT */" },
		{ "Not.Name", "EBTDecoratorLogic::Not" },
		{ "Not.ToolTip", "logic op: NOT" },
		{ "Or.Comment", "/** logic op: OR */" },
		{ "Or.Name", "EBTDecoratorLogic::Or" },
		{ "Or.ToolTip", "logic op: OR" },
		{ "Test.Comment", "/** Test decorator conditions. */" },
		{ "Test.Name", "EBTDecoratorLogic::Test" },
		{ "Test.ToolTip", "Test decorator conditions." },
		{ "ToolTip", "keep in sync with DescribeLogicOp() in BTCompositeNode.cpp" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EBTDecoratorLogic::Invalid", (int64)EBTDecoratorLogic::Invalid },
		{ "EBTDecoratorLogic::Test", (int64)EBTDecoratorLogic::Test },
		{ "EBTDecoratorLogic::And", (int64)EBTDecoratorLogic::And },
		{ "EBTDecoratorLogic::Or", (int64)EBTDecoratorLogic::Or },
		{ "EBTDecoratorLogic::Not", (int64)EBTDecoratorLogic::Not },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AIModule_EBTDecoratorLogic_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
	nullptr,
	"EBTDecoratorLogic",
	"EBTDecoratorLogic::Type",
	Z_Construct_UEnum_AIModule_EBTDecoratorLogic_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EBTDecoratorLogic_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EBTDecoratorLogic_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AIModule_EBTDecoratorLogic_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AIModule_EBTDecoratorLogic()
{
	if (!Z_Registration_Info_UEnum_EBTDecoratorLogic.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBTDecoratorLogic.InnerSingleton, Z_Construct_UEnum_AIModule_EBTDecoratorLogic_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EBTDecoratorLogic.InnerSingleton;
}
// End Enum EBTDecoratorLogic

// Begin ScriptStruct FBTDecoratorLogic
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BTDecoratorLogic;
class UScriptStruct* FBTDecoratorLogic::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BTDecoratorLogic.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BTDecoratorLogic.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBTDecoratorLogic, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("BTDecoratorLogic"));
	}
	return Z_Registration_Info_UScriptStruct_BTDecoratorLogic.OuterSingleton;
}
template<> AIMODULE_API UScriptStruct* StaticStruct<FBTDecoratorLogic>()
{
	return FBTDecoratorLogic::StaticStruct();
}
struct Z_Construct_UScriptStruct_FBTDecoratorLogic_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTCompositeNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Operation_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTCompositeNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Number_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTCompositeNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Operation;
	static const UECodeGen_Private::FUInt16PropertyParams NewProp_Number;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBTDecoratorLogic>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBTDecoratorLogic_Statics::NewProp_Operation = { "Operation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBTDecoratorLogic, Operation), Z_Construct_UEnum_AIModule_EBTDecoratorLogic, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Operation_MetaData), NewProp_Operation_MetaData) }; // 1248187209
const UECodeGen_Private::FUInt16PropertyParams Z_Construct_UScriptStruct_FBTDecoratorLogic_Statics::NewProp_Number = { "Number", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBTDecoratorLogic, Number), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Number_MetaData), NewProp_Number_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBTDecoratorLogic_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBTDecoratorLogic_Statics::NewProp_Operation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBTDecoratorLogic_Statics::NewProp_Number,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBTDecoratorLogic_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBTDecoratorLogic_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	nullptr,
	&NewStructOps,
	"BTDecoratorLogic",
	Z_Construct_UScriptStruct_FBTDecoratorLogic_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBTDecoratorLogic_Statics::PropPointers),
	sizeof(FBTDecoratorLogic),
	alignof(FBTDecoratorLogic),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBTDecoratorLogic_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBTDecoratorLogic_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBTDecoratorLogic()
{
	if (!Z_Registration_Info_UScriptStruct_BTDecoratorLogic.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BTDecoratorLogic.InnerSingleton, Z_Construct_UScriptStruct_FBTDecoratorLogic_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_BTDecoratorLogic.InnerSingleton;
}
// End ScriptStruct FBTDecoratorLogic

// Begin ScriptStruct FBTCompositeChild
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BTCompositeChild;
class UScriptStruct* FBTCompositeChild::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BTCompositeChild.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BTCompositeChild.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBTCompositeChild, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("BTCompositeChild"));
	}
	return Z_Registration_Info_UScriptStruct_BTCompositeChild.OuterSingleton;
}
template<> AIMODULE_API UScriptStruct* StaticStruct<FBTCompositeChild>()
{
	return FBTCompositeChild::StaticStruct();
}
struct Z_Construct_UScriptStruct_FBTCompositeChild_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTCompositeNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChildComposite_MetaData[] = {
		{ "Comment", "/** child node */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTCompositeNode.h" },
		{ "ToolTip", "child node" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChildTask_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTCompositeNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Decorators_MetaData[] = {
		{ "Comment", "/** execution decorators */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTCompositeNode.h" },
		{ "ToolTip", "execution decorators" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DecoratorOps_MetaData[] = {
		{ "Comment", "/** logic operations for decorators */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTCompositeNode.h" },
		{ "ToolTip", "logic operations for decorators" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ChildComposite;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ChildTask;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Decorators_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Decorators;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DecoratorOps_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DecoratorOps;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBTCompositeChild>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FBTCompositeChild_Statics::NewProp_ChildComposite = { "ChildComposite", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBTCompositeChild, ChildComposite), Z_Construct_UClass_UBTCompositeNode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChildComposite_MetaData), NewProp_ChildComposite_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FBTCompositeChild_Statics::NewProp_ChildTask = { "ChildTask", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBTCompositeChild, ChildTask), Z_Construct_UClass_UBTTaskNode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChildTask_MetaData), NewProp_ChildTask_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FBTCompositeChild_Statics::NewProp_Decorators_Inner = { "Decorators", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UBTDecorator_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBTCompositeChild_Statics::NewProp_Decorators = { "Decorators", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBTCompositeChild, Decorators), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Decorators_MetaData), NewProp_Decorators_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBTCompositeChild_Statics::NewProp_DecoratorOps_Inner = { "DecoratorOps", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBTDecoratorLogic, METADATA_PARAMS(0, nullptr) }; // 2642397667
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBTCompositeChild_Statics::NewProp_DecoratorOps = { "DecoratorOps", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBTCompositeChild, DecoratorOps), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DecoratorOps_MetaData), NewProp_DecoratorOps_MetaData) }; // 2642397667
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBTCompositeChild_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBTCompositeChild_Statics::NewProp_ChildComposite,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBTCompositeChild_Statics::NewProp_ChildTask,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBTCompositeChild_Statics::NewProp_Decorators_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBTCompositeChild_Statics::NewProp_Decorators,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBTCompositeChild_Statics::NewProp_DecoratorOps_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBTCompositeChild_Statics::NewProp_DecoratorOps,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBTCompositeChild_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBTCompositeChild_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	nullptr,
	&NewStructOps,
	"BTCompositeChild",
	Z_Construct_UScriptStruct_FBTCompositeChild_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBTCompositeChild_Statics::PropPointers),
	sizeof(FBTCompositeChild),
	alignof(FBTCompositeChild),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBTCompositeChild_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBTCompositeChild_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBTCompositeChild()
{
	if (!Z_Registration_Info_UScriptStruct_BTCompositeChild.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BTCompositeChild.InnerSingleton, Z_Construct_UScriptStruct_FBTCompositeChild_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_BTCompositeChild.InnerSingleton;
}
// End ScriptStruct FBTCompositeChild

// Begin Class UBTCompositeNode
void UBTCompositeNode::StaticRegisterNativesUBTCompositeNode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTCompositeNode);
UClass* Z_Construct_UClass_UBTCompositeNode_NoRegister()
{
	return UBTCompositeNode::StaticClass();
}
struct Z_Construct_UClass_UBTCompositeNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BehaviorTree/BTCompositeNode.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTCompositeNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Children_MetaData[] = {
		{ "Comment", "/** child nodes */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTCompositeNode.h" },
		{ "ToolTip", "child nodes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Services_MetaData[] = {
		{ "Comment", "/** service nodes */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTCompositeNode.h" },
		{ "ToolTip", "service nodes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bApplyDecoratorScope_MetaData[] = {
		{ "Category", "Composite" },
		{ "Comment", "/** if set, all decorators in branch below will be removed when execution flow leaves (decorators on this node are not affected) */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTCompositeNode.h" },
		{ "ToolTip", "if set, all decorators in branch below will be removed when execution flow leaves (decorators on this node are not affected)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Children_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Children;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Services_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Services;
	static void NewProp_bApplyDecoratorScope_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyDecoratorScope;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTCompositeNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTCompositeNode_Statics::NewProp_Children_Inner = { "Children", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBTCompositeChild, METADATA_PARAMS(0, nullptr) }; // 2789450227
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBTCompositeNode_Statics::NewProp_Children = { "Children", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTCompositeNode, Children), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Children_MetaData), NewProp_Children_MetaData) }; // 2789450227
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBTCompositeNode_Statics::NewProp_Services_Inner = { "Services", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UBTService_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBTCompositeNode_Statics::NewProp_Services = { "Services", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTCompositeNode, Services), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Services_MetaData), NewProp_Services_MetaData) };
void Z_Construct_UClass_UBTCompositeNode_Statics::NewProp_bApplyDecoratorScope_SetBit(void* Obj)
{
	((UBTCompositeNode*)Obj)->bApplyDecoratorScope = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBTCompositeNode_Statics::NewProp_bApplyDecoratorScope = { "bApplyDecoratorScope", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UBTCompositeNode), &Z_Construct_UClass_UBTCompositeNode_Statics::NewProp_bApplyDecoratorScope_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bApplyDecoratorScope_MetaData), NewProp_bApplyDecoratorScope_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTCompositeNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTCompositeNode_Statics::NewProp_Children_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTCompositeNode_Statics::NewProp_Children,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTCompositeNode_Statics::NewProp_Services_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTCompositeNode_Statics::NewProp_Services,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTCompositeNode_Statics::NewProp_bApplyDecoratorScope,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTCompositeNode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBTCompositeNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTNode,
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTCompositeNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTCompositeNode_Statics::ClassParams = {
	&UBTCompositeNode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBTCompositeNode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBTCompositeNode_Statics::PropPointers),
	0,
	0x000800A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTCompositeNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTCompositeNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTCompositeNode()
{
	if (!Z_Registration_Info_UClass_UBTCompositeNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTCompositeNode.OuterSingleton, Z_Construct_UClass_UBTCompositeNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTCompositeNode.OuterSingleton;
}
template<> AIMODULE_API UClass* StaticClass<UBTCompositeNode>()
{
	return UBTCompositeNode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTCompositeNode);
// End Class UBTCompositeNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTCompositeNode_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EBTChildIndex_StaticEnum, TEXT("EBTChildIndex"), &Z_Registration_Info_UEnum_EBTChildIndex, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3111706214U) },
		{ EBTDecoratorLogic_StaticEnum, TEXT("EBTDecoratorLogic"), &Z_Registration_Info_UEnum_EBTDecoratorLogic, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1248187209U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FBTDecoratorLogic::StaticStruct, Z_Construct_UScriptStruct_FBTDecoratorLogic_Statics::NewStructOps, TEXT("BTDecoratorLogic"), &Z_Registration_Info_UScriptStruct_BTDecoratorLogic, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBTDecoratorLogic), 2642397667U) },
		{ FBTCompositeChild::StaticStruct, Z_Construct_UScriptStruct_FBTCompositeChild_Statics::NewStructOps, TEXT("BTCompositeChild"), &Z_Registration_Info_UScriptStruct_BTCompositeChild, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBTCompositeChild), 2789450227U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTCompositeNode, UBTCompositeNode::StaticClass, TEXT("UBTCompositeNode"), &Z_Registration_Info_UClass_UBTCompositeNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTCompositeNode), 326477604U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTCompositeNode_h_1626162629(TEXT("/Script/AIModule"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTCompositeNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTCompositeNode_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTCompositeNode_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTCompositeNode_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTCompositeNode_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTCompositeNode_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
