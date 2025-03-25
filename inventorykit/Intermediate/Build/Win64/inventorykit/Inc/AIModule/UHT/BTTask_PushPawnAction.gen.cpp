// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AIModule/Classes/BehaviorTree/Tasks/BTTask_PushPawnAction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_PushPawnAction() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTTask_PawnActionBase();
AIMODULE_API UClass* Z_Construct_UClass_UBTTask_PushPawnAction();
AIMODULE_API UClass* Z_Construct_UClass_UBTTask_PushPawnAction_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UDEPRECATED_PawnAction_NoRegister();
UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References

// Begin Class UBTTask_PushPawnAction
void UBTTask_PushPawnAction::StaticRegisterNativesUBTTask_PushPawnAction()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTTask_PushPawnAction);
UClass* Z_Construct_UClass_UBTTask_PushPawnAction_NoRegister()
{
	return UBTTask_PushPawnAction::StaticClass();
}
struct Z_Construct_UClass_UBTTask_PushPawnAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Action task node.\n * Push pawn action to controller.\n */" },
		{ "IncludePath", "BehaviorTree/Tasks/BTTask_PushPawnAction.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_PushPawnAction.h" },
		{ "ToolTip", "Action task node.\nPush pawn action to controller." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Action_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_PushPawnAction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Action;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_PushPawnAction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBTTask_PushPawnAction_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0126080020080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_PushPawnAction, Action_DEPRECATED), Z_Construct_UClass_UDEPRECATED_PawnAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Action_MetaData), NewProp_Action_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_PushPawnAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_PushPawnAction_Statics::NewProp_Action,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_PushPawnAction_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBTTask_PushPawnAction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTask_PawnActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_PushPawnAction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_PushPawnAction_Statics::ClassParams = {
	&UBTTask_PushPawnAction::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBTTask_PushPawnAction_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_PushPawnAction_Statics::PropPointers),
	0,
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_PushPawnAction_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTTask_PushPawnAction_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTTask_PushPawnAction()
{
	if (!Z_Registration_Info_UClass_UBTTask_PushPawnAction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_PushPawnAction.OuterSingleton, Z_Construct_UClass_UBTTask_PushPawnAction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTTask_PushPawnAction.OuterSingleton;
}
template<> AIMODULE_API UClass* StaticClass<UBTTask_PushPawnAction>()
{
	return UBTTask_PushPawnAction::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_PushPawnAction);
UBTTask_PushPawnAction::~UBTTask_PushPawnAction() {}
// End Class UBTTask_PushPawnAction

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_PushPawnAction_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_PushPawnAction, UBTTask_PushPawnAction::StaticClass, TEXT("UBTTask_PushPawnAction"), &Z_Registration_Info_UClass_UBTTask_PushPawnAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_PushPawnAction), 1040862806U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_PushPawnAction_h_3791135448(TEXT("/Script/AIModule"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_PushPawnAction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_PushPawnAction_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
