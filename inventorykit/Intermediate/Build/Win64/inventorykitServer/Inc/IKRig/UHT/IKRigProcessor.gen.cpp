// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IKRig/Public/Rig/IKRigProcessor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIKRigProcessor() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
IKRIG_API UClass* Z_Construct_UClass_UIKRigProcessor();
IKRIG_API UClass* Z_Construct_UClass_UIKRigProcessor_NoRegister();
IKRIG_API UClass* Z_Construct_UClass_UIKRigSolver_NoRegister();
IKRIG_API UScriptStruct* Z_Construct_UScriptStruct_FGoalBone();
UPackage* Z_Construct_UPackage__Script_IKRig();
// End Cross Module References

// Begin ScriptStruct FGoalBone
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GoalBone;
class UScriptStruct* FGoalBone::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GoalBone.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GoalBone.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGoalBone, (UObject*)Z_Construct_UPackage__Script_IKRig(), TEXT("GoalBone"));
	}
	return Z_Registration_Info_UScriptStruct_GoalBone.OuterSingleton;
}
template<> IKRIG_API UScriptStruct* StaticStruct<FGoalBone>()
{
	return FGoalBone::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGoalBone_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Rig/IKRigProcessor.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGoalBone>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGoalBone_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_IKRig,
	nullptr,
	&NewStructOps,
	"GoalBone",
	nullptr,
	0,
	sizeof(FGoalBone),
	alignof(FGoalBone),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGoalBone_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGoalBone_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGoalBone()
{
	if (!Z_Registration_Info_UScriptStruct_GoalBone.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GoalBone.InnerSingleton, Z_Construct_UScriptStruct_FGoalBone_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GoalBone.InnerSingleton;
}
// End ScriptStruct FGoalBone

// Begin Class UIKRigProcessor
void UIKRigProcessor::StaticRegisterNativesUIKRigProcessor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIKRigProcessor);
UClass* Z_Construct_UClass_UIKRigProcessor_NoRegister()
{
	return UIKRigProcessor::StaticClass();
}
struct Z_Construct_UClass_UIKRigProcessor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Rig/IKRigProcessor.h" },
		{ "ModuleRelativePath", "Public/Rig/IKRigProcessor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Solvers_MetaData[] = {
		{ "Comment", "/** the stack of solvers to run in order */" },
		{ "ModuleRelativePath", "Public/Rig/IKRigProcessor.h" },
		{ "ToolTip", "the stack of solvers to run in order" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Solvers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Solvers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIKRigProcessor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIKRigProcessor_Statics::NewProp_Solvers_Inner = { "Solvers", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UIKRigSolver_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UIKRigProcessor_Statics::NewProp_Solvers = { "Solvers", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIKRigProcessor, Solvers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Solvers_MetaData), NewProp_Solvers_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIKRigProcessor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRigProcessor_Statics::NewProp_Solvers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRigProcessor_Statics::NewProp_Solvers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIKRigProcessor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UIKRigProcessor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_IKRig,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIKRigProcessor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIKRigProcessor_Statics::ClassParams = {
	&UIKRigProcessor::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UIKRigProcessor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UIKRigProcessor_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIKRigProcessor_Statics::Class_MetaDataParams), Z_Construct_UClass_UIKRigProcessor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIKRigProcessor()
{
	if (!Z_Registration_Info_UClass_UIKRigProcessor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIKRigProcessor.OuterSingleton, Z_Construct_UClass_UIKRigProcessor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIKRigProcessor.OuterSingleton;
}
template<> IKRIG_API UClass* StaticClass<UIKRigProcessor>()
{
	return UIKRigProcessor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIKRigProcessor);
UIKRigProcessor::~UIKRigProcessor() {}
// End Class UIKRigProcessor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_IKRigProcessor_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGoalBone::StaticStruct, Z_Construct_UScriptStruct_FGoalBone_Statics::NewStructOps, TEXT("GoalBone"), &Z_Registration_Info_UScriptStruct_GoalBone, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGoalBone), 2077023561U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIKRigProcessor, UIKRigProcessor::StaticClass, TEXT("UIKRigProcessor"), &Z_Registration_Info_UClass_UIKRigProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIKRigProcessor), 1114127606U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_IKRigProcessor_h_3582576285(TEXT("/Script/IKRig"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_IKRigProcessor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_IKRigProcessor_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_IKRigProcessor_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_IKRigProcessor_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
