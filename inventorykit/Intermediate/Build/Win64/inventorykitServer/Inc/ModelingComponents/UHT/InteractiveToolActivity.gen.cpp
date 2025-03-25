// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModelingComponents/Public/InteractiveToolActivity.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractiveToolActivity() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractionMechanic();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UInteractiveToolActivity();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UInteractiveToolActivity_NoRegister();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UToolActivityHost();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UToolActivityHost_NoRegister();
UPackage* Z_Construct_UPackage__Script_ModelingComponents();
// End Cross Module References

// Begin Class UInteractiveToolActivity
void UInteractiveToolActivity::StaticRegisterNativesUInteractiveToolActivity()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInteractiveToolActivity);
UClass* Z_Construct_UClass_UInteractiveToolActivity_NoRegister()
{
	return UInteractiveToolActivity::StaticClass();
}
struct Z_Construct_UClass_UInteractiveToolActivity_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A tool activity is a sort of \"sub-tool\" used to break apart functionality in tools that\n * provide support for different multi-interaction subtasks. It is meant to limit the sprawl\n * of switch statements in the base tool, to allow subtasks to be designed similar to how a\n * tool might be designed, and to ease extendability.\n *\n * An activity has the following expectations:\n * - Setup() is called in host tool setup and Shutdown() is called in host tool Shutdown()\n * - Start() is called to start the activity (such as when user clicks a button).\n * - If the activity returns a result of EStartResult::ActivityRunning on Start(), it will expect\n *   Render() and Tick() calls from the host until either (a)- the host calls End() on the activity,\n *   or (b)- the activity reaches a stopping point itself and calls NotifyActivitySelfEnded() on the\n *   host. The activity should not require Render() and Tick() if it is not running.\n * \n *  Compared to a UInteractionMechanic, a tool activity:\n * - Expects that it is the main consumer of input, i.e. takes over the tool. Mechanics, by contrast,\n *   are currently often used together with other mechanics, or to support main tool functionality.\n * - Should not require the hosting tool to have specific knowledge about it or be heavily involved.\n *   Mechanics, by contrast, currently often require tools to use various mechanic-specific getters/setters\n *   during the tool.\n * \n * Passing data back and forth can be done either by letting a tool activity use a specific\n * context object that the tool can prep in the context store, or by requiring the host to\n * implement specific interfaces (that the activity can check for in Setup()).\n */" },
		{ "IncludePath", "InteractiveToolActivity.h" },
		{ "ModuleRelativePath", "Public/InteractiveToolActivity.h" },
		{ "ToolTip", "A tool activity is a sort of \"sub-tool\" used to break apart functionality in tools that\nprovide support for different multi-interaction subtasks. It is meant to limit the sprawl\nof switch statements in the base tool, to allow subtasks to be designed similar to how a\ntool might be designed, and to ease extendability.\n\nAn activity has the following expectations:\n- Setup() is called in host tool setup and Shutdown() is called in host tool Shutdown()\n- Start() is called to start the activity (such as when user clicks a button).\n- If the activity returns a result of EStartResult::ActivityRunning on Start(), it will expect\n  Render() and Tick() calls from the host until either (a)- the host calls End() on the activity,\n  or (b)- the activity reaches a stopping point itself and calls NotifyActivitySelfEnded() on the\n  host. The activity should not require Render() and Tick() if it is not running.\n\n Compared to a UInteractionMechanic, a tool activity:\n- Expects that it is the main consumer of input, i.e. takes over the tool. Mechanics, by contrast,\n  are currently often used together with other mechanics, or to support main tool functionality.\n- Should not require the hosting tool to have specific knowledge about it or be heavily involved.\n  Mechanics, by contrast, currently often require tools to use various mechanic-specific getters/setters\n  during the tool.\n\nPassing data back and forth can be done either by letting a tool activity use a specific\ncontext object that the tool can prep in the context store, or by requiring the host to\nimplement specific interfaces (that the activity can check for in Setup())." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInteractiveToolActivity>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInteractiveToolActivity_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractionMechanic,
	(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveToolActivity_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInteractiveToolActivity_Statics::ClassParams = {
	&UInteractiveToolActivity::StaticClass,
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
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveToolActivity_Statics::Class_MetaDataParams), Z_Construct_UClass_UInteractiveToolActivity_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInteractiveToolActivity()
{
	if (!Z_Registration_Info_UClass_UInteractiveToolActivity.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInteractiveToolActivity.OuterSingleton, Z_Construct_UClass_UInteractiveToolActivity_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInteractiveToolActivity.OuterSingleton;
}
template<> MODELINGCOMPONENTS_API UClass* StaticClass<UInteractiveToolActivity>()
{
	return UInteractiveToolActivity::StaticClass();
}
UInteractiveToolActivity::UInteractiveToolActivity() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractiveToolActivity);
// End Class UInteractiveToolActivity

// Begin Interface UToolActivityHost
void UToolActivityHost::StaticRegisterNativesUToolActivityHost()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UToolActivityHost);
UClass* Z_Construct_UClass_UToolActivityHost_NoRegister()
{
	return UToolActivityHost::StaticClass();
}
struct Z_Construct_UClass_UToolActivityHost_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractiveToolActivity.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IToolActivityHost>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UToolActivityHost_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UToolActivityHost_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UToolActivityHost_Statics::ClassParams = {
	&UToolActivityHost::StaticClass,
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
	0x001040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UToolActivityHost_Statics::Class_MetaDataParams), Z_Construct_UClass_UToolActivityHost_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UToolActivityHost()
{
	if (!Z_Registration_Info_UClass_UToolActivityHost.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UToolActivityHost.OuterSingleton, Z_Construct_UClass_UToolActivityHost_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UToolActivityHost.OuterSingleton;
}
template<> MODELINGCOMPONENTS_API UClass* StaticClass<UToolActivityHost>()
{
	return UToolActivityHost::StaticClass();
}
UToolActivityHost::UToolActivityHost(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UToolActivityHost);
UToolActivityHost::~UToolActivityHost() {}
// End Interface UToolActivityHost

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_InteractiveToolActivity_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInteractiveToolActivity, UInteractiveToolActivity::StaticClass, TEXT("UInteractiveToolActivity"), &Z_Registration_Info_UClass_UInteractiveToolActivity, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInteractiveToolActivity), 2585121323U) },
		{ Z_Construct_UClass_UToolActivityHost, UToolActivityHost::StaticClass, TEXT("UToolActivityHost"), &Z_Registration_Info_UClass_UToolActivityHost, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UToolActivityHost), 899697458U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_InteractiveToolActivity_h_3051976278(TEXT("/Script/ModelingComponents"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_InteractiveToolActivity_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_InteractiveToolActivity_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
