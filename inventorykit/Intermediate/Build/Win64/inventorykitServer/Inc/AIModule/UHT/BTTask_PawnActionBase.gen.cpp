// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AIModule/Classes/BehaviorTree/Tasks/BTTask_PawnActionBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_PawnActionBase() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTTask_PawnActionBase();
AIMODULE_API UClass* Z_Construct_UClass_UBTTask_PawnActionBase_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References

// Begin Class UBTTask_PawnActionBase
void UBTTask_PawnActionBase::StaticRegisterNativesUBTTask_PawnActionBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTTask_PawnActionBase);
UClass* Z_Construct_UClass_UBTTask_PawnActionBase_NoRegister()
{
	return UBTTask_PawnActionBase::StaticClass();
}
struct Z_Construct_UClass_UBTTask_PawnActionBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for managing pawn actions\n *\n * Task will set itself as action observer before pushing it to AI Controller,\n * override OnActionEvent if you need any special event handling.\n *\n * Please use result returned by PushAction for ExecuteTask function.\n */" },
		{ "IncludePath", "BehaviorTree/Tasks/BTTask_PawnActionBase.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_PawnActionBase.h" },
		{ "ToolTip", "Base class for managing pawn actions\n\nTask will set itself as action observer before pushing it to AI Controller,\noverride OnActionEvent if you need any special event handling.\n\nPlease use result returned by PushAction for ExecuteTask function." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_PawnActionBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBTTask_PawnActionBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_PawnActionBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_PawnActionBase_Statics::ClassParams = {
	&UBTTask_PawnActionBase::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_PawnActionBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTTask_PawnActionBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTTask_PawnActionBase()
{
	if (!Z_Registration_Info_UClass_UBTTask_PawnActionBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_PawnActionBase.OuterSingleton, Z_Construct_UClass_UBTTask_PawnActionBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTTask_PawnActionBase.OuterSingleton;
}
template<> AIMODULE_API UClass* StaticClass<UBTTask_PawnActionBase>()
{
	return UBTTask_PawnActionBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_PawnActionBase);
UBTTask_PawnActionBase::~UBTTask_PawnActionBase() {}
// End Class UBTTask_PawnActionBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_PawnActionBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_PawnActionBase, UBTTask_PawnActionBase::StaticClass, TEXT("UBTTask_PawnActionBase"), &Z_Registration_Info_UClass_UBTTask_PawnActionBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_PawnActionBase), 2648055316U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_PawnActionBase_h_890943607(TEXT("/Script/AIModule"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_PawnActionBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_PawnActionBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
