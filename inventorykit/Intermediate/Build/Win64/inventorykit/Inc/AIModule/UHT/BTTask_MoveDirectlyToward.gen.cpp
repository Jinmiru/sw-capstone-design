// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AIModule/Classes/BehaviorTree/Tasks/BTTask_MoveDirectlyToward.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_MoveDirectlyToward() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTTask_MoveDirectlyToward();
AIMODULE_API UClass* Z_Construct_UClass_UBTTask_MoveDirectlyToward_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UBTTask_MoveTo();
UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References

// Begin Class UBTTask_MoveDirectlyToward
void UBTTask_MoveDirectlyToward::StaticRegisterNativesUBTTask_MoveDirectlyToward()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTTask_MoveDirectlyToward);
UClass* Z_Construct_UClass_UBTTask_MoveDirectlyToward_NoRegister()
{
	return UBTTask_MoveDirectlyToward::StaticClass();
}
struct Z_Construct_UClass_UBTTask_MoveDirectlyToward_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Move Directly Toward task node.\n * Moves the AI pawn toward the specified Actor or Location (Vector) blackboard entry in a straight line, without regard to any navigation system. If you need the AI to navigate, use the \"Move To\" node instead.\n */" },
		{ "IncludePath", "BehaviorTree/Tasks/BTTask_MoveDirectlyToward.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_MoveDirectlyToward.h" },
		{ "ToolTip", "Move Directly Toward task node.\nMoves the AI pawn toward the specified Actor or Location (Vector) blackboard entry in a straight line, without regard to any navigation system. If you need the AI to navigate, use the \"Move To\" node instead." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDisablePathUpdateOnGoalLocationChange_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_MoveDirectlyToward.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bProjectVectorGoalToNavigation_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_MoveDirectlyToward.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUpdatedDeprecatedProperties_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_MoveDirectlyToward.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bDisablePathUpdateOnGoalLocationChange_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisablePathUpdateOnGoalLocationChange;
	static void NewProp_bProjectVectorGoalToNavigation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bProjectVectorGoalToNavigation;
	static void NewProp_bUpdatedDeprecatedProperties_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdatedDeprecatedProperties;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_MoveDirectlyToward>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UBTTask_MoveDirectlyToward_Statics::NewProp_bDisablePathUpdateOnGoalLocationChange_SetBit(void* Obj)
{
	((UBTTask_MoveDirectlyToward*)Obj)->bDisablePathUpdateOnGoalLocationChange = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBTTask_MoveDirectlyToward_Statics::NewProp_bDisablePathUpdateOnGoalLocationChange = { "bDisablePathUpdateOnGoalLocationChange", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UBTTask_MoveDirectlyToward), &Z_Construct_UClass_UBTTask_MoveDirectlyToward_Statics::NewProp_bDisablePathUpdateOnGoalLocationChange_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDisablePathUpdateOnGoalLocationChange_MetaData), NewProp_bDisablePathUpdateOnGoalLocationChange_MetaData) };
void Z_Construct_UClass_UBTTask_MoveDirectlyToward_Statics::NewProp_bProjectVectorGoalToNavigation_SetBit(void* Obj)
{
	((UBTTask_MoveDirectlyToward*)Obj)->bProjectVectorGoalToNavigation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBTTask_MoveDirectlyToward_Statics::NewProp_bProjectVectorGoalToNavigation = { "bProjectVectorGoalToNavigation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UBTTask_MoveDirectlyToward), &Z_Construct_UClass_UBTTask_MoveDirectlyToward_Statics::NewProp_bProjectVectorGoalToNavigation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bProjectVectorGoalToNavigation_MetaData), NewProp_bProjectVectorGoalToNavigation_MetaData) };
void Z_Construct_UClass_UBTTask_MoveDirectlyToward_Statics::NewProp_bUpdatedDeprecatedProperties_SetBit(void* Obj)
{
	((UBTTask_MoveDirectlyToward*)Obj)->bUpdatedDeprecatedProperties = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBTTask_MoveDirectlyToward_Statics::NewProp_bUpdatedDeprecatedProperties = { "bUpdatedDeprecatedProperties", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UBTTask_MoveDirectlyToward), &Z_Construct_UClass_UBTTask_MoveDirectlyToward_Statics::NewProp_bUpdatedDeprecatedProperties_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUpdatedDeprecatedProperties_MetaData), NewProp_bUpdatedDeprecatedProperties_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_MoveDirectlyToward_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_MoveDirectlyToward_Statics::NewProp_bDisablePathUpdateOnGoalLocationChange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_MoveDirectlyToward_Statics::NewProp_bProjectVectorGoalToNavigation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_MoveDirectlyToward_Statics::NewProp_bUpdatedDeprecatedProperties,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_MoveDirectlyToward_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBTTask_MoveDirectlyToward_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTask_MoveTo,
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_MoveDirectlyToward_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_MoveDirectlyToward_Statics::ClassParams = {
	&UBTTask_MoveDirectlyToward::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBTTask_MoveDirectlyToward_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_MoveDirectlyToward_Statics::PropPointers),
	0,
	0x000800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_MoveDirectlyToward_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTTask_MoveDirectlyToward_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTTask_MoveDirectlyToward()
{
	if (!Z_Registration_Info_UClass_UBTTask_MoveDirectlyToward.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_MoveDirectlyToward.OuterSingleton, Z_Construct_UClass_UBTTask_MoveDirectlyToward_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTTask_MoveDirectlyToward.OuterSingleton;
}
template<> AIMODULE_API UClass* StaticClass<UBTTask_MoveDirectlyToward>()
{
	return UBTTask_MoveDirectlyToward::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_MoveDirectlyToward);
UBTTask_MoveDirectlyToward::~UBTTask_MoveDirectlyToward() {}
// End Class UBTTask_MoveDirectlyToward

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_MoveDirectlyToward_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_MoveDirectlyToward, UBTTask_MoveDirectlyToward::StaticClass, TEXT("UBTTask_MoveDirectlyToward"), &Z_Registration_Info_UClass_UBTTask_MoveDirectlyToward, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_MoveDirectlyToward), 3881880728U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_MoveDirectlyToward_h_1119144327(TEXT("/Script/AIModule"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_MoveDirectlyToward_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_MoveDirectlyToward_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
