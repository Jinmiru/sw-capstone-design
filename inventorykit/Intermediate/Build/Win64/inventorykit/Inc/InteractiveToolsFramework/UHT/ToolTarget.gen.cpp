// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/InteractiveToolsFramework/Public/ToolTargets/ToolTarget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeToolTarget() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UToolTarget();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UToolTarget_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UToolTargetFactory();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UToolTargetFactory_NoRegister();
UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References

// Begin Class UToolTarget
void UToolTarget::StaticRegisterNativesUToolTarget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UToolTarget);
UClass* Z_Construct_UClass_UToolTarget_NoRegister()
{
	return UToolTarget::StaticClass();
}
struct Z_Construct_UClass_UToolTarget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A tool target is a stand-in object that a tool can operate on. It exposes the necessary\n * interfaces to the tool.\n *\n * There are two intended purposes of the tool target system:\n * 1. Allow tools to operate on arbitrary objects as long as they can be made to provide the \n *   tool with the necessary inputs. For instance, a mesh editing tool should be able to operate\n *   on skeletal, static, volume, and other mesh as long as the target manager has a registered\n *   factory that can use that type of mesh to create a suitable target.\n * 2. (not yet used) Help cache tool inputs. I.e., if a tool requires an expensive\n *   conversion before it can work on an item, the converted result can be stored in the\n *   tool target which can be cached by the target manager and provided the next time the\n *   same type of target is requested for that item.\n * \n * Given an object, tool builders usually ask the target manager to turn it into a target that\n * has the interfaces the tools needs. The tools cast the target to those interfaces to use\n * them.\n */" },
		{ "IncludePath", "ToolTargets/ToolTarget.h" },
		{ "ModuleRelativePath", "Public/ToolTargets/ToolTarget.h" },
		{ "ToolTip", "A tool target is a stand-in object that a tool can operate on. It exposes the necessary\ninterfaces to the tool.\n\nThere are two intended purposes of the tool target system:\n1. Allow tools to operate on arbitrary objects as long as they can be made to provide the\n  tool with the necessary inputs. For instance, a mesh editing tool should be able to operate\n  on skeletal, static, volume, and other mesh as long as the target manager has a registered\n  factory that can use that type of mesh to create a suitable target.\n2. (not yet used) Help cache tool inputs. I.e., if a tool requires an expensive\n  conversion before it can work on an item, the converted result can be stored in the\n  tool target which can be cached by the target manager and provided the next time the\n  same type of target is requested for that item.\n\nGiven an object, tool builders usually ask the target manager to turn it into a target that\nhas the interfaces the tools needs. The tools cast the target to those interfaces to use\nthem." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UToolTarget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UToolTarget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UToolTarget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UToolTarget_Statics::ClassParams = {
	&UToolTarget::StaticClass,
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
	0x000800A9u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UToolTarget_Statics::Class_MetaDataParams), Z_Construct_UClass_UToolTarget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UToolTarget()
{
	if (!Z_Registration_Info_UClass_UToolTarget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UToolTarget.OuterSingleton, Z_Construct_UClass_UToolTarget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UToolTarget.OuterSingleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UToolTarget>()
{
	return UToolTarget::StaticClass();
}
UToolTarget::UToolTarget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UToolTarget);
UToolTarget::~UToolTarget() {}
// End Class UToolTarget

// Begin Class UToolTargetFactory
void UToolTargetFactory::StaticRegisterNativesUToolTargetFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UToolTargetFactory);
UClass* Z_Construct_UClass_UToolTargetFactory_NoRegister()
{
	return UToolTargetFactory::StaticClass();
}
struct Z_Construct_UClass_UToolTargetFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for factories of tool targets, which let a tool manager build targets\n * out of inputs without knowing anything about the inputs itself, as long as it\n * has a factory registered that is able to process the input.\n */" },
		{ "IncludePath", "ToolTargets/ToolTarget.h" },
		{ "ModuleRelativePath", "Public/ToolTargets/ToolTarget.h" },
		{ "ToolTip", "Base class for factories of tool targets, which let a tool manager build targets\nout of inputs without knowing anything about the inputs itself, as long as it\nhas a factory registered that is able to process the input." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UToolTargetFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UToolTargetFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UToolTargetFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UToolTargetFactory_Statics::ClassParams = {
	&UToolTargetFactory::StaticClass,
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
	0x000800A9u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UToolTargetFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UToolTargetFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UToolTargetFactory()
{
	if (!Z_Registration_Info_UClass_UToolTargetFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UToolTargetFactory.OuterSingleton, Z_Construct_UClass_UToolTargetFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UToolTargetFactory.OuterSingleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UToolTargetFactory>()
{
	return UToolTargetFactory::StaticClass();
}
UToolTargetFactory::UToolTargetFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UToolTargetFactory);
UToolTargetFactory::~UToolTargetFactory() {}
// End Class UToolTargetFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_ToolTargets_ToolTarget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UToolTarget, UToolTarget::StaticClass, TEXT("UToolTarget"), &Z_Registration_Info_UClass_UToolTarget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UToolTarget), 1005322661U) },
		{ Z_Construct_UClass_UToolTargetFactory, UToolTargetFactory::StaticClass, TEXT("UToolTargetFactory"), &Z_Registration_Info_UClass_UToolTargetFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UToolTargetFactory), 2607135585U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_ToolTargets_ToolTarget_h_2924663448(TEXT("/Script/InteractiveToolsFramework"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_ToolTargets_ToolTarget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_ToolTargets_ToolTarget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
