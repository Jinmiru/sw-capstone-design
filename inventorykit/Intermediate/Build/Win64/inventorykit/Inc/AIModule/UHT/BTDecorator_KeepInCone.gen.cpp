// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AIModule/Classes/BehaviorTree/Decorators/BTDecorator_KeepInCone.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTDecorator_KeepInCone() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator();
AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_KeepInCone();
AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_KeepInCone_NoRegister();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References

// Begin Class UBTDecorator_KeepInCone
void UBTDecorator_KeepInCone::StaticRegisterNativesUBTDecorator_KeepInCone()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTDecorator_KeepInCone);
UClass* Z_Construct_UClass_UBTDecorator_KeepInCone_NoRegister()
{
	return UBTDecorator_KeepInCone::StaticClass();
}
struct Z_Construct_UClass_UBTDecorator_KeepInCone_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Keep In Cone decorator node.\n * A decorator node that bases its condition on whether the observed position is still inside a cone. The cone's direction is calculated when the node first becomes relevant.\n */" },
		{ "HideCategories", "Condition" },
		{ "IncludePath", "BehaviorTree/Decorators/BTDecorator_KeepInCone.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_KeepInCone.h" },
		{ "ToolTip", "Keep In Cone decorator node.\nA decorator node that bases its condition on whether the observed position is still inside a cone. The cone's direction is calculated when the node first becomes relevant." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConeHalfAngle_MetaData[] = {
		{ "Category", "Decorator" },
		{ "Comment", "/** max allowed time for execution of underlying node */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_KeepInCone.h" },
		{ "ToolTip", "max allowed time for execution of underlying node" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConeOrigin_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "Comment", "/** blackboard key selector */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_KeepInCone.h" },
		{ "ToolTip", "blackboard key selector" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Observed_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "Comment", "/** blackboard key selector */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_KeepInCone.h" },
		{ "ToolTip", "blackboard key selector" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseSelfAsOrigin_MetaData[] = {
		{ "Comment", "// deprecated, set value of ConeOrigin on initialization\n" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_KeepInCone.h" },
		{ "ToolTip", "deprecated, set value of ConeOrigin on initialization" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseSelfAsObserved_MetaData[] = {
		{ "Comment", "// deprecated, set value of Observed on initialization\n" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_KeepInCone.h" },
		{ "ToolTip", "deprecated, set value of Observed on initialization" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ConeHalfAngle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ConeOrigin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Observed;
	static void NewProp_bUseSelfAsOrigin_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSelfAsOrigin;
	static void NewProp_bUseSelfAsObserved_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSelfAsObserved;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTDecorator_KeepInCone>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTDecorator_KeepInCone_Statics::NewProp_ConeHalfAngle = { "ConeHalfAngle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTDecorator_KeepInCone, ConeHalfAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConeHalfAngle_MetaData), NewProp_ConeHalfAngle_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTDecorator_KeepInCone_Statics::NewProp_ConeOrigin = { "ConeOrigin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTDecorator_KeepInCone, ConeOrigin), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConeOrigin_MetaData), NewProp_ConeOrigin_MetaData) }; // 3940742986
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTDecorator_KeepInCone_Statics::NewProp_Observed = { "Observed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTDecorator_KeepInCone, Observed), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Observed_MetaData), NewProp_Observed_MetaData) }; // 3940742986
void Z_Construct_UClass_UBTDecorator_KeepInCone_Statics::NewProp_bUseSelfAsOrigin_SetBit(void* Obj)
{
	((UBTDecorator_KeepInCone*)Obj)->bUseSelfAsOrigin = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBTDecorator_KeepInCone_Statics::NewProp_bUseSelfAsOrigin = { "bUseSelfAsOrigin", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UBTDecorator_KeepInCone), &Z_Construct_UClass_UBTDecorator_KeepInCone_Statics::NewProp_bUseSelfAsOrigin_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseSelfAsOrigin_MetaData), NewProp_bUseSelfAsOrigin_MetaData) };
void Z_Construct_UClass_UBTDecorator_KeepInCone_Statics::NewProp_bUseSelfAsObserved_SetBit(void* Obj)
{
	((UBTDecorator_KeepInCone*)Obj)->bUseSelfAsObserved = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBTDecorator_KeepInCone_Statics::NewProp_bUseSelfAsObserved = { "bUseSelfAsObserved", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UBTDecorator_KeepInCone), &Z_Construct_UClass_UBTDecorator_KeepInCone_Statics::NewProp_bUseSelfAsObserved_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseSelfAsObserved_MetaData), NewProp_bUseSelfAsObserved_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTDecorator_KeepInCone_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_KeepInCone_Statics::NewProp_ConeHalfAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_KeepInCone_Statics::NewProp_ConeOrigin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_KeepInCone_Statics::NewProp_Observed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_KeepInCone_Statics::NewProp_bUseSelfAsOrigin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_KeepInCone_Statics::NewProp_bUseSelfAsObserved,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_KeepInCone_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBTDecorator_KeepInCone_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTDecorator,
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_KeepInCone_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTDecorator_KeepInCone_Statics::ClassParams = {
	&UBTDecorator_KeepInCone::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBTDecorator_KeepInCone_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_KeepInCone_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_KeepInCone_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTDecorator_KeepInCone_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTDecorator_KeepInCone()
{
	if (!Z_Registration_Info_UClass_UBTDecorator_KeepInCone.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTDecorator_KeepInCone.OuterSingleton, Z_Construct_UClass_UBTDecorator_KeepInCone_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTDecorator_KeepInCone.OuterSingleton;
}
template<> AIMODULE_API UClass* StaticClass<UBTDecorator_KeepInCone>()
{
	return UBTDecorator_KeepInCone::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTDecorator_KeepInCone);
UBTDecorator_KeepInCone::~UBTDecorator_KeepInCone() {}
// End Class UBTDecorator_KeepInCone

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_KeepInCone_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTDecorator_KeepInCone, UBTDecorator_KeepInCone::StaticClass, TEXT("UBTDecorator_KeepInCone"), &Z_Registration_Info_UClass_UBTDecorator_KeepInCone, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTDecorator_KeepInCone), 174613466U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_KeepInCone_h_2036053290(TEXT("/Script/AIModule"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_KeepInCone_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_KeepInCone_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
